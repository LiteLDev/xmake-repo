#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace OreUI::EntryPoints {

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

} // namespace OreUI::EntryPoints
