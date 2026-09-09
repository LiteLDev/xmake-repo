#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/config/player_capabilities/IPlayerData.h"
#include "mc/world/actor/player/AbilitiesIndex.h"

// auto generated forward declare list
// clang-format off
class Player;
// clang-format on

namespace PlayerCapabilities {

class PlayerData : public ::PlayerCapabilities::IPlayerData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Player const&> mPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerData& operator=(PlayerData const&);
    PlayerData(PlayerData const&);
    PlayerData();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerData();

    virtual bool isAbilityEnabled(::AbilitiesIndex) const;

    virtual bool isTeacher() const;

    virtual bool isOperator() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PlayerData(::Player const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Player const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isAbilityEnabled(::AbilitiesIndex) const;

    MCNAPI bool $isTeacher() const;

    MCNAPI bool $isOperator() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace PlayerCapabilities
