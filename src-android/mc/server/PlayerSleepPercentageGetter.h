#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/server/IPlayerSleepPercentageGetter.h"

// auto generated forward declare list
// clang-format off
class GameRules;
// clang-format on

class PlayerSleepPercentageGetter : public ::IPlayerSleepPercentageGetter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mGameRules;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerSleepPercentageGetter();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerSleepPercentageGetter();

    virtual float getPlayerSleepPercentageGoal() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PlayerSleepPercentageGetter(::gsl::not_null<Bedrock::NonOwnerPointer<const GameRules>>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<const GameRules>>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI float $getPlayerSleepPercentageGoal() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
