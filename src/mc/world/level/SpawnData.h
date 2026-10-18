#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/WeightedRandom.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/actor/EquipmentTable.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

class SpawnData : public ::WeightedRandom::WeighedRandomItem {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 136, ::ActorDefinitionIdentifier>  mActorId;
    ::ll::TypedStorage<1, 1, bool>                           mIsBaby;
    ::ll::TypedStorage<8, 56, std::optional<EquipmentTable>> mEquipment;
    ::ll::TypedStorage<4, 8, std::optional<int>>             mSize;
#else // @header-generator platform
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier>      mActorId;
    ::ll::TypedStorage<1, 1, bool>                               mIsBaby;
    ::ll::TypedStorage<8, 64, ::std::optional<::EquipmentTable>> mEquipment;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>               mSize;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    SpawnData& operator=(SpawnData const&);
    SpawnData(SpawnData const&);
    SpawnData();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit SpawnData(::CompoundTag const&);
#else // @header-generator platform
    MCAPI SpawnData(::SpawnData&& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SpawnData(int, ::ActorDefinitionIdentifier);
#else // @header-generator platform
    MCAPI explicit SpawnData(::CompoundTag const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SpawnData& operator=(::SpawnData const&);

    MCNAPI std::unique_ptr<CompoundTag> save();

    MCNAPI ~SpawnData();
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::CompoundTag> save();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::CompoundTag const&);
#else // @header-generator platform
    MCAPI void* $ctor(::SpawnData&& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(int, ::ActorDefinitionIdentifier);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::CompoundTag const& tag);
#endif // @header-generator platform
    // NOLINTEND
};
