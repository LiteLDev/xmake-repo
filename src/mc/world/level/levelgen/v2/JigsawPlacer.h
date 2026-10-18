#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/StablePriorityQueue.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/v1_21_80/structure/JigsawBlockMetadata.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/util/Rotation.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/levelgen/structure/BoundingBox.h"
#include "mc/world/level/levelgen/structure/registry/JigsawStructureRegistry.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/levelgen/structure/structurepools/alias/PoolAliasBinding.h"
#include "mc/world/level/levelgen/v2/JigsawSectionData.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/levelgen/v2/JigsawSpace.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class BlockPos;
class BoundingBox;
class JigsawStructureRegistry;
#endif // @header-generator platform
namespace JigsawStructureUtils { class MetadataCache; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace SharedTypes::v1_21_80 { class JigsawBlockMetadata; }
#endif // @header-generator platform
namespace br::worldgen { class ChunkAccessor; }
namespace br::worldgen { struct JigsawPieceState; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace br::worldgen { struct JigsawSpace; }
#endif // @header-generator platform
namespace br::worldgen { struct WorldGenRandom; }
// clang-format on

namespace br::worldgen {

struct JigsawPlacer {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 8, ::br::worldgen::WorldGenRandom&> mRandom;
    ::ll::TypedStorage<8, 8, ::br::worldgen::ChunkAccessor&> mChunkAccessor;
    ::ll::TypedStorage<8, 8, ::JigsawStructureRegistry const&> mPools;
    ::ll::UntypedStorage<8, 8> mPoolAliasLookup;
    ::ll::TypedStorage<4, 4, int> mMaxDepth;
    ::ll::TypedStorage<8, 168, ::br::worldgen::JigsawSectionData> mPieces;
    ::ll::TypedStorage<8, 8, int(*)(::JigsawStructureUtils::MetadataCache&, ::BlockPos const&, ::Rotation, ::BoundingBox const&, std::vector<SharedTypes::v1_21_80::JigsawBlockMetadata> const&, std::vector<ulong> const&, ::JigsawStructureRegistry const&)> mExpansionCalc;
    ::ll::TypedStorage<8, 8, void(*)(int, ::BoundingBox&)> mExpansionEval;
    ::ll::TypedStorage<8, 24, std::vector<br::worldgen::JigsawSpace>> mPlacementSpaces;
    ::ll::UntypedStorage<8, 40> mPlacingQueue;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::br::worldgen::WorldGenRandom&>            mRandom;
    ::ll::TypedStorage<8, 8, ::br::worldgen::ChunkAccessor&>             mChunkAccessor;
    ::ll::TypedStorage<8, 8, ::JigsawStructureRegistry const&>           mPools;
    ::ll::TypedStorage<8, 8, ::PoolAliasBinding::PoolAliasLookup const&> mPoolAliasLookup;
    ::ll::TypedStorage<4, 4, int>                                        mMaxDepth;
    ::ll::TypedStorage<8, 168, ::br::worldgen::JigsawSectionData>        mPieces;
    ::ll::TypedStorage<
        8,
        8,
        int (*)(
            ::JigsawStructureUtils::MetadataCache&,
            ::BlockPos const&,
            ::Rotation,
            ::BoundingBox const&,
            ::std::vector<::SharedTypes::v1_21_80::JigsawBlockMetadata> const&,
            ::std::vector<uint64> const&,
            ::JigsawStructureRegistry const&
        )>
                                                                                                    mExpansionCalc;
    ::ll::TypedStorage<8, 8, void (*)(int, ::BoundingBox&)>                                         mExpansionEval;
    ::ll::TypedStorage<8, 24, ::std::vector<::br::worldgen::JigsawSpace>>                           mPlacementSpaces;
    ::ll::TypedStorage<8, 40, ::StablePriorityQueue<::br::worldgen::JigsawPieceState, ::std::less>> mPlacingQueue;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawPlacer& operator=(JigsawPlacer const&);
    JigsawPlacer(JigsawPlacer const&);
    JigsawPlacer();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~JigsawPlacer();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace br::worldgen
