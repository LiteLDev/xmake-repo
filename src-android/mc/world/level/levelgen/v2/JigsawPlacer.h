#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/StablePriorityQueue.h"
#include "mc/deps/shared_types/v1_21_80/structure/JigsawBlockMetadata.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/levelgen/structure/BoundingBox.h"
#include "mc/world/level/levelgen/structure/registry/JigsawStructureRegistry.h"
#include "mc/world/level/levelgen/structure/structurepools/alias/PoolAliasBinding.h"
#include "mc/world/level/levelgen/v2/JigsawSectionData.h"
#include "mc/world/level/levelgen/v2/JigsawSpace.h"

// auto generated forward declare list
// clang-format off
namespace JigsawStructureUtils { class MetadataCache; }
namespace br::worldgen { class ChunkAccessor; }
namespace br::worldgen { struct JigsawPieceState; }
namespace br::worldgen { struct WorldGenRandom; }
// clang-format on

namespace br::worldgen {

struct JigsawPlacer {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawPlacer& operator=(JigsawPlacer const&);
    JigsawPlacer(JigsawPlacer const&);
    JigsawPlacer();

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
};

} // namespace br::worldgen
