#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/client/gui/oreui/input/GamepadMode.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/external/gameface/cohtml/ControlType.h"

// auto generated forward declare list
// clang-format off
class IGameController;
class IOptionRegistry;
class KeyboardAction;
class KeyboardManager;
class MouseAction;
class RectangleArea;
struct ControllerIDtoClientMap;
struct DeviceButtonEvent;
struct TextBoxSelection;
struct TextBoxStateChange;
namespace Input::Debug { class ISplitscreenRedirect; }
namespace OreUI { class GamepadInputHandler; }
namespace OreUI { class TextInputHandler; }
namespace OreUI { class TouchInputHandler; }
namespace OreUI { struct GamepadInput; }
namespace OreUI { struct TouchInput; }
namespace cohtml { class View; }
// clang-format on
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
class KeyboardManager;
struct ControllerIDtoClientMap;
namespace Input::Debug { class ISplitscreenRedirect; }
namespace OreUI { class GamepadInputHandler; }
namespace OreUI { class TextInputHandler; }
namespace OreUI { class TouchInputHandler; }
namespace cohtml { class View; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

namespace OreUI {

class ViewInputHandler {
public:
    // ViewInputHandler inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class SupportedClients : int {
        Primary = 0,
        All     = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SubClientId>                               mSubClientId;
    ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::TouchInputHandler>>   mTouchInputHandler;
    ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::TextInputHandler>>    mTextInputHandler;
    ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::GamepadInputHandler>> mGamepadInputHandler;
    ::ll::TypedStorage<8, 8, ::KeyboardManager&>                          mKeyboardManager;
    ::ll::TypedStorage<8, 8, ::cohtml::View&>                             mView;
    ::ll::UntypedStorage<8, 24>                                           mControllerToClientMap;
    ::ll::UntypedStorage<8, 24>                                           mDebugSplitscreenInputRedirect;
    ::ll::TypedStorage<1, 1, bool>                                        mEmulateTouchInput;
    ::ll::TypedStorage<1, 1, bool>                                        mIsPointerDown;
    ::ll::TypedStorage<1, 1, bool const>                                  mIsPrimaryClient;
    ::ll::TypedStorage<1, 1, bool>                                        mIsFullKeyboard;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mIsFullKeyboardSubscription;
    ::ll::TypedStorage<1, 1, bool>                                        mInvertMouse;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mInvertMouseSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    ViewInputHandler& operator=(ViewInputHandler const&);
    ViewInputHandler(ViewInputHandler const&);
    ViewInputHandler();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ViewInputHandler(
        ::SubClientId,
        std::unique_ptr<OreUI::TextInputHandler>,
        std::unique_ptr<OreUI::TouchInputHandler>,
        std::unique_ptr<OreUI::GamepadInputHandler>,
        ::KeyboardManager&,
        ::cohtml::View&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ControllerIDtoClientMap>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Input::Debug::ISplitscreenRedirect>> const&,
        bool,
        ::IOptionRegistry&
    );

    MCNAPI void deactivateTextInput();

    MCNAPI std::optional<RectangleArea> getTextInputCaretArea();

    MCNAPI std::optional<RectangleArea> getTextInputControlArea();

    MCNAPI bool isTextInputActive() const;

    MCNAPI void onCaretRectChanged(int, int, uint, uint);

    MCNAPI void onTextInputTypeChanged(::cohtml::TextInputControlType::ControlType);

    MCNAPI void setCaretLocation(int);

    MCNAPI void setTextBoxState(::TextBoxStateChange const&);

    MCNAPI ~ViewInputHandler();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::SubClientId,
        std::unique_ptr<OreUI::TextInputHandler>,
        std::unique_ptr<OreUI::TouchInputHandler>,
        std::unique_ptr<OreUI::GamepadInputHandler>,
        ::KeyboardManager&,
        ::cohtml::View&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ControllerIDtoClientMap>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Input::Debug::ISplitscreenRedirect>> const&,
        bool,
        ::IOptionRegistry&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class SupportedClients : int {
        Primary = 0,
        All     = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SubClientId>                                             mSubClientId;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::TouchInputHandler>>             mTouchInputHandler;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::TextInputHandler>>              mTextInputHandler;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::GamepadInputHandler>>           mGamepadInputHandler;
    ::ll::TypedStorage<8, 8, ::KeyboardManager&>                                        mKeyboardManager;
    ::ll::TypedStorage<8, 8, ::cohtml::View&>                                           mView;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ControllerIDtoClientMap>> mControllerToClientMap;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Input::Debug::ISplitscreenRedirect>>
                                                               mDebugSplitscreenInputRedirect;
    ::ll::TypedStorage<1, 1, bool>                             mEmulateTouchInput;
    ::ll::TypedStorage<1, 1, bool>                             mIsPointerDown;
    ::ll::TypedStorage<1, 1, bool const>                       mIsPrimaryClient;
    ::ll::TypedStorage<1, 1, bool>                             mIsFullKeyboard;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mIsFullKeyboardSubscription;
    ::ll::TypedStorage<1, 1, bool>                             mInvertMouse;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mInvertMouseSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    ViewInputHandler& operator=(ViewInputHandler const&);
    ViewInputHandler(ViewInputHandler const&);
    ViewInputHandler();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ViewInputHandler(
        ::SubClientId                                                              subClientId,
        ::std::unique_ptr<::OreUI::TextInputHandler>                               textInputHandler,
        ::std::unique_ptr<::OreUI::TouchInputHandler>                              touchInputHandler,
        ::std::unique_ptr<::OreUI::GamepadInputHandler>                            gamepadInputHandler,
        ::KeyboardManager&                                                         keyboardManager,
        ::cohtml::View&                                                            view,
        ::Bedrock::NotNullNonOwnerPtr<::ControllerIDtoClientMap>                   controllerIdToClientMap,
        ::Bedrock::NotNullNonOwnerPtr<::Input::Debug::ISplitscreenRedirect> const& debugSplitscreenInputRedirect,
        bool                                                                       isPrimaryClient,
        ::IOptionRegistry&                                                         options
    );

    MCAPI ~ViewInputHandler();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::SubClientId                                                              subClientId,
        ::std::unique_ptr<::OreUI::TextInputHandler>                               textInputHandler,
        ::std::unique_ptr<::OreUI::TouchInputHandler>                              touchInputHandler,
        ::std::unique_ptr<::OreUI::GamepadInputHandler>                            gamepadInputHandler,
        ::KeyboardManager&                                                         keyboardManager,
        ::cohtml::View&                                                            view,
        ::Bedrock::NotNullNonOwnerPtr<::ControllerIDtoClientMap>                   controllerIdToClientMap,
        ::Bedrock::NotNullNonOwnerPtr<::Input::Debug::ISplitscreenRedirect> const& debugSplitscreenInputRedirect,
        bool                                                                       isPrimaryClient,
        ::IOptionRegistry&                                                         options
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    enum class SupportedClients : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace OreUI
