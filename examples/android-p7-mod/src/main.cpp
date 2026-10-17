#define LL_MEMORY_OPERATORS
#include "ll/api/event/EventBus.h"
#include "ll/api/event/client/ClientExitLevelEvent.h"
#include "ll/api/event/client/ClientJoinLevelEvent.h"
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

bool recordLifecycle(std::string_view phase) {
    auto self = ll::mod::NativeMod::current();
    if (!self) return false;
    self->getLogger().info("P7 original Mod {}", phase);
    return ll::file_utils::writeFile(
        self->getDataDir() / "p7-lifecycle.json",
        nlohmann::json{
            {"processId", ::getpid()},
            {    "phase",      phase}
    }.dump(2)
    );
}

bool referenceFields(CompoundTag const& nbt, std::string_view key, void const* pointer, std::string_view type) {
    auto object = nbt.getCompound(key);
    return object && object->contains("_nullable_", Tag::Type::Byte) && object->contains("_isconst_", Tag::Type::Byte)
        && object->contains("_pointer_", Tag::Type::Int64) && object->contains("_type_", Tag::Type::String)
        && !object->getBoolean("_nullable_") && !object->getBoolean("_isconst_")
        && object->getInt64("_pointer_") == static_cast<int64_t>(reinterpret_cast<uintptr_t>(pointer))
        && object->getString("_type_") == type;
}

std::string nbtValueHelpers() {
    CompoundTag original{
        {"enabled",                                       true},
        {  "count",                                int32_t{42}},
        {"address",               uint64_t{0xfedcba9876543210}},
        {  "ratio",                                       1.5f},
        {"precise",                                        2.5},
        {   "name",                                 "original"},
        { "nested", CompoundTagVariant{{"value", int16_t{-7}}}}
    };
    auto copy               = original;
    copy["name"]            = "copy";
    copy["nested"]["value"] = int16_t{9};
    auto        moved       = std::move(copy);
    auto const& view        = original;
    if (!view.at("enabled").is_boolean() || !static_cast<bool>(view.at("enabled"))) return "boolean initialization";
    if (view.at("count").get<IntTag>().data != 42) return "typed integer access";
    if (static_cast<uint64_t>(view.at("address")) != uint64_t{0xfedcba9876543210}) return "64-bit integer access";
    if (static_cast<float>(view.at("ratio")) != 1.5f || static_cast<double>(view.at("precise")) != 2.5)
        return "floating point access";
    if (static_cast<std::string_view>(view.at("name")) != "original") return "string copy ownership";
    if (static_cast<int>(view.at("nested")["value"]) != -7) return "nested copy ownership";
    if (static_cast<int>(moved["nested"]["value"]) != 9) return "nested move ownership";
    CompoundTag assigned;
    assigned = original;
    CompoundTag moveAssigned;
    moveAssigned = std::move(assigned);
    if (static_cast<std::string_view>(moveAssigned.at("name")) != "original") return "compound assignment";
    CompoundTagVariant nested;
    nested["created"]["value"]                                = "owned string";
    auto nestedCopy                                           = nested;
    static_cast<std::string&>(nestedCopy["created"]["value"]) = "changed";
    if (!nested.contains("created", Tag::Type::Compound)
        || static_cast<std::string_view>(nested["created"]["value"]) != "owned string")
        return "variant copy ownership";
    try {
        (void)view.at("missing");
        return "missing key accepted";
    } catch (std::out_of_range const&) {}
    if (original.contains("missing")) return "missing key inserted by at";
    try {
        (void)view.at("count").get<StringTag>();
        return "wrong tag type accepted";
    } catch (std::bad_variant_access const&) {}
    try {
        (void)nested["created"]["value"]["invalid"];
        return "indexing a string accepted";
    } catch (std::runtime_error const&) {}
    return {};
}
} // namespace

class Example {
    ll::event::ListenerPtr mConsoleListener;
    ll::event::ListenerPtr mJoinListener;
    ll::event::ListenerPtr mExitListener;

public:
    static Example& getInstance() {
        static Example instance;
        return instance;
    }

