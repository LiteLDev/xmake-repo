#include "ll/core/LeviLamina.h"

#include "ll/api/i18n/I18n.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/service/GamingStatus.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/core/mod/ModRegistrar.h"

#include "mc/client/game/IMinecraftGame.h"
#include "mc/client/game/MinecraftGame.h"
#include "mc/client/game/RapidShutdown.h"
#include "mc/client/game/SerialWorkList.h"
#include "mc/deps/application/AppPlatform.h"

#include <memory>

namespace ll {

void setGamingStatus(GamingStatus);

void leviLaminaMain() {
    if (auto res = i18n::getInstance().load(getSelfModIns()->getLangDir()); !res) {
        getLogger().error("i18n load failed");
        res.error().log(getLogger());
    }
    printWelcomeMsg();
    mod::ModRegistrar::getInstance().loadAllMods();
}

LL_AUTO_TYPE_INSTANCE_HOOK(
    EnableAllModsHook,
    HookPriority::High,
    MinecraftGame,
    &MinecraftGame::_initFinish,
    SerialWorkList::WorkResult,
    ::std::shared_ptr<::MinecraftGame::InitContext>& initContext
) {
    mod::ModRegistrar::getInstance().enableAllMods();
    setGamingStatus(GamingStatus::Running);
    return origin(initContext);
}

LL_AUTO_TYPE_STATIC_HOOK(
    DisableAllModsHook,
    HookPriority::High,
    RapidShutdown,
    &RapidShutdown::_rapidShutdown,
    void,
    ::std::unique_ptr<::AppPlatform>    platform,
    ::std::unique_ptr<::IMinecraftGame> game
) {
    setGamingStatus(GamingStatus::Stopping);
    mod::ModRegistrar::getInstance().disableAllMods();
    setGamingStatus(GamingStatus::Default);
    origin(std::move(platform), std::move(game));
}

} // namespace ll

// Link this translation unit last so shared static registrations precede Mod loading,
// as they do before the Windows CRT calls DllMain.
[[maybe_unused]] static bool const leviLaminaEntry = [] {
    using namespace ll;
    setGamingStatus(GamingStatus::Default);
    try {
        leviLaminaMain();
    } catch (...) {
        error_utils::printCurrentException(getLogger());
    }
    setGamingStatus(GamingStatus::Starting);
    return true;
}();
