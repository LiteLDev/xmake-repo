#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
namespace OreUI::Detail { class Binder; }
namespace OreUI::Detail { class ViewContext; }
namespace cohtml { class IClientSideSocket; }
namespace cohtml { class ISocketListener; }
namespace cohtml { class View; }
namespace cohtml { struct ScreenInfo; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class View : public ::OreUI::IView, public ::cohtml::IViewListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::cohtml::View*>                                           mGamefaceView;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::ViewRenderer>>                  mRenderer;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::ViewInputHandler>>              mInputHandler;
    ::ll::TypedStorage<8, 32, ::std::string>                                            mUrl;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::reference_wrapper<::OreUI::IScene>>> mScenes;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::BedrockInputSource>>            mBedrockInputSource;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>>         mClientInstance;
    ::ll::TypedStorage<8, 8, ::KeyboardManager&>                                        mKeyboardManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::FacetBinder>>                   mFacetBinder;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::IFacetRegistry>>                mFacetRegistry;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::Detail::Binder>>                mBinder;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::Detail::ViewContext>>           mViewContext;
    ::ll::TypedStorage<8, 8, ::OreUI::ITelemetry&>                                      mTelemetry;
    ::ll::TypedStorage<8, 400, ::std::optional<::OreUI::ScreenPerformanceTelemetry>>    mScreenPerformanceTelemetry;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                             mUpdatedFacets;
    ::ll::TypedStorage<1, 1, ::OreUI::ViewState>                                        mState;
    ::ll::TypedStorage<4, 4, ::OreUI::RouteMode>                                        mRouteMode;
    ::ll::TypedStorage<8, 8, double>                                                    mLastUpdateTime;
    ::ll::TypedStorage<8, 8, double>                                                    mTimeStamp;
    ::ll::TypedStorage<8, 8, ::Option*>                                                 mScreenAnimationsOption;
    ::ll::
        TypedStorage<8, 48, ::brstd::flat_map<int, uint64, ::std::less<int>, ::std::vector<int>, ::std::vector<uint64>>>
            mAudioStreams;
    // NOLINTEND

public:
    // prevent constructor by default
    View& operator=(View const&);
    View(View const&);
    View();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~View() /*override*/ = default;

    virtual void pushCurrentScene(::OreUI::IScene& scene, ::OreUI::RouteMode routeMode) /*override*/;

    virtual bool hasScenes() const /*override*/;

    virtual void removeScene(::OreUI::IScene const& scene) /*override*/;

    virtual void update(double time) /*override*/;

    virtual void render(::ScreenContext& screenContext) /*override*/;

    virtual void resize(uint width, uint height) /*override*/;

    virtual void reload() /*override*/;

    virtual void leave() /*override*/;

    virtual void onSuspend() /*override*/;

    virtual void onResume() /*override*/;

    virtual void onRouteChanged(
        ::std::optional<::OreUI::RouterLocation> const& previousLocation,
        ::std::optional<::OreUI::RouterLocation> const& currentLocation
    ) /*override*/;

    virtual ::std::string_view getUrl() const /*override*/;

    virtual ::OreUI::RouteMode getRouteMode() const /*override*/;

    virtual uint getWidth() const /*override*/;

    virtual uint getHeight() const /*override*/;

    virtual ::OreUI::ViewState getState() const /*override*/;

    virtual void setTextBoxState(::TextBoxStateChange const& stateChange) /*override*/;

    virtual void onKeyboardDismissed() /*override*/;

    virtual void setCaretLocation(int caretLocation) /*override*/;

    virtual void triggerEvent(::std::string const& eventName, ::std::string const& eventData) /*override*/;

    virtual ::std::unique_ptr<::IGamefaceTextInputProxy> getTextInputProxy() /*override*/;

    virtual void OnLoadFailed(char const* url, char const* error) /*override*/;

    virtual void OnReadyForBindings() /*override*/;

    virtual void OnBindingsReleased() /*override*/;

    virtual ::cohtml::ScreenInfo OnScreenInfoRequested() /*override*/;

    virtual void OnTextInputTypeChanged(::cohtml::TextInputControlType::ControlType type) /*override*/;

    virtual void OnCaretRectChanged(int x, int y, uint width, uint height) /*override*/;

