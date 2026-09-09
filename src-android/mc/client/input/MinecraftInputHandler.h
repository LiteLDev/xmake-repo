#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/game/IConfigListener.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/enums/ButtonState.h"
#include "mc/deps/input/enums/RawInputType.h"

// auto generated forward declare list
// clang-format off
class ClientMoveInputHandler;
class Config;
class IAdvancedGraphicsOptions;
class IClientInstance;
class IGameModuleApp;
class IMinecraftGame;
class InputEventQueue;
class InputHandler;
class InputSettingsHandler;
class MinecraftBindingFactoryMap;
class MinecraftInputHandlerProxy;
class MinecraftInputMappingFactoryMap;
class MouseMapper;
class ScreenContext;
class SplitscreenJoinListener;
struct ControllerIDtoClientMap;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Input::Debug { class ISplitscreenRedirect; }
// clang-format on

class MinecraftInputHandler : public ::IConfigListener, public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<InputHandler>>                    mInputHandler;
    ::ll::TypedStorage<4, 4, int>                                              mControllerId;
    ::ll::UntypedStorage<8, 24>                                                mClient;
    ::ll::UntypedStorage<8, 24>                                                mAdvancedGraphicsOptions;
    ::ll::UntypedStorage<8, 24>                                                mDebugSplitscreenInputRedirect;
    ::ll::TypedStorage<8, 8, std::unique_ptr<MinecraftBindingFactoryMap>>      mBindingFactoryMap;
    ::ll::TypedStorage<8, 8, std::unique_ptr<MinecraftInputMappingFactoryMap>> mMappingFactoryMap;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SplitscreenJoinListener>>         mSplitscreenJoinListener;
    ::ll::TypedStorage<8, 8, std::unique_ptr<InputSettingsHandler>>            mInputSettingsHandler;
    ::ll::UntypedStorage<8, 88>                                                mAnyInputSubscription;
    ::ll::UntypedStorage<8, 88>                                                mRawInputEventPublisher;
    ::ll::UntypedStorage<8, 88>                                                mInputModePublisher;
    ::ll::TypedStorage<8, 8, ::MouseMapper*>                                   mMouseMapper;
    ::ll::TypedStorage<8, 8, std::unique_ptr<MinecraftInputHandlerProxy>>      mProxy;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftInputHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftInputHandler();

    virtual void onConfigChanged(::Config const&);

    virtual void _registerInputHandlers();

    virtual void _registerDebugInputHandlers();

    virtual std::unique_ptr<ClientMoveInputHandler> _createClientMoveInputHandler() = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MinecraftInputHandler(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IAdvancedGraphicsOptions>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Input::Debug::ISplitscreenRedirect>> const&
    );

    MCNAPI void _registerMenuButton(std::string const&, bool);

    MCNAPI void changeControllerId(int, int);

    MCNAPI void clearInputDeviceQueues();

    MCNAPI void clearInputDeviceQueuesForFrame();

    MCNAPI void getCursorPos(float&, float&, ::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&) const;

    MCNAPI ::InputSettingsHandler& getInputSettingsHandler();

    MCNAPI void init(::IGameModuleApp&);

    MCNAPI ::ClientMoveInputHandler*
    initClientInput(::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&, ::IGameModuleApp&);

    MCNAPI ::Bedrock::PubSub::Subscription
        registerToInputModePublisher(std::function<void(IClientInstance&, InputMode)>);

    MCNAPI ::Bedrock::PubSub::Subscription
        registerToRawInputEventPublisher(std::function<void(int, RawInputType, ButtonState, bool)>);

    MCNAPI ::Bedrock::PubSub::Subscription subscribeToRawInput(std::function<void(IClientInstance&)>);

    MCNAPI void tick(
        ::IMinecraftGame&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ControllerIDtoClientMap>> const&,
        bool
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IAdvancedGraphicsOptions>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Input::Debug::ISplitscreenRedirect>> const&
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
    MCNAPI void $onConfigChanged(::Config const&);

    MCNAPI void $_registerInputHandlers();

    MCNAPI void $_registerDebugInputHandlers();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
