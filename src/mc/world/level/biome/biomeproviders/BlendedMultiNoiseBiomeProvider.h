#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/ParameterList.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/biome/RTree.h"
#include "mc/world/level/levelgen/v1/ChunkLocalNoiseCache.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
class ChunkBlenderFactory;
#if defined(LL_PLAT_A) // @header-generator platform
struct BiomeHashType;
struct BiomeIdType;
#else // @header-generator platform
#endif // @header-generator platform
struct GetBiomeOptions;
struct OverworldNoises3d;
#if defined(LL_PLAT_A) // @header-generator platform
struct TargetPoint;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class BlendedMultiNoiseBiomeProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::OverworldNoises3d const&> mOverworldNoises;
    ::ll::TypedStorage<8, 192, ::ParameterList>          mParameterList;
    ::ll::TypedStorage<8, 8, ::ChunkBlenderFactory&>     mAttenuationFactory;
    ::ll::TypedStorage<8, 8, ::BiomeRegistry const&>     mBiomeRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    BlendedMultiNoiseBiomeProvider& operator=(BlendedMultiNoiseBiomeProvider const&);
    BlendedMultiNoiseBiomeProvider(BlendedMultiNoiseBiomeProvider const&);
    BlendedMultiNoiseBiomeProvider();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BlendedMultiNoiseBiomeProvider(
        ::OverworldNoises3d const&,
        ::ParameterList,
        ::ChunkBlenderFactory&,
        ::BiomeRegistry const&
#else // @header-generator platform
    MCAPI BlendedMultiNoiseBiomeProvider(
        ::OverworldNoises3d const& overworldNoises,
        ::ParameterList            parameterList,
        ::ChunkBlenderFactory&     attenuatorFactory,
        ::BiomeRegistry const&     biomeRegistry
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Biome const* tryGetBiome(::GetBiomeOptions const&) const;

    MCNAPI ::Biome const*
    tryGetBiome(::GetBiomeOptions const&, ::ChunkLocalNoiseCache::CacheEntry const&, ::RTree::Hint*) const;

    MCNAPI ~BlendedMultiNoiseBiomeProvider();
#else // @header-generator platform
    MCAPI ::Biome const* tryGetBiome(::GetBiomeOptions const& getBiomeOptions) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::OverworldNoises3d const&, ::ParameterList, ::ChunkBlenderFactory&, ::BiomeRegistry const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(
        ::OverworldNoises3d const& overworldNoises,
        ::ParameterList            parameterList,
        ::ChunkBlenderFactory&     attenuatorFactory,
        ::BiomeRegistry const&     biomeRegistry
    );
#endif // @header-generator platform
    // NOLINTEND
};
