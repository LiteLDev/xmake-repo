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
struct BiomeIdType;
struct DerivedDimensionArguments;
struct DimensionType;
namespace br::worldgen { class StructureSetRegistry; }
// clang-format on

class NetherDimension : public ::Dimension {
public:
    // prevent constructor by default
    NetherDimension();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~NetherDimension();

    virtual bool isNaturalDimension() const;

    virtual ::Vec3 translatePosAcrossDimension(::Vec3 const&, ::DimensionType) const;

    virtual void init(::br::worldgen::StructureSetRegistry const&);

    virtual std::unique_ptr<WorldGenerator> createGenerator(::br::worldgen::StructureSetRegistry const&);

    virtual void upgradeLevelChunk(::ChunkSource&, ::LevelChunk&, ::LevelChunk&);

    virtual void fixWallChunk(::ChunkSource&, ::LevelChunk&);

    virtual bool levelChunkNeedsUpgrade(::LevelChunk const&) const;

    virtual bool isValidSpawn(int, int) const;

    virtual ::BiomeIdType getDefaultBiomeId() const;

    virtual bool mayRespawnViaBed() const;

    virtual bool showSky() const;

    virtual float getTimeOfDay(int, float) const;

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
    MCNAPI bool $isNaturalDimension() const;

    MCNAPI ::Vec3 $translatePosAcrossDimension(::Vec3 const&, ::DimensionType) const;

    MCNAPI void $init(::br::worldgen::StructureSetRegistry const&);

    MCNAPI std::unique_ptr<WorldGenerator> $createGenerator(::br::worldgen::StructureSetRegistry const&);

    MCNAPI void $upgradeLevelChunk(::ChunkSource&, ::LevelChunk&, ::LevelChunk&);

    MCNAPI void $fixWallChunk(::ChunkSource&, ::LevelChunk&);

    MCNAPI bool $levelChunkNeedsUpgrade(::LevelChunk const&) const;

    MCNAPI bool $isValidSpawn(int, int) const;

    MCNAPI ::BiomeIdType $getDefaultBiomeId() const;

    MCNAPI bool $mayRespawnViaBed() const;

    MCNAPI bool $showSky() const;

    MCNAPI float $getTimeOfDay(int, float) const;

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
