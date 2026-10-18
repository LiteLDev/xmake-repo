#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/WeightedRandomList.h"
#include "mc/world/level/levelgen/v2/StructureBoundingBoxType.h"

// auto generated forward declare list
// clang-format off
namespace br::worldgen { struct SpawnerData; }
// clang-format on

namespace br::worldgen {

struct StructureSpawnOverride {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, ::br::worldgen::StructureBoundingBoxType> mBoundingBox;
    ::ll::UntypedStorage<8, 32>                                        mSpawnOverrides;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureSpawnOverride& operator=(StructureSpawnOverride const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~StructureSpawnOverride();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, ::br::worldgen::StructureBoundingBoxType>           mBoundingBox;
    ::ll::TypedStorage<8, 32, ::WeightedRandomList<::br::worldgen::SpawnerData>> mSpawnOverrides;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace br::worldgen
