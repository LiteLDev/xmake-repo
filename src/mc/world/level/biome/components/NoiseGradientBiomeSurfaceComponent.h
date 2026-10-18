#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_30/NoiseDescriptor.h"
#include "mc/world/level/biome/components/BiomeComponentBase.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/block/NoiseBlockSpecifier.h"
#else // @header-generator platform
#include "mc/world/level/levelgen/synth/MultiOctaveNoiseImpl.h"
#endif // @header-generator platform
#include "mc/world/level/levelgen/synth/NormalNoiseImpl.h"

// auto generated forward declare list
// clang-format off
class Block;
#if defined(LL_PLAT_A) // @header-generator platform
class LevelSeed64;
template<bool T0, typename T1> class MultiOctaveNoiseImpl;
template<bool T0> class ParityImprovedNoiseImpl;
#else // @header-generator platform
struct NoiseBlockSpecifier;
#endif // @header-generator platform
// clang-format on

struct NoiseGradientBiomeSurfaceComponent : public ::BiomeComponentBase {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<const Block*>>                mNonReplaceableBlocks;
    ::ll::TypedStorage<8, 24, std::vector<NoiseBlockSpecifier>>         mGradientBlockRanges;
    ::ll::TypedStorage<8, 56, ::SharedTypes::v1_26_30::NoiseDescriptor> mNoiseDescriptor;
    ::ll::UntypedStorage<8, 8>                                          mNoise;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::Block const*>>            mNonReplaceableBlocks;
    ::ll::TypedStorage<8, 24, ::std::vector<::NoiseBlockSpecifier>>     mGradientBlockRanges;
    ::ll::TypedStorage<8, 64, ::SharedTypes::v1_26_30::NoiseDescriptor> mNoiseDescriptor;
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<::NormalNoiseImpl<0, ::MultiOctaveNoiseImpl<0, ::ParityImprovedNoiseImpl<0>>>>>
        mNoise;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~NoiseGradientBiomeSurfaceComponent();
#else // @header-generator platform
    virtual ~NoiseGradientBiomeSurfaceComponent() /*override*/;
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

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
