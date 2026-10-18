#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
class PlatformMultiplayerRestrictions;
// clang-format on

class LateJoinPreGameScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 48> mUserReadyToJoinCallback;
    ::ll::TypedStorage<1, 1, bool> mIsSigningIn;
    ::ll::TypedStorage<1, 1, bool> mIsUserReady;
    ::ll::TypedStorage<1, 1, bool> mShouldPromptForPlatformConnection;
    ::ll::TypedStorage<1, 1, bool> mShouldCheckPremiumPlatformAccess;
    ::ll::TypedStorage<1, 1, bool> mCheckingPremiumPlatformAccess;
    ::ll::TypedStorage<1, 1, bool> mAutoXBLSignInAttempted;
    ::ll::TypedStorage<1, 1, bool> mShowingWarning;
    ::ll::TypedStorage<1, 1, bool> mIsAnimatingTextVisible;
    ::ll::TypedStorage<8, 24, std::string> mAnimatedMessage;
    ::ll::TypedStorage<4, 4, int> mAnimationCount;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastAnimatingTextUpdate;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PlatformMultiplayerRestrictions>> mPlatformMultiplayerRestrictions;
    ::ll::TypedStorage<1, 1, bool> mHasXBLBroadcast;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    LateJoinPreGameScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LateJoinPreGameScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void onOpen();

    virtual std::string _getButtonBDescription();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LateJoinPreGameScreenController(std::shared_ptr<MinecraftScreenModel>, std::function<void()> const&, bool);

    MCNAPI void _checkPremiumAccessAndShowUpsell(std::function<void(bool)>);

    MCNAPI void _handleUserReadyToJoinGame();

    MCNAPI void _promptForPlatformConnection();

    MCNAPI void _warnRestrictedPlatformMultiplayer();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::chrono::duration<long long, std::ratio<1, 1>> const& ANIMATION_INTERVAL();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MinecraftScreenModel>, std::function<void()> const&, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ui::DirtyFlag $tick();

    MCNAPI void $onOpen();

    MCNAPI std::string $_getButtonBDescription();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
class PlatformMultiplayerRestrictions;
// clang-format on

class LateJoinPreGameScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                             mUserReadyToJoinCallback;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsSigningIn;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsUserReady;
    ::ll::TypedStorage<1, 1, bool>                                                 mShouldPromptForPlatformConnection;
    ::ll::TypedStorage<1, 1, bool>                                                 mShouldCheckPremiumPlatformAccess;
    ::ll::TypedStorage<1, 1, bool>                                                 mCheckingPremiumPlatformAccess;
    ::ll::TypedStorage<1, 1, bool>                                                 mAutoXBLSignInAttempted;
    ::ll::TypedStorage<1, 1, bool>                                                 mShowingWarning;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsAnimatingTextVisible;
    ::ll::TypedStorage<8, 32, ::std::string>                                       mAnimatedMessage;
    ::ll::TypedStorage<4, 4, int>                                                  mAnimationCount;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>              mLastAnimatingTextUpdate;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlatformMultiplayerRestrictions>> mPlatformMultiplayerRestrictions;
    ::ll::TypedStorage<1, 1, bool>                                                 mHasXBLBroadcast;
    // NOLINTEND

public:
    // prevent constructor by default
    LateJoinPreGameScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LateJoinPreGameScreenController() /*override*/ = default;

    virtual void onOpen() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ::std::string _getButtonBDescription() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LateJoinPreGameScreenController(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::std::function<void()> const&            userReadyCallback,
        bool                                      hasXBLBroadcast
    );

    MCAPI void _checkPremiumAccessAndShowUpsell(::std::function<void(bool)> callback);

    MCAPI void _handleUserReadyToJoinGame();

    MCAPI void _promptForPlatformConnection();

    MCAPI void _warnRestrictedPlatformMultiplayer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::std::function<void()> const&            userReadyCallback,
        bool                                      hasXBLBroadcast
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onOpen();

    MCAPI ::ui::DirtyFlag $tick();

    MCAPI ::std::string $_getButtonBDescription();
    // NOLINTEND
};
#else // @header-generator platform
class LateJoinPreGameScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform
