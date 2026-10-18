#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/SpawnPositionType.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/dimension/DimensionType.h"

struct SetSpawnPositionPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>         mPos;
    ::ll::TypedStorage<4, 4, ::SpawnPositionType> mSpawnPosType;
    ::ll::TypedStorage<4, 4, ::DimensionType>     mDimensionType;
    ::ll::TypedStorage<4, 12, ::BlockPos>         mSpawnBlockPos;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SetSpawnPositionPacketPayload(::SpawnPositionType, ::DimensionType, ::BlockPos const&);

    MCNAPI SetSpawnPositionPacketPayload(::DimensionType, ::BlockPos const&, ::BlockPos const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SpawnPositionType, ::DimensionType, ::BlockPos const&);

    MCNAPI void* $ctor(::DimensionType, ::BlockPos const&, ::BlockPos const&);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
