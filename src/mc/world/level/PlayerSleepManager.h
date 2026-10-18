#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/level/PlayerSleepStatus.h"

class PlayerSleepManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::PlayerSleepStatus>             mPlayerSleepStatus;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnAnyGameplayUsersRemovedSubscription;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerSleepManager();

    virtual void updateSleepingPlayerList();
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerSleepManager();

    MCNAPI ::PlayerSleepStatus const& getPlayerSleepStatus() const;

    MCNAPI void setSleepStatus(::PlayerSleepStatus const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $updateSleepingPlayerList();
#else // @header-generator platform
    MCFOLD void $updateSleepingPlayerList();


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
