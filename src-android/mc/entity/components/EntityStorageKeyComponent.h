#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
// clang-format on

class EntityStorageKeyComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mStorageKey;
    ::ll::TypedStorage<8, 24, std::string> mLastSerializedActorState;
    ::ll::TypedStorage<1, 1, bool>         mDirtyFromNonSerializedState;
    // NOLINTEND

public:
    // prevent constructor by default
    EntityStorageKeyComponent& operator=(EntityStorageKeyComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EntityStorageKeyComponent(::EntityStorageKeyComponent const&);

    MCNAPI void addAdditionalSaveData(::Actor const&, ::CompoundTag&) const;

    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::EntityStorageKeyComponent const&);
    // NOLINTEND
};
