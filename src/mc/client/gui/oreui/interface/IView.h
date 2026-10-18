#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/interface/RouteMode.h"
#include "mc/client/gui/oreui/interface/ViewState.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class IGamefaceTextInputProxy;
class ScreenContext;
struct TextBoxStateChange;
namespace OreUI { class IScene; }
namespace OreUI { class IViewTestHelper; }
namespace OreUI { class RouterLocation; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/interface/RouteMode.h"
#include "mc/client/gui/oreui/interface/ViewState.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class IGamefaceTextInputProxy;
class ScreenContext;
struct TextBoxStateChange;
namespace OreUI { class IScene; }
namespace OreUI { class IViewTestHelper; }
namespace OreUI { class RouterLocation; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class IView : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IView();

    virtual void pushCurrentScene(::OreUI::IScene&, ::OreUI::RouteMode) = 0;

    virtual bool hasScenes() const = 0;

    virtual void removeScene(::OreUI::IScene const&) = 0;

    virtual void update(double) = 0;

    virtual void render(::ScreenContext&) = 0;

    virtual void resize(uint, uint) = 0;

    virtual void reload() = 0;

    virtual void leave() = 0;

    virtual void onSuspend() = 0;

    virtual void onResume() = 0;

    virtual void onRouteChanged(std::optional<OreUI::RouterLocation> const&, std::optional<OreUI::RouterLocation> const&) = 0;

    virtual std::string_view getUrl() const = 0;

    virtual ::OreUI::RouteMode getRouteMode() const = 0;

    virtual uint getWidth() const = 0;

    virtual uint getHeight() const = 0;

    virtual ::OreUI::ViewState getState() const = 0;

    virtual void setTextBoxState(::TextBoxStateChange const&) = 0;

    virtual void onKeyboardDismissed() = 0;

    virtual void setCaretLocation(int) = 0;

    virtual void triggerEvent(std::string const&, std::string const&) = 0;

    virtual std::unique_ptr<IGamefaceTextInputProxy> getTextInputProxy() = 0;

    virtual ::OreUI::IViewTestHelper* getViewTestHelper() = 0;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class IView : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IView() /*override*/ = default;

    virtual void pushCurrentScene(::OreUI::IScene& scene, ::OreUI::RouteMode routeMode) = 0;

    virtual bool hasScenes() const = 0;

    virtual void removeScene(::OreUI::IScene const& scene) = 0;

    virtual void update(double time) = 0;

    virtual void render(::ScreenContext& screenContext) = 0;

    virtual void resize(uint width, uint height) = 0;

    virtual void reload() = 0;

    virtual void leave() = 0;

    virtual void onSuspend() = 0;

    virtual void onResume() = 0;

    virtual void onRouteChanged(
        ::std::optional<::OreUI::RouterLocation> const& previousLocation,
        ::std::optional<::OreUI::RouterLocation> const& currentLocation
    ) = 0;

    virtual ::std::string_view getUrl() const = 0;

    virtual ::OreUI::RouteMode getRouteMode() const = 0;

    virtual uint getWidth() const = 0;

    virtual uint getHeight() const = 0;

    virtual ::OreUI::ViewState getState() const = 0;

    virtual void setTextBoxState(::TextBoxStateChange const& stateChange) = 0;

    virtual void onKeyboardDismissed() = 0;

    virtual void setCaretLocation(int caretLocation) = 0;

    virtual void triggerEvent(::std::string const& eventName, ::std::string const& eventData) = 0;

    virtual ::std::unique_ptr<::IGamefaceTextInputProxy> getTextInputProxy() = 0;

    virtual ::OreUI::IViewTestHelper* getViewTestHelper() = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IView {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
