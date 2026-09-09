#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
// clang-format on

class OwnerStorageEntity {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, std::optional<EntityContext>> mContext;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI OwnerStorageEntity();

    MCNAPI explicit OwnerStorageEntity(::EntityRegistry&);

    MCNAPI OwnerStorageEntity(::OwnerStorageEntity&&);

    MCNAPI bool _hasValue() const;

    MCNAPI void _reset();

    MCNAPI ::OwnerStorageEntity& operator=(::OwnerStorageEntity&&);

    MCNAPI ~OwnerStorageEntity();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::EntityRegistry&);

    MCNAPI void* $ctor(::OwnerStorageEntity&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
