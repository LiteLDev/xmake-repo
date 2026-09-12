#define LL_MEMORY_OPERATORS
#include "ll/api/io/FileUtils.h"
#include "ll/api/memory/MemoryOperators.h"
#include "ll/api/mod/ModManagerRegistry.h"
#include "ll/api/mod/RegisterHelper.h"
#include "native_mod_test_access.h"

#include <filesystem>
#include <fstream>
#include <stdexcept>
#include <thread>

#include "nlohmann/json.hpp"

namespace {
std::weak_ptr<ll::mod::NativeMod> constructorMod = ll::mod::NativeMod::current();

class OwnedFailure final : public std::runtime_error {
    std::filesystem::path mRecord;

public:
    explicit OwnedFailure(char const* message)
    : std::runtime_error(message),
      mRecord(ll::mod::NativeMod::current()->getDataDir() / "error-lifetime.txt") {
        std::ofstream(mRecord) << "alive";
    }
    ~OwnedFailure() noexcept override {
        try {
            std::ofstream(mRecord, std::ios::app) << " released";
        } catch (...) {}
    }
};

bool errorAlive(std::string_view name) {
    return ll::file_utils::readFile(ll::mod::getModsRoot() / name / "data/error-lifetime.txt") == "alive";
}

nlohmann::json readJson(std::filesystem::path const& path) {
    auto text = ll::file_utils::readFile(path);
    if (!text) throw std::runtime_error("fixture cannot read " + path.string());
    return nlohmann::json::parse(*text);
}

nlohmann::json state(std::string_view name) {
    return readJson(ll::mod::getModsRoot() / name / "data/fixture-state.json");
}

class NativeFixture {
    std::weak_ptr<ll::mod::NativeMod> mSelf;
    nlohmann::json                    mChecks = nlohmann::json::object();
    int                               mLoadCalls{};
    int                               mEnableCalls{};
    int                               mDisableCalls{};
    int                               mUnloadCalls{};
    std::ofstream                     mResource;

    void save() {
        auto self = mSelf.lock();
        if (!self) throw std::runtime_error("fixture lost its Mod identity");
        std::filesystem::create_directories(self->getDataDir());
        nlohmann::json result{
            {         "name",     self->getName()},
            {       "checks",             mChecks},
            {    "loadCalls",          mLoadCalls},
            {  "enableCalls",        mEnableCalls},
            { "disableCalls",       mDisableCalls},
            {  "unloadCalls",        mUnloadCalls},
            {"resourceOwned", mResource.is_open()}
        };
        if (!ll::file_utils::writeFile(self->getDataDir() / "fixture-state.json", result.dump(2)))
            throw std::runtime_error("fixture cannot save its result");
    }

public:
    static NativeFixture& getInstance() {
        static NativeFixture instance;
        return instance;
    }

