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
    ::ll::TypedStorage<8, 8, std::unique_ptr<PerlinSimplexNoise>> mConversionBlendNoise;
    ::ll::UntypedStorage<4, 16>                                   mInterpCorners;
    ::ll::UntypedStorage<4, 1024>                                 mInterpTable;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _blendChunkOverworld(::LevelChunk&, ::LevelChunk&, ::ConsoleChunkBlender::ShiftBlockTypes const);

    MCNAPI ~ConsoleChunkBlender();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
