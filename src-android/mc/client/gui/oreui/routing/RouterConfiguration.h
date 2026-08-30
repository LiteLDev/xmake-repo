#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/RouteMode.h"
#include "mc/client/gui/oreui/interface/RoutePrerequisite.h"
#include "mc/client/gui/oreui/routing/Route.h"
#include "mc/client/gui/oreui/routing/RouteDataParser.h"
#include "mc/client/gui/oreui/routing/RouteFlags.h"
#include "mc/client/gui/oreui/routing/RouteJsonMetadata.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ISceneStack;
class SceneFactory;
namespace OreUI { class IEntryPoint; }
namespace OreUI { class IRouteMatcher; }
namespace OreUI { struct RouteData; }
// clang-format on

namespace OreUI {

class RouterConfiguration {
public:
    // RouterConfiguration inner types declare
    // clang-format off
    struct EntryPoint;
    // clang-format on

    // RouterConfiguration inner types define
    struct EntryPoint {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string const>                     route;
        ::ll::TypedStorage<4, 4, ::OreUI::EntryPoints::RouteFlags const> flags;
        ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::IEntryPoint>>    definition;
        // NOLINTEND

    public:
        // prevent constructor by default
        EntryPoint& operator=(EntryPoint const&);
        EntryPoint(EntryPoint const&);
        EntryPoint();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::OreUI::RouteDataParser>                            mRouteDataParser;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::RouteJsonMetadata>>               mCurrentRouteJsonMetadata;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::Route>>                           mDefaultRoutes;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::Route>>                           mInGameRoutes;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::Route>>                           mOutOfGameRoutes;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::RouterConfiguration::EntryPoint>> mEntryPoints;
    // NOLINTEND

public:
    // prevent constructor by default
    RouterConfiguration& operator=(RouterConfiguration const&);
    RouterConfiguration();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RouterConfiguration(::OreUI::RouteDataParser&&);

    MCNAPI RouterConfiguration(::OreUI::RouterConfiguration&&);

    MCNAPI void
    _addDefaultRoute(std::string const&, std::string const&, ::OreUI::RouteMode, ::OreUI::RoutePrerequisite);

    MCNAPI void _addRoute(
        std::vector<OreUI::Route>&,
        std::string const&,
        std::string const&,
        ::OreUI::RouteMode,
        ::OreUI::RoutePrerequisite
    ) const;

    MCNAPI std::unique_ptr<OreUI::IRouteMatcher> createRouteMatcher(
        ::SceneFactory&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>> const&,
        ::OreUI::EntryPoints::RouteFlags
    ) const;

    MCNAPI std::tuple<std::vector<OreUI::RouteData>, std::vector<OreUI::RouteJsonMetadata>> getRouteData() const;

    MCNAPI bool reload();

    MCNAPI ~RouterConfiguration();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::RouteDataParser&&);

    MCNAPI void* $ctor(::OreUI::RouterConfiguration&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
