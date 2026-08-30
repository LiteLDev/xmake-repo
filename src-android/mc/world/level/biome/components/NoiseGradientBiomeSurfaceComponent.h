#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_30/NoiseDescriptor.h"
#include "mc/world/level/biome/components/BiomeComponentBase.h"
#include "mc/world/level/block/NoiseBlockSpecifier.h"
#include "mc/world/level/levelgen/synth/NormalNoiseImpl.h"

// auto generated forward declare list
// clang-format off
class Block;
class LevelSeed64;
template<bool T0, typename T1> class MultiOctaveNoiseImpl;
template<bool T0> class ParityImprovedNoiseImpl;
// clang-format on

struct NoiseGradientBiomeSurfaceComponent : public ::BiomeComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<const Block*>>                mNonReplaceableBlocks;
    ::ll::TypedStorage<8, 24, std::vector<NoiseBlockSpecifier>>         mGradientBlockRanges;
    ::ll::TypedStorage<8, 56, ::SharedTypes::v1_26_30::NoiseDescriptor> mNoiseDescriptor;
    ::ll::UntypedStorage<8, 8>                                          mNoise;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NoiseGradientBiomeSurfaceComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
