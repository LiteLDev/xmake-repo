#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/levelgen/structure/BoundingBox.h"
#include "mc/world/level/levelgen/v2/JigsawJunction.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/levelgen/v2/JigsawSectionDataKey.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class BlockPos;
class BoundingBox;
#endif // @header-generator platform
class StructurePoolElement;
#if defined(LL_PLAT_A) // @header-generator platform
namespace br::worldgen { struct JigsawSectionEntry; }
#else // @header-generator platform
namespace br::worldgen { struct JigsawJunction; }
#endif // @header-generator platform
// clang-format on

namespace br::worldgen {

class JigsawSectionData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<const StructurePoolElement*>>               mElements;
    ::ll::TypedStorage<8, 24, std::vector<int>>                                       mDepth;
    ::ll::TypedStorage<8, 24, std::vector<int>>                                       mGroundOffsets;
    ::ll::TypedStorage<8, 24, std::vector<Rotation>>                                  mRotations;
    ::ll::TypedStorage<8, 24, std::vector<BlockPos>>                                  mPositions;
    ::ll::TypedStorage<8, 24, std::vector<std::vector<br::worldgen::JigsawJunction>>> mJunctions;
    ::ll::TypedStorage<8, 24, std::vector<BoundingBox>>                               mBoundingBoxes;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::StructurePoolElement const*>>                 mElements;
    ::ll::TypedStorage<8, 24, ::std::vector<int>>                                           mDepth;
    ::ll::TypedStorage<8, 24, ::std::vector<int>>                                           mGroundOffsets;
    ::ll::TypedStorage<8, 24, ::std::vector<::Rotation>>                                    mRotations;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockPos>>                                    mPositions;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::vector<::br::worldgen::JigsawJunction>>> mJunctions;
    ::ll::TypedStorage<8, 24, ::std::vector<::BoundingBox>>                                 mBoundingBoxes;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    JigsawSectionData& operator=(JigsawSectionData const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI JigsawSectionData(::br::worldgen::JigsawSectionData const&);

    MCNAPI ::br::worldgen::JigsawSectionDataKey push(::StructurePoolElement const*, int);

    MCNAPI ~JigsawSectionData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::br::worldgen::JigsawSectionData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI ::br::worldgen::JigsawSectionDataKey push(::StructurePoolElement const* element, int depth);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace br::worldgen
