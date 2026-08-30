#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/ViewCacheMode.h"
#include "mc/client/gui/oreui/interface/FacetRegistryLocation.h"
#include "mc/client/gui/oreui/interface/RouteMode.h"
#include "mc/client/gui/oreui/interface/ViewState.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
class IClientInstance;
class ISceneStack;
namespace OreUI { class FacetRegistryFactory; }
namespace OreUI { class Library; }
namespace OreUI { class RouteModeInputHandler; }
namespace OreUI { class Router; }
namespace OreUI { struct ViewId; }
namespace OreUI::Detail { class ViewContextFactory; }
namespace ui { class ScreenTechStackSelector; }
// clang-format on

namespace OreUI {

class SceneProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::OreUI::Library&>                                  mUILibrary;
    ::ll::TypedStorage<8, 8, ::ui::ScreenTechStackSelector const&>               mScreenTechStackSelector;
    ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::FacetRegistryFactory>>       mFacetRegistryFactory;
    ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::Detail::ViewContextFactory>> mContextFactory;
    ::ll::UntypedStorage<8, 24>                                                  mClientInstance;
    ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::RouteModeInputHandler>>      mRouteModeInputHandler;
    // NOLINTEND

public:
    // prevent constructor by default
    SceneProvider& operator=(SceneProvider const&);
    SceneProvider(SceneProvider const&);
    SceneProvider();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::OreUI::ViewId
    _createView(std::string const&, ::OreUI::FacetRegistryLocation, ::OreUI::ViewCacheMode) const;

    MCNAPI std::shared_ptr<AbstractScene> createScene(
        std::string const&,
        ::OreUI::Router&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>> const&,
        ::OreUI::RouteMode,
        ::OreUI::FacetRegistryLocation
    ) const;

    MCNAPI void preCacheGameplayViews();

    MCNAPI void preCacheOutOfGameViews();

    MCNAPI ~SceneProvider();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
