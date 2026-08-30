#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"

// auto generated forward declare list
// clang-format off
class OwnerStorageEntity;
class WeakStorageEntity;
// clang-format on

class StackResultStorageEntity {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, std::optional<EntityContext>> mContext;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit StackResultStorageEntity(std::nullptr_t);

    MCNAPI explicit StackResultStorageEntity(::WeakStorageEntity const&);

    MCNAPI explicit StackResultStorageEntity(::EntityContext const&);

    MCNAPI StackResultStorageEntity(::StackResultStorageEntity&&);

    MCNAPI explicit StackResultStorageEntity(::OwnerStorageEntity const&);

    MCNAPI bool _hasValue() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::nullptr_t);

    MCNAPI void* $ctor(::WeakStorageEntity const&);

    MCNAPI void* $ctor(::EntityContext const&);

    MCNAPI void* $ctor(::StackResultStorageEntity&&);

    MCNAPI void* $ctor(::OwnerStorageEntity const&);
    // NOLINTEND
};
