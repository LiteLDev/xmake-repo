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

class AcceptDeclineInvitationScreenController : public ::MinecraftScreenController {
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

class AcceptDeclineInvitationScreenController : public ::MinecraftScreenController {
#else // @header-generator platform
class AcceptDeclineInvitationScreenController {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // AcceptDeclineInvitationScreenController inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class AcceptDeclineInvitationState : uchar {
        DisplayAcceptDeclineModal           = 0,
        WaitingForAcceptDeclineModalResult  = 1,
        CheckPlatformMultiplayerRestriction = 2,
        WaitingForPlatformUpsellResult      = 3,
        WaitingForPlatformRestrictionResult = 4,
        SendResult                          = 5,
        Exit                                = 6,
        Complete                            = 7,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                                            mTitle;
    ::ll::TypedStorage<8, 24, std::string>                                                            mSubtitle;
    ::ll::UntypedStorage<8, 48>                                                                       mCallback;
    ::ll::TypedStorage<1, 1, ::AcceptDeclineInvitationScreenController::AcceptDeclineInvitationState> mState;
    ::ll::TypedStorage<1, 1, bool>                                             mAcceptDeclineModalAccepted;
    ::ll::TypedStorage<1, 1, bool>                                             mAcceptDeclineModalCancelled;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PlatformMultiplayerRestrictions>> mPlatformMultiplayerRestrictions;
    // NOLINTEND

public:
    // prevent constructor by default
    AcceptDeclineInvitationScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AcceptDeclineInvitationScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual std::string getAdditionalScreenInfo() const;

    virtual std::string getTelemetryOverride() const;

    virtual void addEventProperties(std::unordered_map<std::string, std::string>&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AcceptDeclineInvitationScreenController(
        std::shared_ptr<MinecraftScreenModel>,
        std::string const&,
        std::string const&,
        std::function<void(bool, bool)>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<MinecraftScreenModel>,
        std::string const&,
        std::string const&,
        std::function<void(bool, bool)>
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
    MCNAPI ::ui::DirtyFlag $tick();

    MCNAPI std::string $getAdditionalScreenInfo() const;

    MCNAPI std::string $getTelemetryOverride() const;

    MCNAPI void $addEventProperties(std::unordered_map<std::string, std::string>&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class AcceptDeclineInvitationState : uchar {
        DisplayAcceptDeclineModal           = 0,
        WaitingForAcceptDeclineModalResult  = 1,
        CheckPlatformMultiplayerRestriction = 2,
        WaitingForPlatformUpsellResult      = 3,
        WaitingForPlatformRestrictionResult = 4,
        SendResult                          = 5,
        Exit                                = 6,
        Complete                            = 7,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                                          mTitle;
    ::ll::TypedStorage<8, 32, ::std::string>                                                          mSubtitle;
    ::ll::TypedStorage<8, 64, ::std::function<void(bool, bool)>>                                      mCallback;
    ::ll::TypedStorage<1, 1, ::AcceptDeclineInvitationScreenController::AcceptDeclineInvitationState> mState;
    ::ll::TypedStorage<1, 1, bool>                                                 mAcceptDeclineModalAccepted;
    ::ll::TypedStorage<1, 1, bool>                                                 mAcceptDeclineModalCancelled;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlatformMultiplayerRestrictions>> mPlatformMultiplayerRestrictions;
    // NOLINTEND

public:
    // prevent constructor by default
    AcceptDeclineInvitationScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AcceptDeclineInvitationScreenController() /*override*/ = default;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual void addEventProperties(::std::unordered_map<::std::string, ::std::string>& eventProperties) const
        /*override*/;

    virtual ::std::string getAdditionalScreenInfo() const /*override*/;

    virtual ::std::string getTelemetryOverride() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AcceptDeclineInvitationScreenController(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::std::string const&                      title,
        ::std::string const&                      subtitle,
        ::std::function<void(bool, bool)>         callback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::std::string const&                      title,
        ::std::string const&                      subtitle,
        ::std::function<void(bool, bool)>         callback
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ui::DirtyFlag $tick();

    MCFOLD void $addEventProperties(::std::unordered_map<::std::string, ::std::string>& eventProperties) const;

    MCAPI ::std::string $getAdditionalScreenInfo() const;

    MCAPI ::std::string $getTelemetryOverride() const;
    // NOLINTEND
#else // @header-generator platform
    enum class AcceptDeclineInvitationState : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform
};
