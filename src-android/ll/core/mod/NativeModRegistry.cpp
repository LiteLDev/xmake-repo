#include "ll/core/mod/NativeModRegistry.h"
#include <algorithm>
#include <cstdio>

namespace ll::android {
bool NativeModRegistry::hasRetainedFailure() const noexcept {
    return std::any_of(entries.begin(), entries.end(), [](auto const& entry) {
        return entry->state != NativeModState::Enabled;
    });
}
void NativeModRegistry::report(NativeModEntry const& entry, std::string_view phase, bool success) noexcept {
    char text[256];
    int  size = std::snprintf(
        text,
        sizeof(text),
        "LeviLamina Mod %s: %.*s %s",
        entry.manifest.name.c_str(),
        static_cast<int>(phase.size()),
        phase.data(),
        success ? "ok" : "failed; retained if cleanup incomplete"
    );
    if (size > 0 && static_cast<size_t>(size) < sizeof(text))
        logger.write(success ? LLAndroidLog_Info : LLAndroidLog_Error, text, static_cast<size_t>(size));
}
bool NativeModRegistry::call(NativeModEntry& entry, ModPhase phase, LLAndroidModLifecycleV1 callback) noexcept {
    OwnerScope owner(entry.owner, phase);
    return callback(entry.registration->instance, &entry.context);
}
bool NativeModRegistry::finish(NativeModEntry& entry, bool disable) noexcept {
    if (entry.state == NativeModState::DisableFailed || entry.state == NativeModState::UnloadFailed) return false;
    if (disable) {
        bool success = call(entry, ModPhase::Disable, entry.registration->disable);
        report(entry, "disable", success);
        if (!success) {
            entry.state = NativeModState::DisableFailed;
            return false;
        }
        entry.state = NativeModState::Loaded;
    }
    if (!events.removeOwner(entry.owner)) {
        entry.state = NativeModState::UnloadFailed;
        report(entry, "owner drain", false);
        return false;
    }
    bool unloaded = call(entry, ModPhase::Unload, entry.registration->unload);
    report(entry, "unload", unloaded);
    if (!unloaded) {
        entry.state = NativeModState::UnloadFailed;
        return false;
    }
    entry.closeAttempted = true;
    int closed           = entry.close(entry.handle);
    if (closed) {
        entry.state = NativeModState::UnloadFailed;
        report(entry, "dlclose", false);
        return false;
    }
    entry.handle       = nullptr;
    entry.registration = nullptr;
    entry.context      = {};
    entry.state        = NativeModState::Unloaded;
    report(entry, "dlclose", true);
    return true;
}
bool NativeModRegistry::loadAndEnable(std::unique_ptr<NativeModEntry> value) noexcept {
    if (currentOwner().callbackToken || !value || !value->handle || !value->registration || !value->close) return false;
    auto* entry = value.get();
    entries.push_back(std::move(value));
    bool loaded = call(*entry, ModPhase::Load, entry->registration->load);
    report(*entry, "load", loaded);
    if (!loaded) {
        entry->state = NativeModState::LoadFailed;
        finish(*entry, false);
    } else {
        entry->state = NativeModState::Loaded;
        entry->state = NativeModState::Enabling;
        bool enabled = call(*entry, ModPhase::Enable, entry->registration->enable);
        report(*entry, "enable", enabled);
        if (!enabled) {
            entry->state = NativeModState::EnableFailed;
            finish(*entry, false);
        } else {
            entry->state = NativeModState::Enabled;
            if (!events.activateOwner(entry->owner)) finish(*entry, true);
        }
    }
    bool enabled = entry->state == NativeModState::Enabled;
    std::erase_if(entries, [](auto const& item) { return item->state == NativeModState::Unloaded; });
    return enabled;
}
bool NativeModRegistry::shutdown() noexcept {
    if (currentOwner().callbackToken) return false;
    bool clean = true;
    for (auto entry = entries.rbegin(); entry != entries.rend(); ++entry) {
        bool result = finish(**entry, (*entry)->state == NativeModState::Enabled);
        clean       = result && clean;
    }
    std::erase_if(entries, [](auto const& item) { return item->state == NativeModState::Unloaded; });
    return clean && entries.empty();
}
} // namespace ll::android
