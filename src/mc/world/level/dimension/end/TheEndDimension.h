#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/dimension/Dimension.h"
#include "mc/world/level/dimension/LimboEntitiesVersion.h"
#include "mc/world/level/storage/StorageVersion.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ChunkSource;
class CompoundTag;
class EndChaosLightManager;
class EndDragonFight;
class LevelChunk;
class Vec3;
class WorldGenerator;
struct BiomeIdType;
#if defined(LL_PLAT_A) // @header-generator platform
struct DerivedDimensionArguments;
#else // @header-generator platform
#endif // @header-generator platform
struct DimensionType;
namespace br::worldgen { class StructureSetRegistry; }
// clang-format on

class TheEndDimension : public ::Dimension {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<EndDragonFight>>       mDragonFight;
    ::ll::TypedStorage<8, 8, std::unique_ptr<EndChaosLightManager>> mEndChaosLightManager;
    ::ll::TypedStorage<1, 1, bool>                                  mEnderDragonExists;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::EndDragonFight>>       mDragonFight;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::EndChaosLightManager>> mEndChaosLightManager;
    ::ll::TypedStorage<1, 1, bool>                                      mEnderDragonExists;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    TheEndDimension();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~TheEndDimension();
#else // @header-generator platform
    virtual ~TheEndDimension() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isNaturalDimension() const;
#else // @header-generator platform
    virtual void startLeaveGame() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Vec3 translatePosAcrossDimension(::Vec3 const&, ::DimensionType) const;
#else // @header-generator platform
    virtual void init(::br::worldgen::StructureSetRegistry const& structureSetRegistry) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void init(::br::worldgen::StructureSetRegistry const&);
#else // @header-generator platform
    virtual void tick() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick();
#else // @header-generator platform
    virtual ::BiomeIdType getDefaultBiomeId() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<WorldGenerator> createGenerator(::br::worldgen::StructureSetRegistry const&);
#else // @header-generator platform
    virtual bool isNaturalDimension() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void upgradeLevelChunk(::ChunkSource&, ::LevelChunk&, ::LevelChunk&);
#else // @header-generator platform
    virtual bool isValidSpawn(int x, int z) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fixWallChunk(::ChunkSource&, ::LevelChunk&);
#else // @header-generator platform
    virtual short getCloudHeight() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool levelChunkNeedsUpgrade(::LevelChunk const&) const;
#else // @header-generator platform
    virtual bool mayRespawnViaBed() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isValidSpawn(int, int) const;
#else // @header-generator platform
    virtual ::BlockPos getSpawnPos() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual short getCloudHeight() const;
#else // @header-generator platform
    virtual int getSpawnYPosition() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BiomeIdType getDefaultBiomeId() const;
#else // @header-generator platform
    virtual ::Vec3 translatePosAcrossDimension(::Vec3 const& originalPos, ::DimensionType fromId) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool mayRespawnViaBed() const;
#else // @header-generator platform
    virtual void deserialize(::CompoundTag const& tag) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BlockPos getSpawnPos() const;
#else // @header-generator platform
    virtual void serialize(::CompoundTag& tag) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getSpawnYPosition() const;
#else // @header-generator platform
    virtual float getTimeOfDay(int time, float a) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setDimensionDirectionalLightControls(std::variant<Dimension::ChaoticDirectionalLightControls> const&);
#else // @header-generator platform
    virtual ::std::unique_ptr<::WorldGenerator>
    createGenerator(::br::worldgen::StructureSetRegistry const& structureSetRegistry) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Dimension::DirectionalLightState getDimensionDirectionalLightSourceState(float) const;
#else // @header-generator platform
    virtual bool levelChunkNeedsUpgrade(::LevelChunk const& lc) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void deserialize(::CompoundTag const&);
#else // @header-generator platform
    virtual void upgradeLevelChunk(::ChunkSource& source, ::LevelChunk& lc, ::LevelChunk& generatedChunk) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void serialize(::CompoundTag&) const;
#else // @header-generator platform
    virtual void fixWallChunk(::ChunkSource& source, ::LevelChunk& lc) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void startLeaveGame();
#else // @header-generator platform
    virtual ::Dimension::DirectionalLightState getDimensionDirectionalLightSourceState(float a) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getTimeOfDay(int, float) const;
#else // @header-generator platform
    virtual void setDimensionDirectionalLightControls(
        ::std::variant<::Dimension::ChaoticDirectionalLightControls> const& directionalLightControls
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _upgradeOldLimboEntity(::CompoundTag&, ::LimboEntitiesVersion);
#else // @header-generator platform
    virtual void _upgradeOldLimboEntity(::CompoundTag& tag, ::LimboEntitiesVersion vers) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<ChunkSource> _wrapStorageForVersionCompatibility(std::unique_ptr<ChunkSource>, ::StorageVersion);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::std::unique_ptr<::ChunkSource> _wrapStorageForVersionCompatibility(
        ::std::unique_ptr<::ChunkSource> storageSource,
        ::StorageVersion                 levelVersion
    ) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isNaturalDimension() const;
#else // @header-generator platform
    MCAPI void $startLeaveGame();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Vec3 $translatePosAcrossDimension(::Vec3 const&, ::DimensionType) const;
#else // @header-generator platform
    MCAPI void $init(::br::worldgen::StructureSetRegistry const& structureSetRegistry);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $init(::br::worldgen::StructureSetRegistry const&);
#else // @header-generator platform
    MCAPI void $tick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick();
#else // @header-generator platform
    MCAPI ::BiomeIdType $getDefaultBiomeId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<WorldGenerator> $createGenerator(::br::worldgen::StructureSetRegistry const&);
#else // @header-generator platform
    MCFOLD bool $isNaturalDimension() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $upgradeLevelChunk(::ChunkSource&, ::LevelChunk&, ::LevelChunk&);
#else // @header-generator platform
    MCFOLD bool $isValidSpawn(int x, int z) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fixWallChunk(::ChunkSource&, ::LevelChunk&);
#else // @header-generator platform
    MCAPI short $getCloudHeight() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $levelChunkNeedsUpgrade(::LevelChunk const&) const;
#else // @header-generator platform
    MCFOLD bool $mayRespawnViaBed() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isValidSpawn(int, int) const;
#else // @header-generator platform
    MCAPI ::BlockPos $getSpawnPos() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI short $getCloudHeight() const;
#else // @header-generator platform
    MCFOLD int $getSpawnYPosition() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BiomeIdType $getDefaultBiomeId() const;
#else // @header-generator platform
    MCAPI ::Vec3 $translatePosAcrossDimension(::Vec3 const& originalPos, ::DimensionType fromId) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $mayRespawnViaBed() const;
#else // @header-generator platform
    MCAPI void $deserialize(::CompoundTag const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockPos $getSpawnPos() const;
#else // @header-generator platform
    MCAPI void $serialize(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getSpawnYPosition() const;
#else // @header-generator platform
    MCFOLD float $getTimeOfDay(int time, float a) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setDimensionDirectionalLightControls(std::variant<Dimension::ChaoticDirectionalLightControls> const&);
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::WorldGenerator>
    $createGenerator(::br::worldgen::StructureSetRegistry const& structureSetRegistry);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Dimension::DirectionalLightState $getDimensionDirectionalLightSourceState(float) const;
#else // @header-generator platform
    MCAPI bool $levelChunkNeedsUpgrade(::LevelChunk const& lc) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $deserialize(::CompoundTag const&);
#else // @header-generator platform
    MCAPI void $upgradeLevelChunk(::ChunkSource& source, ::LevelChunk& lc, ::LevelChunk& generatedChunk);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $serialize(::CompoundTag&) const;
#else // @header-generator platform
    MCAPI void $fixWallChunk(::ChunkSource& source, ::LevelChunk& lc);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $startLeaveGame();
#else // @header-generator platform
    MCAPI ::Dimension::DirectionalLightState $getDimensionDirectionalLightSourceState(float a) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getTimeOfDay(int, float) const;
#else // @header-generator platform
    MCAPI void $setDimensionDirectionalLightControls(
        ::std::variant<::Dimension::ChaoticDirectionalLightControls> const& directionalLightControls
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_upgradeOldLimboEntity(::CompoundTag&, ::LimboEntitiesVersion);
#else // @header-generator platform
    MCAPI void $_upgradeOldLimboEntity(::CompoundTag& tag, ::LimboEntitiesVersion vers);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<ChunkSource>
           $_wrapStorageForVersionCompatibility(std::unique_ptr<ChunkSource>, ::StorageVersion);
    // NOLINTEND
#else // @header-generator platform
    MCFOLD ::std::unique_ptr<::ChunkSource>
    $_wrapStorageForVersionCompatibility(::std::unique_ptr<::ChunkSource> storageSource, ::StorageVersion levelVersion);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
