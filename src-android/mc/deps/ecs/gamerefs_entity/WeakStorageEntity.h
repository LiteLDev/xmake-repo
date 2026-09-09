#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/EntityId.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class EntityRegistry;
class OwnerStorageEntity;
class StackResultStorageEntity;
// clang-format on

class WeakStorageEntity {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 16> mRegistry;
    ::ll::UntypedStorage<4, 8>  mEntity;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WeakStorageEntity();

    MCNAPI explicit WeakStorageEntity(::OwnerStorageEntity const&);

    MCNAPI explicit WeakStorageEntity(::StackResultStorageEntity const&);

    MCNAPI bool _isSet() const;

    MCNAPI void _reset();

    MCNAPI bool operator==(::WeakStorageEntity const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::OwnerStorageEntity const&);

    MCNAPI void* $ctor(::StackResultStorageEntity const&);
    // NOLINTEND
};
