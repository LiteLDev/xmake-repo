#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/EmptyProgressHandler.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/platform/UUID.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
class TaskGroup;
// clang-format on

class PartyEligibilityProgressHandler : public ::EmptyProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mAsyncTaskGroup;
    ::ll::TypedStorage<8, 16, ::mce::UUID>               mExperienceId;
    ::ll::TypedStorage<8, 24, std::string>               mPartyId;
    ::ll::TypedStorage<8, 24, std::optional<mce::UUID>>  mWorldId;
    ::ll::TypedStorage<1, 1, bool>                       mIsTransfer;
    ::ll::TypedStorage<1, 1, bool>                       mContinuePartyJoin;
    // NOLINTEND

public:
    // prevent constructor by default
    PartyEligibilityProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PartyEligibilityProgressHandler();

    virtual void onStart(::MinecraftScreenModel&);

    virtual void onGameEventNotification(::MinecraftScreenModel&, ::ui::GameEventNotification const&);

    virtual void onCancel(::MinecraftScreenModel&);

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel&) const;

    virtual std::string getName() const;

    virtual std::string getTitleText() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PartyEligibilityProgressHandler(::mce::UUID const&, std::string const&, std::optional<mce::UUID>, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::mce::UUID const&, std::string const&, std::optional<mce::UUID>, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onStart(::MinecraftScreenModel&);

    MCNAPI void $onGameEventNotification(::MinecraftScreenModel&, ::ui::GameEventNotification const&);

    MCNAPI void $onCancel(::MinecraftScreenModel&);

    MCNAPI ::LoadingState $getLoadingState(::MinecraftScreenModel&) const;

    MCNAPI std::string $getName() const;

    MCNAPI std::string $getTitleText() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
