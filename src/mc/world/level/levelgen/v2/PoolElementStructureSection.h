#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/levelgen/v2/JigsawJunction.h"
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/util/Rotation.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/levelgen/structure/BoundingBox.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/levelgen/structure/structurepools/JigsawReplacement.h"
#include "mc/world/level/levelgen/v2/JigsawJunction.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/levelgen/v2/LiquidSettings.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/levelgen/v2/terrain_adjustment/Type.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BlockSource;
class ChunkPos;
class IRandom;
class Random;
#else // @header-generator platform
#endif // @header-generator platform
class StructurePoolElement;
namespace SharedTypes::v1_21_50 { struct PoolElementStructureSection; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace br::worldgen { struct Rigid; }
#else // @header-generator platform
namespace br::worldgen { struct JigsawJunction; }
#endif // @header-generator platform
// clang-format on

namespace br::worldgen {

class PoolElementStructureSection {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 24, ::BoundingBox>                             mBoundingBox;
    ::ll::TypedStorage<8, 8, ::StructurePoolElement const*>              mElement;
    ::ll::TypedStorage<4, 4, int>                                        mGroundOffset;
    ::ll::TypedStorage<1, 1, ::Rotation>                                 mRot;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                mPosition;
    ::ll::TypedStorage<8, 24, std::vector<br::worldgen::JigsawJunction>> mJunctions;
    ::ll::TypedStorage<1, 1, ::br::worldgen::LiquidSettings>             mLiquidSettings;
#else // @header-generator platform
    ::ll::TypedStorage<4, 24, ::BoundingBox>                                 mBoundingBox;
    ::ll::TypedStorage<8, 8, ::StructurePoolElement const*>                  mElement;
    ::ll::TypedStorage<4, 4, int>                                            mGroundOffset;
    ::ll::TypedStorage<1, 1, ::Rotation>                                     mRot;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                    mPosition;
    ::ll::TypedStorage<8, 24, ::std::vector<::br::worldgen::JigsawJunction>> mJunctions;
    ::ll::TypedStorage<1, 1, ::br::worldgen::LiquidSettings>                 mLiquidSettings;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    PoolElementStructureSection& operator=(PoolElementStructureSection const&);
    PoolElementStructureSection();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::v1_21_50::PoolElementStructureSection serialize() const;
#else // @header-generator platform
    MCAPI ::SharedTypes::v1_21_50::PoolElementStructureSection serialize() const;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace br::worldgen
