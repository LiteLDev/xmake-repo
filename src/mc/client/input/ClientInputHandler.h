#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputBindingMode.h"
#include "mc/deps/input/InputMode.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BindingFactory;
class ClientBindingFactory;
class ClientInputHandlerProxy;
class ClientInputMappingFactory;
class Config;
class IClientInstance;
class IGameModuleApp;
class IMinecraftGame;
class InputEventQueue;
class InputHandler;
class InputMappingFactory;
class ItemStack;
class MobEffectsLayout;
class RectangleArea;
class ScreenContext;
struct ActorDataFlagComponent;
struct ControllerIDtoClientMap;
struct MobEffectsComponent;
struct MoveInputComponent;
struct MovementAbilitiesComponent;
namespace Input::Debug { class ISplitscreenRedirect; }
// clang-format on

class ClientInputHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                          mClient;
    ::ll::TypedStorage<8, 8, ::InputHandler&>                            mInputHandler;
    ::ll::UntypedStorage<8, 24>                                          mDebugSplitscreenInputRedirect;
    ::ll::TypedStorage<4, 4, ::InputBindingMode>                         mInputBindingMode;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ClientBindingFactory>>      mBindingFactory;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ClientInputMappingFactory>> mMappingFactory;
    ::ll::TypedStorage<8, 24, std::string>                               mExpectedInGameInputMode;
    ::ll::TypedStorage<1, 1, bool>                                       mIsFlying;
    ::ll::TypedStorage<1, 1, bool>                                       mIsSneaking;
    ::ll::TypedStorage<1, 1, bool>                                       mIsSprinting;
    ::ll::TypedStorage<1, 1, bool>                                       mIsSwimming;
    ::ll::TypedStorage<1, 1, bool>                                       mIsInWater;
    ::ll::TypedStorage<1, 1, bool>                                       mIsExpediateEmoteActive;
    ::ll::TypedStorage<1, 1, bool>                                       mIsInAscendableBlock;
    ::ll::TypedStorage<1, 1, bool>                                       mIsOnDescendableBlock;
    ::ll::TypedStorage<1, 1, bool>                                       mIsCreativeMode;
    ::ll::TypedStorage<1, 1, bool>                                       mIsSpectatorMode;
    ::ll::TypedStorage<1, 1, bool>                                       mInteractActive;
    ::ll::TypedStorage<1, 1, bool>                                       mHasMobEffects;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ClientInputHandlerProxy>>   mProxy;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientInputHandler();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Actor* _interactWithEntity() const;

    MCNAPI std::string _interactWithImmersiveReader() const;

    MCNAPI ::ItemStack const& _interactWithItem() const;

    MCNAPI bool _shouldUseGameInputMapping() const;

    MCNAPI bool allowInteract() const;

    MCNAPI bool allowPicking() const;

    MCNAPI bool canInteract() const;

    MCNAPI bool canPaddle() const;

    MCNAPI void clearInputDeviceQueues();

    MCNAPI void clearInvalidDownKeys();

    MCNAPI ::BindingFactory& getBindingFactory();

    MCNAPI std::string getBoatExitText() const;

    MCNAPI ::InputMode getCurrentInputMode() const;

    MCNAPI void getCursorPos(float&, float&) const;

    MCNAPI std::string const& getExpectedInGameInputMode() const;

    MCNAPI ::InputBindingMode getInputBindingMode();

    MCNAPI bool getInteractActive() const;

    MCNAPI std::string getInteractText() const;

    MCNAPI bool getSplitscreenJoinPromptVisible() const;

    MCNAPI bool hasInteractText() const;

    MCNAPI bool isBlockSelectToggled() const;

    MCNAPI bool isCreativeMode() const;

    MCNAPI bool isTouchGameplayAllowed() const;

    MCNAPI void onConfigChanged(::Config const&);

    MCNAPI void onMobEffectsChanged(::MobEffectsLayout const&);

    MCNAPI void popInputMapping(bool);

    MCNAPI void pushInputMapping(bool);

    MCNAPI void releaseButtonsAndSticks();

    MCNAPI void render(::ScreenContext&);

    MCNAPI void resetPlayerState();

    MCNAPI void setBlockSelectToggle(bool);

    MCNAPI void setDisableInput(bool);

    MCNAPI void setInputBindingMode(::InputBindingMode);

    MCNAPI void setSuspendDirectionalInput(bool);

    MCNAPI void setSuspendInput(bool);

    MCNAPI bool showBoatExit() const;

    MCNAPI bool showImmersiveReader() const;

    MCNAPI void updateInputMapping();

    MCNAPI bool updateInputMode(std::string const&);

    MCNAPI void updateInteractActiveState(bool);

    MCNAPI void updatePlayerState(
        ::gsl::not_null<const IClientInstance*>,
        ::MovementAbilitiesComponent const&,
        ::MobEffectsComponent const&,
        ::ActorDataFlagComponent const&,
        ::MoveInputComponent&,
        bool,
        bool
    );

    MCNAPI bool useFreeformPickDirection() const;

    MCNAPI ~ClientInputHandler();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputBindingMode.h"
