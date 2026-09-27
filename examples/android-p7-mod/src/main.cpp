#define LL_MEMORY_OPERATORS
#include "ll/api/event/EventBus.h"
#include "ll/api/event/io/ConsoleOutputEvent.h"
#include "ll/api/io/FileSink.h"
#include "ll/api/io/FileUtils.h"
#include "ll/api/io/PatternFormatter.h"
#include "ll/api/memory/MemoryOperators.h"
#include "ll/api/mod/RegisterHelper.h"

#include "mc/deps/nbt/CompoundTag.h"
#include "nlohmann/json.hpp"

#include <filesystem>
#include <thread>
#include <unistd.h>

namespace {
std::weak_ptr<ll::mod::NativeMod> constructorMod = ll::mod::NativeMod::current();
}

class Example {
    ll::event::ListenerPtr mConsoleListener;

public:
    static Example& getInstance() {
        static Example instance;
        return instance;
    }

    bool load() {
        auto self = ll::mod::NativeMod::current();
        if (!self || self->getName() != "LeviLaminaP7Example" || constructorMod.lock() != self) return false;
        bool        workerMatches{};
        std::thread worker([&] { workerMatches = ll::mod::NativeMod::current() == self; });
        worker.join();
        if (!workerMatches) return false;

        auto root = Tag::newTag(Tag::Type::Compound);
        if (!root || !*root) return false;
        auto& nbt        = static_cast<CompoundTag&>(**root);
        nbt["cancelled"] = true;
        nbt["message"]   = std::string("LL P7");
        auto const& view = nbt;
        if (!static_cast<bool>(view["cancelled"]) || static_cast<std::string const&>(view["message"]) != "LL P7")
            return false;

        std::filesystem::create_directories(self->getDataDir());
        auto fileSink = std::make_shared<ll::io::FileSink>(
            self->getDataDir() / "p7-example.log",
            ll::makePolymorphic<ll::io::PatternFormatter>("[{2}][{1}] {0}", false)
        );
        fileSink->setFlushLevel(ll::io::LogLevel::Info);
        self->getLogger().addSink(std::move(fileSink));

        // Consume the original LL output event. The Android backend already
        // feeds core/io/Output; no additional event bus or game hook is needed.
        auto           eventReceipt = self->getDataDir() / "p7-events.json";
        auto           processId    = ::getpid();
        auto           loadThread   = std::this_thread::get_id();
        nlohmann::json initialEventReceipt{
            {           "processId",               processId},
            {               "event", "ConsoleOutputtedEvent"},
            {"loggerOutputObserved",                   false}
        };
        if (!ll::file_utils::writeFile(eventReceipt, initialEventReceipt.dump(2))) return false;
        mConsoleListener = ll::event::EventBus::getInstance().emplaceListener<ll::event::ConsoleOutputtedEvent>(
            [eventReceipt, processId, loadThread](ll::event::ConsoleOutputtedEvent& event) {
                if (event.isCancelled()
                    || event.message().find("P7 original EventBus console marker") == std::string::npos)
                    return;
                nlohmann::json receipt{
                    {            "processId",                                processId},
                    {                "event",                  "ConsoleOutputtedEvent"},
                    { "loggerOutputObserved",                                     true},
                    {"callbackOffLoadThread", std::this_thread::get_id() != loadThread}
                };
                // Do not log from a console-output listener: that would produce
                // another console-output event. The ordinary file API suffices.
                (void)ll::file_utils::writeFile(eventReceipt, receipt.dump(2));
            },
            ll::event::EventPriority::Normal,
            self
        );
        if (!mConsoleListener) return false;
        nlohmann::json result{
            {                           "name",               self->getName()},
            {            "constructorIdentity",                          true},
            {                 "workerIdentity",                 workerMatches},
            {                   "nbtRoundTrip",                          true},
            {"originalEventListenerRegistered",                          true},
            {                   "modDirectory",    self->getModDir().string()},
            {                  "dataDirectory",   self->getDataDir().string()},
            {                "configDirectory", self->getConfigDir().string()}
        };
        if (!ll::file_utils::writeFile(self->getDataDir() / "p7-load.json", result.dump(2))) return false;
        self->getLogger().info("Original LL registration, identity, paths and NBT round-trip passed");
        self->getLogger().info("P7 original EventBus console marker");
        return true;
    }
};

// load is the only required callback; the original helper leaves the rest optional.
LL_REGISTER_MOD(Example, Example::getInstance());
