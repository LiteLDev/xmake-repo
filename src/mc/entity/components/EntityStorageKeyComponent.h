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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mStorageKey;
    ::ll::TypedStorage<8, 24, std::string> mLastSerializedActorState;
    ::ll::TypedStorage<1, 1, bool>         mDirtyFromNonSerializedState;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mStorageKey;
    ::ll::TypedStorage<8, 32, ::std::string> mLastSerializedActorState;
    ::ll::TypedStorage<1, 1, bool>           mDirtyFromNonSerializedState;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    EntityStorageKeyComponent& operator=(EntityStorageKeyComponent const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    EntityStorageKeyComponent();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI EntityStorageKeyComponent(::EntityStorageKeyComponent const&);
#else // @header-generator platform
    MCAPI EntityStorageKeyComponent(::EntityStorageKeyComponent const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addAdditionalSaveData(::Actor const&, ::CompoundTag&) const;
#else // @header-generator platform
    MCAPI explicit EntityStorageKeyComponent(::std::string const& storageKey);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const&);
#else // @header-generator platform
    MCAPI void addAdditionalSaveData(::Actor const& owner, ::CompoundTag& tag) const;

    MCFOLD ::EntityStorageKeyComponent& operator=(::EntityStorageKeyComponent&&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::EntityStorageKeyComponent const&);
#else // @header-generator platform
    MCFOLD void* $ctor(::EntityStorageKeyComponent const&);

    MCAPI void* $ctor(::std::string const& storageKey);
#endif // @header-generator platform
    // NOLINTEND
};
