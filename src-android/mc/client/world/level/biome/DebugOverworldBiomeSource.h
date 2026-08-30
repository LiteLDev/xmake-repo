#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BaseGameVersion.h"
#include "mc/world/level/LevelSeed64.h"
#include "mc/world/level/dimension/DimensionHeightRange.h"
#include "mc/world/level/levelgen/synth/OverworldNoises3d.h"
#include "mc/world/level/storage/Experiments.h"

// auto generated forward declare list
// clang-format off
class BiomeRegistry;
class BiomeSource;
class ChunkBlenderFactory;
// clang-format on

class DebugOverworldBiomeSource {
public:
    // DebugOverworldBiomeSource inner types declare
    // clang-format off
    struct BiomeReplacementUI;
    struct CustomBiome;
    // clang-format on

    // DebugOverworldBiomeSource inner types define
    struct BiomeReplacementUI {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::set<std::string>> mTargetBiomes;
        ::ll::TypedStorage<4, 4, float>                  mAmount;
        ::ll::TypedStorage<4, 4, float>                  mFrequency;
        ::ll::TypedStorage<8, 8, ulong>                  mReplacementIndex;
        // NOLINTEND
    };

    struct CustomBiome {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, std::array<float, 3>>                                       mRGB;
        ::ll::TypedStorage<8, 24, std::vector<DebugOverworldBiomeSource::BiomeReplacementUI>> mReplacements;
        // NOLINTEND
    };

    using CustomBiomeMap = std::map<std::string, DebugOverworldBiomeSource::CustomBiome>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LevelSeed64 const>                  mSeed;
    ::ll::UntypedStorage<2, 4>                                     mHeightRange;
    ::ll::UntypedStorage<8, 32>                                    mBaseGameVersion;
    ::ll::TypedStorage<8, 56, ::Experiments const>                 mExperiments;
    ::ll::TypedStorage<8, 8, std::unique_ptr<BiomeRegistry>>       mBiomeRegistry;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ChunkBlenderFactory>> mChunkBlenderFactory;
    ::ll::TypedStorage<8, 864, std::optional<OverworldNoises3d>>   mOverworldNoise;
    ::ll::TypedStorage<8, 8, std::unique_ptr<BiomeSource>>         mBiomeSource;
    // NOLINTEND

public:
    // prevent constructor by default
    DebugOverworldBiomeSource();
};
