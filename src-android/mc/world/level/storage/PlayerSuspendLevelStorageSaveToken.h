#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
struct SuspendPlayerSave;
// clang-format on

class PlayerSuspendLevelStorageSaveToken {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 24, ::WeakEntityRef>                    mWeakEntity;
    ::ll::TypedStorage<8, 16, std::shared_ptr<SuspendPlayerSave>> mSharedSuspendToken;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PlayerSuspendLevelStorageSaveToken(::EntityContext&);

    MCNAPI PlayerSuspendLevelStorageSaveToken(::PlayerSuspendLevelStorageSaveToken&&);

    MCNAPI ~PlayerSuspendLevelStorageSaveToken();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::EntityContext&);

    MCNAPI void* $ctor(::PlayerSuspendLevelStorageSaveToken&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