#include "mc/deps/input/InputMode.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ClientBindingFactory;
class ClientInputHandlerProxy;
class ClientInputMappingFactory;
class Config;
class IClientInstance;
class InputHandler;
class ItemStack;
class ScreenContext;
struct ActorDataFlagComponent;
struct MobEffectsComponent;
struct MoveInputComponent;
struct MovementAbilitiesComponent;
namespace Input::Debug { class ISplitscreenRedirect; }
// clang-format on

class ClientInputHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>> mClient;
    ::ll::TypedStorage<8, 8, ::InputHandler&>                                   mInputHandler;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Input::Debug::ISplitscreenRedirect>>
                                                                             mDebugSplitscreenInputRedirect;
    ::ll::TypedStorage<4, 4, ::InputBindingMode>                             mInputBindingMode;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ClientBindingFactory>>      mBindingFactory;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ClientInputMappingFactory>> mMappingFactory;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mExpectedInGameInputMode;
    ::ll::TypedStorage<1, 1, bool>                                           mIsFlying;
    ::ll::TypedStorage<1, 1, bool>                                           mIsSneaking;
    ::ll::TypedStorage<1, 1, bool>                                           mIsSprinting;
    ::ll::TypedStorage<1, 1, bool>                                           mIsSwimming;
    ::ll::TypedStorage<1, 1, bool>                                           mIsInWater;
    ::ll::TypedStorage<1, 1, bool>                                           mIsExpediateEmoteActive;
    ::ll::TypedStorage<1, 1, bool>                                           mIsInAscendableBlock;
    ::ll::TypedStorage<1, 1, bool>                                           mIsOnDescendableBlock;
    ::ll::TypedStorage<1, 1, bool>                                           mIsCreativeMode;
    ::ll::TypedStorage<1, 1, bool>                                           mIsSpectatorMode;
    ::ll::TypedStorage<1, 1, bool>                                           mInteractActive;
    ::ll::TypedStorage<1, 1, bool>                                           mHasMobEffects;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ClientInputHandlerProxy>>   mProxy;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientInputHandler& operator=(ClientInputHandler const&);
    ClientInputHandler(ClientInputHandler const&);
    ClientInputHandler();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Actor* _interactWithEntity() const;

    MCAPI ::std::string _interactWithImmersiveReader() const;

    MCAPI ::ItemStack const& _interactWithItem() const;

    MCAPI bool _shouldUseGameInputMapping() const;

    MCAPI bool canInteract() const;

    MCAPI bool canPaddle() const;

    MCAPI ::std::string getBoatExitText() const;

    MCAPI ::InputMode getCurrentInputMode() const;

    MCAPI void getCursorPos(float& xCursor, float& yCursor) const;

    MCAPI ::std::string getInteractText() const;

    MCAPI bool getSplitscreenJoinPromptVisible() const;

    MCAPI bool isBlockSelectToggled() const;

    MCAPI bool isTouchGameplayAllowed() const;

    MCAPI void onConfigChanged(::Config const& c);

    MCAPI void popInputMapping(bool inGame);

    MCAPI void pushInputMapping(bool inGame);

    MCAPI void releaseButtonsAndSticks();

    MCAPI void render(::ScreenContext& screenContext);

    MCAPI void resetPlayerState();

    MCAPI void setBlockSelectToggle(bool value);

    MCAPI void setDisableInput(bool disable);

    MCAPI void setSuspendDirectionalInput(bool suspendDirectionalInput);

    MCAPI void setSuspendInput(bool suspendInput);

    MCAPI bool showBoatExit() const;

    MCAPI void updateInputMapping();

    MCAPI bool updateInputMode(::std::string const& mode);

    MCAPI void updatePlayerState(
        ::gsl::not_null<::IClientInstance const*> client,
        ::MovementAbilitiesComponent const&       abilities,
        ::MobEffectsComponent const&              mobEffects,
        ::ActorDataFlagComponent const&           synchedActorData,
        ::MoveInputComponent&                     moveInput,
        bool                                      isRiding,
        bool                                      isInWater
    );

    MCAPI bool useFreeformPickDirection() const;

    MCAPI ~ClientInputHandler();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class ClientInputHandler {};
#endif // @header-generator platform
#endif // @header-generator platform
