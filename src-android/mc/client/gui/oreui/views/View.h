#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/ScreenPerformanceTelemetry.h"
#include "mc/client/gui/oreui/interface/IView.h"
#include "mc/client/gui/oreui/interface/RouteMode.h"
#include "mc/client/gui/oreui/interface/ViewState.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/external/gameface/cohtml/ControlType.h"
#include "mc/external/gameface/cohtml/Cursors.h"
#include "mc/external/gameface/cohtml/IViewListener.h"
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IGamefaceTextInputProxy;
class IOptionRegistry;
class KeyboardManager;
class Option;
class ScreenContext;
struct TextBoxStateChange;
namespace OreUI { class BedrockInputSource; }
namespace OreUI { class FacetBinder; }
namespace OreUI { class IFacetRegistry; }
namespace OreUI { class IScene; }
namespace OreUI { class ITelemetry; }
namespace OreUI { class IViewTestHelper; }
namespace OreUI { class RouterLocation; }
namespace OreUI { class ViewInputHandler; }
namespace OreUI { class ViewRenderer; }
namespace OreUI { struct ViewId; }
namespace OreUI::Detail { class Binder; }
namespace OreUI::Detail { class ViewContext; }
namespace OreUI::Detail { class ViewContextFactory; }
namespace cohtml { class IClientSideSocket; }
namespace cohtml { class ISocketListener; }
namespace cohtml { class View; }
namespace cohtml { struct ScreenInfo; }
// clang-format on

namespace OreUI {

class View : public ::OreUI::IView, public ::cohtml::IViewListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::cohtml::View*>                                     mGamefaceView;
    ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::ViewRenderer>>                mRenderer;
    ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::ViewInputHandler>>            mInputHandler;
    ::ll::TypedStorage<8, 24, std::string>                                        mUrl;
    ::ll::TypedStorage<8, 24, std::vector<std::reference_wrapper<OreUI::IScene>>> mScenes;
    ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::BedrockInputSource>>          mBedrockInputSource;
    ::ll::UntypedStorage<8, 24>                                                   mClientInstance;
    ::ll::TypedStorage<8, 8, ::KeyboardManager&>                                  mKeyboardManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::FacetBinder>>                 mFacetBinder;
    ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::IFacetRegistry>>              mFacetRegistry;
    ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::Detail::Binder>>              mBinder;
    ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::Detail::ViewContext>>         mViewContext;
    ::ll::TypedStorage<8, 8, ::OreUI::ITelemetry&>                                mTelemetry;
    ::ll::TypedStorage<8, 384, std::optional<OreUI::ScreenPerformanceTelemetry>>  mScreenPerformanceTelemetry;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                           mUpdatedFacets;
    ::ll::TypedStorage<1, 1, ::OreUI::ViewState>                                  mState;
    ::ll::TypedStorage<4, 4, ::OreUI::RouteMode>                                  mRouteMode;
    ::ll::TypedStorage<8, 8, double>                                              mLastUpdateTime;
    ::ll::TypedStorage<8, 8, double>                                              mTimeStamp;
    ::ll::TypedStorage<8, 8, ::Option*>                                           mScreenAnimationsOption;
    ::ll::UntypedStorage<8, 48>                                                   mAudioStreams;
    // NOLINTEND

public:
    // prevent constructor by default
    View();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~View();

    virtual void pushCurrentScene(::OreUI::IScene&, ::OreUI::RouteMode);

    virtual bool hasScenes() const;

    virtual void removeScene(::OreUI::IScene const&);

    virtual void update(double);

    virtual void render(::ScreenContext&);

    virtual void resize(uint, uint);

    virtual void reload();

    virtual void leave();

    virtual void onSuspend();

    virtual void onResume();

    virtual void onRouteChanged(std::optional<OreUI::RouterLocation> const&, std::optional<OreUI::RouterLocation> const&);

    virtual std::string_view getUrl() const;

    virtual ::OreUI::RouteMode getRouteMode() const;

    virtual uint getWidth() const;

    virtual uint getHeight() const;

    virtual ::OreUI::ViewState getState() const;

    virtual void setTextBoxState(::TextBoxStateChange const&);

    virtual void onKeyboardDismissed();

