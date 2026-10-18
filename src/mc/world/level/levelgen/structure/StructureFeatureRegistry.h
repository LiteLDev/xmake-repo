#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/ChunkGeneratorStructureState.h"
#include "mc/world/level/levelgen/v2/StructureCache.h"

// auto generated forward declare list
// clang-format off
class BiomeSource;
class BlockPos;
class Dimension;
class HashedString;
class IPreliminarySurfaceProvider;
class StructureFeature;
// clang-format on

class StructureFeatureRegistry {
public:
    // StructureFeatureRegistry inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using StructureFeatureContainer = std::vector<std::unique_ptr<StructureFeature>>;
#else // @header-generator platform
    using StructureFeatureContainer = ::std::vector<::std::unique_ptr<::StructureFeature>>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 48, ::br::worldgen::ChunkGeneratorStructureState>   mGeneratorState;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<StructureFeature>>> mStructureFeatures;
    ::ll::TypedStorage<8, 384, ::br::worldgen::StructureCache>                mStructureCache;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::br::worldgen::ChunkGeneratorStructureState>         mGeneratorState;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::StructureFeature>>> mStructureFeatures;
    ::ll::TypedStorage<8, 136, ::br::worldgen::StructureCache>                      mStructureCache;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI StructureFeatureRegistry();

    MCNAPI bool findNearestStructureFeature(
        ::Dimension&,
        ::IPreliminarySurfaceProvider&,
        ::HashedString,
        ::BlockPos const&,
        ::BlockPos&,
        ::BiomeSource const&,
        bool,
        std::optional<HashedString>
#else // @header-generator platform
    MCAPI bool findNearestStructureFeature(
        ::Dimension&                    dimension,
        ::IPreliminarySurfaceProvider&  surfaceProvider,
        ::HashedString                  feature,
        ::BlockPos const&               origin,
        ::BlockPos&                     pos,
        ::BiomeSource const&            biomeSource,
        bool                            mustBeInNewChunks,
        ::std::optional<::HashedString> biomeTag
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::HashedString findStructureFeatureTypeAt(::BlockPos const&);
#else // @header-generator platform
    MCAPI ::HashedString findStructureFeatureTypeAt(::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::StructureFeature* getStructureFeatureOfType(::HashedString) const;
#else // @header-generator platform
    MCAPI ::StructureFeature* getStructureFeatureOfType(::HashedString type) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isStructureFeatureTypeAt(::BlockPos const&, ::HashedString) const;
#else // @header-generator platform
    MCAPI bool isStructureFeatureTypeAt(::BlockPos const& pos, ::HashedString type) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::br::worldgen::StructureCache& structureCache();
#else // @header-generator platform
    MCAPI void waitForBlueprints() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void tick();

    MCNAPI void waitForBlueprints() const;

    MCNAPI ~StructureFeatureRegistry();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI ~StructureFeatureRegistry();
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