    bool load() {
        auto dataDirectory = ll::mod::getModsRoot() / "LeviLaminaP7Example" / "data";
        std::filesystem::create_directories(dataDirectory);
        auto fail = [&](std::string_view error) {
            (void)ll::file_utils::writeFile(
                dataDirectory / "p7-load.json",
                nlohmann::json{
                    {"processId", ::getpid()},
                    {   "loaded",      false},
                    {    "error",      error}
            }.dump(2)
            );
            return false;
        };
        (void)fail("entered load");
        auto self = ll::mod::NativeMod::current();
        if (!self) return fail("current identity unavailable");
        if (self->getName() != "LeviLaminaP7Example" || constructorMod.lock() != self)
            return fail("constructor identity");
        bool        workerMatches{};
        std::thread worker([&] { workerMatches = ll::mod::NativeMod::current() == self; });
        worker.join();
        if (!workerMatches) return fail("worker identity");
        try {
            if (auto error = nbtValueHelpers(); !error.empty()) return fail(error);
        } catch (std::exception const& error) {
            (void)fail(error.what());
            throw;
        }

        auto root = Tag::newTag(Tag::Type::Compound);
        if (!root || !*root) return fail("native compound factory");
        auto& nbt        = static_cast<CompoundTag&>(**root);
        nbt["cancelled"] = true;
        nbt["message"]   = std::string("LL P7");
        auto const& view = nbt;
        if (!static_cast<bool>(view["cancelled"]) || static_cast<std::string const&>(view["message"]) != "LL P7")
            return fail("native NBT round-trip");

        auto fileSink = std::make_shared<ll::io::FileSink>(
            self->getDataDir() / "p7-example.log",
            ll::makePolymorphic<ll::io::PatternFormatter>("[{2}][{1}] {0}", false)
        );
        fileSink->setFlushLevel(ll::io::LogLevel::Info);
        self->getLogger().addSink(std::move(fileSink));

        // Consume the original LL output event. The Android backend already
        // feeds core/io/Output; no additional event bus or game hook is needed.
        auto           eventReceipt = self->getDataDir() / "p7-events.json";
        auto           worldReceipt = self->getDataDir() / "p7-world-events.json";
        auto           processId    = ::getpid();
        auto           loadThread   = std::this_thread::get_id();
        nlohmann::json initialEventReceipt{
            {           "processId",               processId},
            {               "event", "ConsoleOutputtedEvent"},
            {"loggerOutputObserved",                   false}
        };
        if (!ll::file_utils::writeFile(eventReceipt, initialEventReceipt.dump(2))) return fail("console receipt write");
        if (!ll::file_utils::writeFile(
                worldReceipt,
                nlohmann::json{
                    {   "processId", processId},
                    {"joinObserved",     false},
                    {"exitObserved",     false}
        }.dump(2)
            ))
            return fail("world receipt write");
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
        if (!mConsoleListener) return fail("console listener registration");
        mJoinListener = ll::event::EventBus::getInstance().emplaceListener<ll::event::client::ClientJoinLevelEvent>(
            [worldReceipt, processId](ll::event::client::ClientJoinLevelEvent& event) {
                auto tag = Tag::newTag(Tag::Type::Compound);
                if (!tag) return;
                auto& serialized = static_cast<CompoundTag&>(**tag);
                event.serialize(serialized);
                bool valid = referenceFields(serialized, "self", &event.self(), "ClientInstance")
                          && referenceFields(serialized, "player", &event.player(), "Player");
                (void)ll::file_utils::writeFile(
                    worldReceipt,
                    nlohmann::json{
                        {             "processId", processId},
                        {          "joinObserved",      true},
                        {          "exitObserved",     false},
                        {"referenceSerialization",     valid}
                }.dump(2)
                );
            },
            ll::event::EventPriority::Normal,
            self
        );
        mExitListener = ll::event::EventBus::getInstance().emplaceListener<ll::event::client::ClientExitLevelEvent>(
            [worldReceipt, processId](ll::event::client::ClientExitLevelEvent& event) {
                auto tag = Tag::newTag(Tag::Type::Compound);
                if (!tag) return;
                auto& serialized = static_cast<CompoundTag&>(**tag);
                event.serialize(serialized);
                bool valid = referenceFields(serialized, "self", &event.self(), "ClientInstance");
                (void)ll::file_utils::writeFile(
                    worldReceipt,
                    nlohmann::json{
                        {             "processId", processId},
                        {          "joinObserved",      true},
                        {          "exitObserved",      true},
                        {"referenceSerialization",     valid}
                }.dump(2)
                );
            },
            ll::event::EventPriority::Normal,
            self
        );
        if (!mJoinListener || !mExitListener) return fail("world listener registration");
        nlohmann::json result{
            {                            "processId",                    ::getpid()},
            {                               "loaded",                          true},
            {                      "nbtValueHelpers",                          true},
            {                                 "name",               self->getName()},
            {                  "constructorIdentity",                          true},
            {                       "workerIdentity",                 workerMatches},
            {                         "nbtRoundTrip",                          true},
            {      "originalEventListenerRegistered",                          true},
            {"originalWorldEventListenersRegistered",                          true},
            {                         "modDirectory",    self->getModDir().string()},
            {                        "dataDirectory",   self->getDataDir().string()},
            {                      "configDirectory", self->getConfigDir().string()}
        };
        if (!ll::file_utils::writeFile(self->getDataDir() / "p7-load.json", result.dump(2))) return false;
        self->getLogger().info("Original LL registration, identity, paths and NBT round-trip passed");
        self->getLogger().info("P7 original EventBus console marker");
        return recordLifecycle("loaded");
    }

    bool enable() { return recordLifecycle("enabled"); }
    bool disable() { return recordLifecycle("disabled"); }
};

LL_REGISTER_MOD(Example, Example::getInstance());