    virtual void setCaretLocation(int);

    virtual void triggerEvent(std::string const&, std::string const&);

    virtual std::unique_ptr<IGamefaceTextInputProxy> getTextInputProxy();

    virtual ::OreUI::IViewTestHelper* getViewTestHelper();

    virtual void OnLoadFailed(char const*, char const*);

    virtual void OnReadyForBindings();

    virtual void OnBindingsReleased();

    virtual ::cohtml::ScreenInfo OnScreenInfoRequested();

    virtual void OnTextInputTypeChanged(::cohtml::TextInputControlType::ControlType);

    virtual void OnCaretRectChanged(int, int, uint, uint);

    virtual void OnCursorChanged(::cohtml::CursorTypes::Cursors, char const*, float const*, float const*);

    virtual ::cohtml::IClientSideSocket* OnCreateWebSocket(::cohtml::ISocketListener*, char const*, char const**, uint);

    virtual void OnAudioStreamCreated(int, int, int, float);

    virtual void OnAudioStreamClosed(int);

    virtual void OnAudioStreamPlay(int);

    virtual void OnAudioStreamPause(int);

    virtual void OnAudioDataReceived(int, int, float**, int);

    virtual void OnAudioStreamEnded(int);

    virtual void OnAudioStreamVolumeChanged(int, float);

    virtual void OnClipboardTextSet(char const*, uint);

    virtual void OnClipboardTextGet(::cohtml::IViewListener::IClipboardData*);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $pushCurrentScene(::OreUI::IScene&, ::OreUI::RouteMode);

    MCNAPI bool $hasScenes() const;

    MCNAPI void $removeScene(::OreUI::IScene const&);

    MCNAPI void $update(double);

    MCNAPI void $render(::ScreenContext&);

    MCNAPI void $resize(uint, uint);

    MCNAPI void $reload();

    MCNAPI void $leave();

    MCNAPI void $onSuspend();

    MCNAPI void $onResume();

    MCNAPI void
    $onRouteChanged(std::optional<OreUI::RouterLocation> const&, std::optional<OreUI::RouterLocation> const&);

    MCNAPI std::string_view $getUrl() const;

    MCNAPI ::OreUI::RouteMode $getRouteMode() const;

    MCNAPI uint $getWidth() const;

    MCNAPI uint $getHeight() const;

    MCNAPI ::OreUI::ViewState $getState() const;

    MCNAPI void $setTextBoxState(::TextBoxStateChange const&);

    MCNAPI void $onKeyboardDismissed();

    MCNAPI void $setCaretLocation(int);

    MCNAPI void $triggerEvent(std::string const&, std::string const&);

    MCNAPI std::unique_ptr<IGamefaceTextInputProxy> $getTextInputProxy();

    MCNAPI ::OreUI::IViewTestHelper* $getViewTestHelper();

    MCNAPI void $OnLoadFailed(char const*, char const*);

    MCNAPI void $OnReadyForBindings();

    MCNAPI void $OnBindingsReleased();

    MCNAPI ::cohtml::ScreenInfo $OnScreenInfoRequested();

    MCNAPI void $OnTextInputTypeChanged(::cohtml::TextInputControlType::ControlType);

    MCNAPI void $OnCaretRectChanged(int, int, uint, uint);

    MCNAPI void $OnCursorChanged(::cohtml::CursorTypes::Cursors, char const*, float const*, float const*);

    MCNAPI ::cohtml::IClientSideSocket* $OnCreateWebSocket(::cohtml::ISocketListener*, char const*, char const**, uint);

    MCNAPI void $OnAudioStreamCreated(int, int, int, float);

    MCNAPI void $OnAudioStreamClosed(int);

    MCNAPI void $OnAudioStreamPlay(int);

    MCNAPI void $OnAudioStreamPause(int);

    MCNAPI void $OnAudioDataReceived(int, int, float**, int);

    MCNAPI void $OnAudioStreamEnded(int);

    MCNAPI void $OnAudioStreamVolumeChanged(int, float);

    MCNAPI void $OnClipboardTextSet(char const*, uint);

    MCNAPI void $OnClipboardTextGet(::cohtml::IViewListener::IClipboardData*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
