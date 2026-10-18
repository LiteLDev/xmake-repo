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
#if defined(LL_PLAT_A) // @header-generator platform
struct DerivedDimensionArguments;
#else // @header-generator platform
#endif // @header-generator platform
struct DimensionType;
namespace br::worldgen { class StructureSetRegistry; }
namespace mce { class Color; }
// clang-format on

class OverworldDimension : public ::Dimension {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    OverworldDimension();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~OverworldDimension();
#else // @header-generator platform
    virtual ~OverworldDimension() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Vec3 translatePosAcrossDimension(::Vec3 const&, ::DimensionType) const;
#else // @header-generator platform
    virtual ::Vec3 translatePosAcrossDimension(::Vec3 const& originalPos, ::DimensionType fromId) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<WorldGenerator> createGenerator(::br::worldgen::StructureSetRegistry const&);
#else // @header-generator platform
    virtual ::std::unique_ptr<::WorldGenerator>
    createGenerator(::br::worldgen::StructureSetRegistry const& structureSetRegistry) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void upgradeLevelChunk(::ChunkSource&, ::LevelChunk&, ::LevelChunk&);
#else // @header-generator platform
    virtual bool levelChunkNeedsUpgrade(::LevelChunk const& lc) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fixWallChunk(::ChunkSource&, ::LevelChunk&);
#else // @header-generator platform
    virtual void upgradeLevelChunk(::ChunkSource& source, ::LevelChunk& lc, ::LevelChunk& generatedChunk) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool levelChunkNeedsUpgrade(::LevelChunk const&) const;
#else // @header-generator platform
    virtual void fixWallChunk(::ChunkSource& source, ::LevelChunk& lc) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::mce::Color getBrightnessDependentFogColor(::mce::Color const&, float) const;
#else // @header-generator platform
    virtual short getCloudHeight() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual short getCloudHeight() const;
#else // @header-generator platform
    virtual ::mce::Color getBrightnessDependentFogColor(::mce::Color const& baseColor, float brightness) const
        /*override*/;
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
    MCNAPI ::Vec3 $translatePosAcrossDimension(::Vec3 const&, ::DimensionType) const;
#else // @header-generator platform
    MCFOLD ::Vec3 $translatePosAcrossDimension(::Vec3 const& originalPos, ::DimensionType fromId) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<WorldGenerator> $createGenerator(::br::worldgen::StructureSetRegistry const&);
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::WorldGenerator>
    $createGenerator(::br::worldgen::StructureSetRegistry const& structureSetRegistry);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $upgradeLevelChunk(::ChunkSource&, ::LevelChunk&, ::LevelChunk&);
#else // @header-generator platform
    MCAPI bool $levelChunkNeedsUpgrade(::LevelChunk const& lc) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fixWallChunk(::ChunkSource&, ::LevelChunk&);
#else // @header-generator platform
    MCAPI void $upgradeLevelChunk(::ChunkSource& source, ::LevelChunk& lc, ::LevelChunk& generatedChunk);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $levelChunkNeedsUpgrade(::LevelChunk const&) const;
#else // @header-generator platform
    MCAPI void $fixWallChunk(::ChunkSource& source, ::LevelChunk& lc);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::mce::Color $getBrightnessDependentFogColor(::mce::Color const&, float) const;
#else // @header-generator platform
    MCAPI short $getCloudHeight() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI short $getCloudHeight() const;
#else // @header-generator platform
    MCFOLD ::mce::Color $getBrightnessDependentFogColor(::mce::Color const& baseColor, float brightness) const;
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
    MCAPI ::std::unique_ptr<::ChunkSource>
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
