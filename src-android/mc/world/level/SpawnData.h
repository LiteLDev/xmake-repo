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
    ::ll::TypedStorage<8, 136, ::ActorDefinitionIdentifier>  mActorId;
    ::ll::TypedStorage<1, 1, bool>                           mIsBaby;
    ::ll::TypedStorage<8, 56, std::optional<EquipmentTable>> mEquipment;
    ::ll::TypedStorage<4, 8, std::optional<int>>             mSize;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SpawnData(::CompoundTag const&);

    MCNAPI SpawnData(int, ::ActorDefinitionIdentifier);

    MCNAPI ::SpawnData& operator=(::SpawnData const&);

    MCNAPI std::unique_ptr<CompoundTag> save();

    MCNAPI ~SpawnData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CompoundTag const&);

    MCNAPI void* $ctor(int, ::ActorDefinitionIdentifier);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
