#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/SettingsModalType.h"
#include "mc/client/gui/SettingsTabIndex.h"
#include "mc/client/gui/oreui/interface/RouteType.h"
#include "mc/client/gui/oreui/routing/IEntryPoint.h"
#include "mc/client/gui/oreui/routing/RouteFlags.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ILevelListCache;
class ISceneStack;
class RealmsAPI;
class SceneFactory;
class ServerInstance;
class TaskGroup;
namespace OreUI { class RouteMatcher; }
namespace OreUI { struct RouteAction; }
namespace ui { class ScreenTechStackSelector; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/SettingsModalType.h"
#include "mc/client/gui/SettingsTabIndex.h"
#include "mc/client/gui/oreui/interface/RouteType.h"
#include "mc/client/gui/oreui/routing/IEntryPoint.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ILevelListCache;
class ISceneStack;
class RealmsAPI;
class SceneFactory;
class ServerInstance;
class TaskGroup;
namespace OreUI { class RouteMatcher; }
namespace OreUI { struct RouteAction; }
namespace ui { class ScreenTechStackSelector; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI::EntryPoints {

#if defined(LL_PLAT_A) // @header-generator platform
class Settings : public ::OreUI::IEntryPoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>                              mGetLevelListCache;
    ::ll::UntypedStorage<8, 48>                              mGetServerInstance;
    ::ll::UntypedStorage<8, 48>                              mIsInGame;
    ::ll::UntypedStorage<8, 48>                              mIsInServer;
    ::ll::UntypedStorage<8, 48>                              mIsInRealms;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>     mAsyncTaskGroup;
    ::ll::TypedStorage<8, 16, std::weak_ptr<RealmsAPI>>      mRealms;
    ::ll::TypedStorage<8, 8, ::ui::ScreenTechStackSelector&> mScreenTechStackSelector;
    // NOLINTEND

public:
    // prevent constructor by default
    Settings& operator=(Settings const&);
    Settings(Settings const&);
    Settings();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~Settings();

    virtual bool shouldAddToConfiguration() const;

    virtual void addToMatcher(::OreUI::RouteMatcher&, ::SceneFactory&, ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>> const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Settings(
        std::function<ILevelListCache&()>,
        std::function<ServerInstance*()>,
        std::function<bool()>,
        std::function<bool()>,
        std::function<bool()>,
        std::weak_ptr<RealmsAPI>,
        ::ui::ScreenTechStackSelector&
    );

    MCNAPI void _navigateToScreen(
        ::SettingsTabIndex,
        std::string const&,
        ::SceneFactory&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>> const&,
        ::OreUI::RouteAction const&,
        bool,
        bool,
        bool
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::optional<std::string> composeRoute(::SettingsTabIndex, ::OreUI::RouteType);

    MCNAPI static std::string defaultRoute();

    MCNAPI static std::optional<std::string> getRouteFromTabAndModal(::SettingsTabIndex, ::SettingsModalType);

    MCNAPI static std::optional<SettingsTabIndex> getTabFromPath(std::string const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[9]> BASE_SCREEN_ID();

    MCNAPI static ::OreUI::EntryPoints::RouteFlags const& FLAGS();

    MCNAPI static ::std::add_lvalue_reference_t<char const[16]> OREUI_ROUTE();

    MCNAPI static ::std::add_lvalue_reference_t<char const[10]> ROUTE();

    MCNAPI static ::std::add_lvalue_reference_t<char const[25]> STORAGE_LEGACY_ROUTE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::function<ILevelListCache&()>,
        std::function<ServerInstance*()>,
        std::function<bool()>,
        std::function<bool()>,
        std::function<bool()>,
        std::weak_ptr<RealmsAPI>,
        ::ui::ScreenTechStackSelector&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $shouldAddToConfiguration() const;

    MCNAPI void $addToMatcher(
        ::OreUI::RouteMatcher&,
        ::SceneFactory&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>> const&
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class Settings : public ::OreUI::IEntryPoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::ILevelListCache&()>> mGetLevelListCache;
    ::ll::TypedStorage<8, 64, ::std::function<::ServerInstance*()>>  mGetServerInstance;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>               mIsInGame;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>               mIsInServer;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>               mIsInRealms;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>         mAsyncTaskGroup;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::RealmsAPI>>          mRealms;
    ::ll::TypedStorage<8, 8, ::ui::ScreenTechStackSelector&>         mScreenTechStackSelector;
    // NOLINTEND

public:
    // prevent constructor by default
    Settings& operator=(Settings const&);
    Settings(Settings const&);
    Settings();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool shouldAddToConfiguration() const /*override*/;

    virtual void addToMatcher(
        ::OreUI::RouteMatcher&                              routeMatcher,
        ::SceneFactory&                                     sceneFactory,
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const& sceneStack
    ) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Settings(
        ::std::function<::ILevelListCache&()> getLevelListCache,
        ::std::function<::ServerInstance*()>  getServerInstance,
        ::std::function<bool()>               isInGame,
        ::std::function<bool()>               isInServer,
        ::std::function<bool()>               isInRealms,
        ::std::weak_ptr<::RealmsAPI>          realms,
        ::ui::ScreenTechStackSelector&        screenTechStackSelector
    );

    MCAPI void _navigateToScreen(
        ::SettingsTabIndex                                  tabIndex,
        ::std::string const&                                path,
        ::SceneFactory&                                     sceneFactory,
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const& sceneStack,
        ::OreUI::RouteAction const&                         routeAction,
        bool                                                fullscreen,
        bool                                                skipLegacyProgress,
        bool                                                legacySyncOnly
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::std::string> composeRoute(::SettingsTabIndex tabIndex, ::OreUI::RouteType routeType);

    MCAPI static ::std::string defaultRoute();

    MCAPI static ::std::optional<::std::string>
    getRouteFromTabAndModal(::SettingsTabIndex tabIndex, ::SettingsModalType modalType);

    MCAPI static ::std::optional<::SettingsTabIndex> getTabFromPath(::std::string const& path);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> OREUI_ROUTE();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> ROUTE();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> STORAGE_LEGACY_ROUTE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::function<::ILevelListCache&()> getLevelListCache,
        ::std::function<::ServerInstance*()>  getServerInstance,
        ::std::function<bool()>               isInGame,
        ::std::function<bool()>               isInServer,
        ::std::function<bool()>               isInRealms,
        ::std::weak_ptr<::RealmsAPI>          realms,
        ::ui::ScreenTechStackSelector&        screenTechStackSelector
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $shouldAddToConfiguration() const;

    MCAPI void $addToMatcher(
        ::OreUI::RouteMatcher&                              routeMatcher,
        ::SceneFactory&                                     sceneFactory,
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const& sceneStack
    ) const;
    // NOLINTEND
};
#else // @header-generator platform
class Settings {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI::EntryPoints
