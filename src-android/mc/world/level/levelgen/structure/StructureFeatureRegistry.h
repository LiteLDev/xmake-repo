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
    using StructureFeatureContainer = std::vector<std::unique_ptr<StructureFeature>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::br::worldgen::ChunkGeneratorStructureState>   mGeneratorState;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<StructureFeature>>> mStructureFeatures;
    ::ll::TypedStorage<8, 384, ::br::worldgen::StructureCache>                mStructureCache;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
    );

    MCNAPI ::HashedString findStructureFeatureTypeAt(::BlockPos const&);

    MCNAPI ::StructureFeature* getStructureFeatureOfType(::HashedString) const;

    MCNAPI bool isStructureFeatureTypeAt(::BlockPos const&, ::HashedString) const;

    MCNAPI ::br::worldgen::StructureCache& structureCache();

    MCNAPI void tick();

    MCNAPI void waitForBlueprints() const;

    MCNAPI ~StructureFeatureRegistry();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
