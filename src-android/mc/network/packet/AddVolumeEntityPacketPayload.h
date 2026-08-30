#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/EntityNetId.h"
#include "mc/deps/nbt/CompoundTag.h"
#include "mc/resources/MinEngineVersion.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

struct AddVolumeEntityPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::CompoundTag> mComponents;
    ::ll::TypedStorage<8, 24, std::string>   mJsonIdentifier;
    ::ll::TypedStorage<8, 24, std::string>   mInstanceName;
    ::ll::TypedStorage<4, 12, ::BlockPos>    mMinBounds;
    ::ll::TypedStorage<4, 12, ::BlockPos>    mMaxBounds;
    ::ll::UntypedStorage<4, 4>               mDimensionType;
    ::ll::UntypedStorage<8, 32>              mMinEngineVersion;
    ::ll::TypedStorage<4, 4, ::EntityNetId>  mEntityNetId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AddVolumeEntityPacketPayload(::AddVolumeEntityPacketPayload const&);

    MCNAPI AddVolumeEntityPacketPayload(::EntityContext const&, ::CompoundTag, ::MinEngineVersion const&);

    MCNAPI ~AddVolumeEntityPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::AddVolumeEntityPacketPayload const&);

    MCNAPI void* $ctor(::EntityContext const&, ::CompoundTag, ::MinEngineVersion const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
