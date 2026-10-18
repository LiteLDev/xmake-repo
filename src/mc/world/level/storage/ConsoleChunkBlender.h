#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockType;
class ChunkLocalHeight;
class LevelChunk;
class PerlinSimplexNoise;
struct OverworldBlendRules;
// clang-format on

class ConsoleChunkBlender {
public:
    // ConsoleChunkBlender inner types define
    enum class BlenderMode : int {
        None                    = 0,
        Overworld4J             = 1,
        OverworldCliffsAndCaves = 2,
        Nether4J                = 3,
        NetherUpdate            = 4,
        End4J                   = 5,
    };

    enum class ShiftBlockTypes : int {
        ConsoleBlend      = 0,
        TerrainGenChanged = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<PerlinSimplexNoise>> mConversionBlendNoise;
    ::ll::UntypedStorage<4, 16>                                   mInterpCorners;
    ::ll::UntypedStorage<4, 1024>                                 mInterpTable;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinSimplexNoise>> mConversionBlendNoise;
    ::ll::TypedStorage<4, 16, float[2][2]>                            mInterpCorners;
    ::ll::TypedStorage<4, 1024, float[16][16]>                        mInterpTable;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _blendChunkOverworld(::LevelChunk&, ::LevelChunk&, ::ConsoleChunkBlender::ShiftBlockTypes const);
#else // @header-generator platform
    MCNAPI void _blendChunkOverworld(
        ::LevelChunk&                                generatedChunk,
        ::LevelChunk&                                lc,
        ::ConsoleChunkBlender::ShiftBlockTypes const shiftBlockType
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ConsoleChunkBlender();
#else // @header-generator platform
    MCNAPI ::ChunkLocalHeight _findTopMostWaterHeight(
        ::LevelChunk&                                   lc,
        int                                             x,
        int                                             z,
        ::std::unordered_set<::BlockType const*> const& waterBlocks
    );

    MCNAPI void _prepInterpTable();
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // static functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI static void _shiftColumnBySetBlocks(
        ::LevelChunk&                                lc,
        int                                          x,
        int                                          z,
        int                                          adj,
        bool                                         isSeaBlock,
        ::ChunkLocalHeight const                     topSeaBlockHeight,
        ::ConsoleChunkBlender::ShiftBlockTypes const shiftBlockType,
        ::OverworldBlendRules const&                 blendRules
    );
#endif // @header-generator platform
    // NOLINTEND
};