    bool load() {
        auto self = ll::mod::NativeMod::current();
        if (!self || self->getName() != P7_FIXTURE_NAME) return false;
        mSelf = self;
        ++mLoadCalls;
        mChecks["constructorIdentity"] = constructorMod.lock() == self;
        bool        workerMatches{};
        std::thread worker([&] { workerMatches = ll::mod::NativeMod::current() == self; });
        worker.join();
        mChecks["workerIdentity"] = workerMatches;

#if P7_FIXTURE_KIND == 1
        auto& registry = ll::mod::ModManagerRegistry::getInstance();
        char  error[8192]{};
        auto  example = registry.getMod("LeviLaminaP7Example");
        mChecks["loadOnlyExampleLoaded"] = static_cast<bool>(example);
        mChecks["optionalEnable"] =
            p7_test_enable_mod("LeviLaminaP7Example", error, sizeof(error)) && example->isEnabled();
        mChecks["optionalDisable"] =
            p7_test_disable_mod("LeviLaminaP7Example", error, sizeof(error)) && example->isDisabled();
        auto nested                    = p7_test_load_mod("P7NativeB", error, sizeof(error));
        mChecks["nestedLoad"]          = static_cast<bool>(nested);
        mChecks["nestedScopeRestored"] = ll::mod::NativeMod::current() == self;
        if (nested) {
            auto other = std::static_pointer_cast<ll::mod::NativeMod>(registry.getMod("P7NativeB"));
            mChecks["distinctModuleIdentity"]    = other && other != self && other->getHandle() != self->getHandle();
            auto otherState                      = state("P7NativeB");
            mChecks["nestedConstructorIdentity"] = otherState["checks"]["constructorIdentity"];
            mChecks["nestedWorkerIdentity"]      = otherState["checks"]["workerIdentity"];
        }
        auto failed = p7_test_load_mod("P7LoadFailure", error, sizeof(error));
        mChecks["loadExceptionReported"] =
            !failed && std::string_view(error).find("owned load exception") != std::string::npos;
        mChecks["loadCleanupFailureReported"] = std::string_view(error).find("cannot be unloaded") != std::string::npos;
        auto retained =
            std::static_pointer_cast<ll::mod::NativeMod>(registry.getManager("native")->getMod("P7LoadFailure"));
        mChecks["failedOwnerRetained"]     = retained && retained->getHandle() && !registry.hasMod("P7LoadFailure");
        mChecks["failedCleanupCalledOnce"] = state("P7LoadFailure")["unloadCalls"] == 1;
        mChecks["loadErrorRetained"]       = errorAlive("P7LoadFailure");
        auto retry                         = p7_test_load_mod("P7LoadFailure", error, sizeof(error));
        mChecks["failedOwnerBlocksReload"] = !retry && state("P7LoadFailure")["loadCalls"] == 1;

        auto loaded                    = p7_test_load_mod("P7EnableFailure", error, sizeof(error));
        mChecks["enableFixtureLoaded"] = static_cast<bool>(loaded);
        if (loaded) {
            auto enabled = p7_test_enable_mod("P7EnableFailure", error, sizeof(error));
            mChecks["enableExceptionReported"] =
                !enabled && std::string_view(error).find("owned enable exception") != std::string::npos;
            auto failedState                = state("P7EnableFailure");
            mChecks["failedEnableCleaned"]  = failedState["disableCalls"] == 1 && failedState["resourceOwned"] == false;
            mChecks["failedEnableDisabled"] = registry.getMod("P7EnableFailure")->isDisabled();
            mChecks["enableErrorRetained"]  = errorAlive("P7EnableFailure");
        }
        auto cleanupLoaded                     = p7_test_load_mod("P7EnableCleanupFailure", error, sizeof(error));
        mChecks["cleanupFailureFixtureLoaded"] = cleanupLoaded;
        if (cleanupLoaded) {
            auto enabled = p7_test_enable_mod("P7EnableCleanupFailure", error, sizeof(error));
            mChecks["enableCleanupFailureReported"] =
                !enabled && std::string_view(error).find("roll back") != std::string::npos;
            auto failedState = state("P7EnableCleanupFailure");
            auto retainedMod = std::static_pointer_cast<ll::mod::NativeMod>(registry.getMod("P7EnableCleanupFailure"));
            mChecks["enableCleanupFailureRetained"] = retainedMod && retainedMod->getHandle()
                                                   && failedState["disableCalls"] == 1
                                                   && failedState["resourceOwned"] == true;
            mChecks["enableCleanupErrorRetained"] = errorAlive("P7EnableCleanupFailure");
        }
        mChecks["badManifestRejected"]       = !registry.hasMod("P7BadManifest");
        mChecks["missingDependencyRejected"] = !registry.hasMod("P7MissingDependency");
        for (auto name : {"P7WrongOS", "P7WrongArch", "P7WrongAbi", "P7BrokenElf"}) {
            mChecks[std::string(name) + "Rejected"] = !registry.hasMod(name) && !registry.getManager("native")->hasMod(name);
        }
#elif P7_FIXTURE_KIND == 3
        save();
        mResource.open(self->getDataDir() / "load-resource.txt");
        if (!mResource) throw std::runtime_error("fixture cannot acquire its load resource");
        save();
        throw OwnedFailure("owned load exception");
#endif
        save();
        bool passed = true;
        for (auto const& check : mChecks.items()) passed = passed && check.value().get<bool>();
        self->getLogger().info("Original native manager fixture {}: {}", P7_FIXTURE_NAME, passed ? "passed" : "failed");
        return passed;
    }

    bool enable() {
        ++mEnableCalls;
        mResource.open(mSelf.lock()->getDataDir() / "enable-resource.txt");
        if (!mResource) throw std::runtime_error("fixture cannot acquire its enable resource");
        save();
#if P7_FIXTURE_KIND == 4 || P7_FIXTURE_KIND == 5
        throw OwnedFailure("owned enable exception");
#else
        return true;
#endif
    }

    bool disable() {
        ++mDisableCalls;
#if P7_FIXTURE_KIND == 5
        save();
        return false;
#else
        mResource.close();
        save();
        return !mResource.fail();
#endif
    }

    bool unload() {
        ++mUnloadCalls;
        save();
        return P7_FIXTURE_KIND != 3;
    }
};
} // namespace

LL_REGISTER_MOD(NativeFixture, NativeFixture::getInstance());
