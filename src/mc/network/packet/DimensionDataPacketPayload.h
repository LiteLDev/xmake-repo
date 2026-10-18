#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/dimension/DimensionDefinitionGroup.h"

struct DimensionDataPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, ::DimensionDefinitionGroup> mDimensionDefinitionGroup;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::DimensionDefinitionGroup> mDimensionDefinitionGroup;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    DimensionDataPacketPayload();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit DimensionDataPacketPayload(::DimensionDefinitionGroup&&);
#else // @header-generator platform
    MCAPI explicit DimensionDataPacketPayload(::DimensionDefinitionGroup&& dimensionDefinitionGroup);

    MCAPI ~DimensionDataPacketPayload();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::DimensionDefinitionGroup&&);
#else // @header-generator platform
    MCAPI void* $ctor(::DimensionDefinitionGroup&& dimensionDefinitionGroup);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
