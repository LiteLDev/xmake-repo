#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/LevelSeed64.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class BiomeSource;
class BlockPos;
class Dimension;
class HashedString;
namespace br::worldgen { class StructureSetRegistry; }
namespace br::worldgen { struct StructureSet; }
// clang-format on

namespace br::worldgen {

struct ChunkGeneratorStructureState {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, long>                                                            mLevelSeed;
    ::ll::TypedStorage<8, 8, long>                                                            mRingsSeed;
    ::ll::TypedStorage<8, 8, ulong>                                                           mMaxStructureCount;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<const br::worldgen::StructureSet>>> mPossibleStructures;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, int64>                                                                 mLevelSeed;
    ::ll::TypedStorage<8, 8, int64>                                                                 mRingsSeed;
    ::ll::TypedStorage<8, 8, uint64>                                                                mMaxStructureCount;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::br::worldgen::StructureSet const>>> mPossibleStructures;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ChunkGeneratorStructureState(ChunkGeneratorStructureState const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<BlockPos>
    findNearestStructureFeature(::Dimension&, ::HashedString, ::BlockPos const&, ::BiomeSource const&, bool) const;
#else // @header-generator platform
    MCAPI ::std::optional<::BlockPos> findNearestStructureFeature(
        ::Dimension&         dimension,
        ::HashedString       feature,
        ::BlockPos const&    origin,
        ::BiomeSource const& biomeSource,
        bool                 mustBeInNewChunks
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ChunkGeneratorStructureState();
#else // @header-generator platform
    MCAPI ~ChunkGeneratorStructureState();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::br::worldgen::ChunkGeneratorStructureState
    createFlat(long, ::BiomeSource const&, std::vector<std::shared_ptr<const br::worldgen::StructureSet>>);
#else // @header-generator platform
    MCAPI static ::br::worldgen::ChunkGeneratorStructureState createFlat(
        int64                                                                levelSeed,
        ::BiomeSource const&                                                 biomeSource,
        ::std::vector<::std::shared_ptr<::br::worldgen::StructureSet const>> structureOverrides
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::br::worldgen::ChunkGeneratorStructureState
    createNormal(long, ::BiomeSource const&, ::br::worldgen::StructureSetRegistry const&);

    MCNAPI static ::br::worldgen::ChunkGeneratorStructureState createVoid(long);
#else // @header-generator platform
    MCAPI static ::br::worldgen::ChunkGeneratorStructureState createNormal(
        int64                                       levelSeed,
        ::BiomeSource const&                        biomeSource,
        ::br::worldgen::StructureSetRegistry const& allStructures
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace br::worldgen
