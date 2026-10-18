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

class CustomDimension : public ::Dimension {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48> mGeneratorCreator;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::function<::std::unique_ptr<::WorldGenerator>(::Dimension&)>> mGeneratorCreator;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    CustomDimension();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~CustomDimension();
#else // @header-generator platform
    virtual ~CustomDimension() /*override*/ = default;
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
    createGenerator(::br::worldgen::StructureSetRegistry const&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void upgradeLevelChunk(::ChunkSource&, ::LevelChunk&, ::LevelChunk&);
#else // @header-generator platform
    virtual bool levelChunkNeedsUpgrade(::LevelChunk const&) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fixWallChunk(::ChunkSource&, ::LevelChunk&);
#else // @header-generator platform
    virtual void upgradeLevelChunk(::ChunkSource&, ::LevelChunk&, ::LevelChunk&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool levelChunkNeedsUpgrade(::LevelChunk const&) const;
#else // @header-generator platform
    virtual void fixWallChunk(::ChunkSource&, ::LevelChunk&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::mce::Color getBrightnessDependentFogColor(::mce::Color const&, float) const;
#else // @header-generator platform
    virtual ::mce::Color getBrightnessDependentFogColor(::mce::Color const& baseColor, float brightness) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _upgradeOldLimboEntity(::CompoundTag&, ::LimboEntitiesVersion);
#else // @header-generator platform
    virtual void _upgradeOldLimboEntity(::CompoundTag&, ::LimboEntitiesVersion) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<ChunkSource> _wrapStorageForVersionCompatibility(std::unique_ptr<ChunkSource>, ::StorageVersion);
    // clang-format on
#else // @header-generator platform
    virtual ::std::unique_ptr<::ChunkSource> _wrapStorageForVersionCompatibility(
        ::std::unique_ptr<::ChunkSource> storageSource,
        ::StorageVersion                 levelVersion
    ) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI CustomDimension(::DerivedDimensionArguments&&, ::DimensionType, std::string const&);
#else // @header-generator platform
    MCAPI CustomDimension(::DerivedDimensionArguments&& args, ::DimensionType id, ::std::string const& name);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::DerivedDimensionArguments&&, ::DimensionType, std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::DerivedDimensionArguments&& args, ::DimensionType id, ::std::string const& name);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Vec3 $translatePosAcrossDimension(::Vec3 const&, ::DimensionType) const;
#else // @header-generator platform
    MCAPI ::Vec3 $translatePosAcrossDimension(::Vec3 const& originalPos, ::DimensionType fromId) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<WorldGenerator> $createGenerator(::br::worldgen::StructureSetRegistry const&);
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::WorldGenerator> $createGenerator(::br::worldgen::StructureSetRegistry const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $upgradeLevelChunk(::ChunkSource&, ::LevelChunk&, ::LevelChunk&);
#else // @header-generator platform
    MCFOLD bool $levelChunkNeedsUpgrade(::LevelChunk const&) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fixWallChunk(::ChunkSource&, ::LevelChunk&);
#else // @header-generator platform
    MCFOLD void $upgradeLevelChunk(::ChunkSource&, ::LevelChunk&, ::LevelChunk&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $levelChunkNeedsUpgrade(::LevelChunk const&) const;
#else // @header-generator platform
    MCFOLD void $fixWallChunk(::ChunkSource&, ::LevelChunk&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::mce::Color $getBrightnessDependentFogColor(::mce::Color const&, float) const;
#else // @header-generator platform
    MCAPI ::mce::Color $getBrightnessDependentFogColor(::mce::Color const& baseColor, float brightness) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_upgradeOldLimboEntity(::CompoundTag&, ::LimboEntitiesVersion);
#else // @header-generator platform
    MCFOLD void $_upgradeOldLimboEntity(::CompoundTag&, ::LimboEntitiesVersion);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<ChunkSource>
           $_wrapStorageForVersionCompatibility(std::unique_ptr<ChunkSource>, ::StorageVersion);
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::ChunkSource>
    $_wrapStorageForVersionCompatibility(::std::unique_ptr<::ChunkSource> storageSource, ::StorageVersion levelVersion);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCNAPI static void** $vftableForSavedData();

    MCNAPI static void** $vftableForIDimension();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForLevelListener();
#endif // @header-generator platform
    // NOLINTEND
};
