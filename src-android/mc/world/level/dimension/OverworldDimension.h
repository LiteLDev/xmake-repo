#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/dimension/Dimension.h"
#include "mc/world/level/dimension/LimboEntitiesVersion.h"
#include "mc/world/level/storage/StorageVersion.h"

// auto generated forward declare list
// clang-format off
class ChunkSource;
class CompoundTag;
class LevelChunk;
class Vec3;
class WorldGenerator;
struct DerivedDimensionArguments;
struct DimensionType;
namespace br::worldgen { class StructureSetRegistry; }
namespace mce { class Color; }
// clang-format on

class OverworldDimension : public ::Dimension {
public:
    // prevent constructor by default
    OverworldDimension();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~OverworldDimension();

    virtual ::Vec3 translatePosAcrossDimension(::Vec3 const&, ::DimensionType) const;

    virtual std::unique_ptr<WorldGenerator> createGenerator(::br::worldgen::StructureSetRegistry const&);

    virtual void upgradeLevelChunk(::ChunkSource&, ::LevelChunk&, ::LevelChunk&);

    virtual void fixWallChunk(::ChunkSource&, ::LevelChunk&);

    virtual bool levelChunkNeedsUpgrade(::LevelChunk const&) const;

    virtual ::mce::Color getBrightnessDependentFogColor(::mce::Color const&, float) const;

    virtual short getCloudHeight() const;

    virtual void _upgradeOldLimboEntity(::CompoundTag&, ::LimboEntitiesVersion);

    virtual std::unique_ptr<ChunkSource> _wrapStorageForVersionCompatibility(std::unique_ptr<ChunkSource>, ::StorageVersion);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Vec3 $translatePosAcrossDimension(::Vec3 const&, ::DimensionType) const;

    MCNAPI std::unique_ptr<WorldGenerator> $createGenerator(::br::worldgen::StructureSetRegistry const&);

    MCNAPI void $upgradeLevelChunk(::ChunkSource&, ::LevelChunk&, ::LevelChunk&);

    MCNAPI void $fixWallChunk(::ChunkSource&, ::LevelChunk&);

    MCNAPI bool $levelChunkNeedsUpgrade(::LevelChunk const&) const;

    MCNAPI ::mce::Color $getBrightnessDependentFogColor(::mce::Color const&, float) const;

    MCNAPI short $getCloudHeight() const;

    MCNAPI void $_upgradeOldLimboEntity(::CompoundTag&, ::LimboEntitiesVersion);

    MCNAPI std::unique_ptr<ChunkSource>
           $_wrapStorageForVersionCompatibility(std::unique_ptr<ChunkSource>, ::StorageVersion);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