    virtual void
    OnCursorChanged(::cohtml::CursorTypes::Cursors cursor, char const*, float const*, float const*) /*override*/;

    virtual ::cohtml::IClientSideSocket* OnCreateWebSocket(
        ::cohtml::ISocketListener* listener,
        char const*                url,
        char const**               protocols,
        uint                       protocolsCount
    ) /*override*/;

    virtual void OnAudioStreamCreated(int id, int bitDepth, int channels, float samplingRate) /*override*/;

    virtual void OnAudioStreamClosed(int id) /*override*/;

    virtual void OnAudioStreamPlay(int id) /*override*/;

    virtual void OnAudioStreamPause(int id) /*override*/;

    virtual void OnAudioDataReceived(int id, int samples, float** pcm, int channels) /*override*/;

    virtual void OnAudioStreamEnded(int id) /*override*/;

    virtual void OnAudioStreamVolumeChanged(int id, float volume) /*override*/;

    virtual void OnClipboardTextSet(char const* text, uint lengthBytes) /*override*/;

    virtual void OnClipboardTextGet(::cohtml::IViewListener::IClipboardData* setDataObject) /*override*/;

    virtual ::OreUI::IViewTestHelper* getViewTestHelper() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $pushCurrentScene(::OreUI::IScene& scene, ::OreUI::RouteMode routeMode);

    MCAPI bool $hasScenes() const;

    MCAPI void $removeScene(::OreUI::IScene const& scene);

    MCAPI void $update(double time);

    MCAPI void $render(::ScreenContext& screenContext);

    MCAPI void $resize(uint width, uint height);

    MCAPI void $reload();

    MCAPI void $leave();

    MCAPI void $onSuspend();

    MCAPI void $onResume();

    MCAPI void $onRouteChanged(
        ::std::optional<::OreUI::RouterLocation> const& previousLocation,
        ::std::optional<::OreUI::RouterLocation> const& currentLocation
    );

    MCAPI ::std::string_view $getUrl() const;

    MCAPI ::OreUI::RouteMode $getRouteMode() const;

    MCAPI uint $getWidth() const;

    MCAPI uint $getHeight() const;

    MCAPI ::OreUI::ViewState $getState() const;

    MCAPI void $setTextBoxState(::TextBoxStateChange const& stateChange);

    MCAPI void $onKeyboardDismissed();

    MCAPI void $setCaretLocation(int caretLocation);

    MCAPI void $triggerEvent(::std::string const& eventName, ::std::string const& eventData);

    MCAPI ::std::unique_ptr<::IGamefaceTextInputProxy> $getTextInputProxy();

    MCAPI void $OnLoadFailed(char const* url, char const* error);

    MCAPI void $OnReadyForBindings();

    MCAPI void $OnBindingsReleased();

    MCAPI ::cohtml::ScreenInfo $OnScreenInfoRequested();

    MCAPI void $OnTextInputTypeChanged(::cohtml::TextInputControlType::ControlType type);

    MCAPI void $OnCaretRectChanged(int x, int y, uint width, uint height);

    MCAPI void $OnCursorChanged(::cohtml::CursorTypes::Cursors cursor, char const*, float const*, float const*);

    MCFOLD ::cohtml::IClientSideSocket* $OnCreateWebSocket(
        ::cohtml::ISocketListener* listener,
        char const*                url,
        char const**               protocols,
        uint                       protocolsCount
    );

    MCAPI void $OnAudioStreamCreated(int id, int bitDepth, int channels, float samplingRate);

    MCAPI void $OnAudioStreamClosed(int id);

    MCAPI void $OnAudioStreamPlay(int id);

    MCAPI void $OnAudioStreamPause(int id);

    MCAPI void $OnAudioDataReceived(int id, int samples, float** pcm, int channels);

    MCAPI void $OnAudioStreamEnded(int id);

    MCAPI void $OnAudioStreamVolumeChanged(int id, float volume);

    MCAPI void $OnClipboardTextSet(char const* text, uint lengthBytes);

    MCAPI void $OnClipboardTextGet(::cohtml::IViewListener::IClipboardData* setDataObject);

    MCFOLD ::OreUI::IViewTestHelper* $getViewTestHelper();
    // NOLINTEND
};
#else // @header-generator platform
class View {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
