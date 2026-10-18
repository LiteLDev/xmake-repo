#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/util/WeightedRandomList.h"
#include "mc/world/actor/spawn_category/Type.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/chunk/LevelChunkDataRegistry.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BlockSource;
#else // @header-generator platform
#endif // @header-generator platform
class IDataInput;
#if defined(LL_PLAT_A) // @header-generator platform
class IDataOutput;
class MobSpawnerData;
#else // @header-generator platform
#endif // @header-generator platform
class StructureSpawnRegistry;
class StructureStart;
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
#else // @header-generator platform
#endif // @header-generator platform
namespace br::worldgen { class StructureInstance; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace br::worldgen { struct SpawnerData; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class LevelChunkVolumeData {
public:
    // LevelChunkVolumeData inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using StructureInstanceList = std::vector<std::shared_ptr<const br::worldgen::StructureInstance>>;
#else // @header-generator platform
    using StructureInstanceList = ::std::vector<::std::shared_ptr<::br::worldgen::StructureInstance const>>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<const br::worldgen::StructureInstance>>> mStructures;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<const br::worldgen::StructureInstance>>> mStructureReferences;
    ::ll::TypedStorage<8, 768, ::br::LevelChunkDataRegistry>                                       mDataRegistry;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                                          mMin;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                                          mMax;
    ::ll::TypedStorage<8, 8, ::ChunkPos>                                                           mChunkPos;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::br::worldgen::StructureInstance const>>> mStructures;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::br::worldgen::StructureInstance const>>>
                                                              mStructureReferences;
    ::ll::TypedStorage<8, 768, ::br::LevelChunkDataRegistry>  mDataRegistry;
    ::ll::TypedStorage<4, 12, ::BlockPos>                     mMin;
    ::ll::TypedStorage<4, 12, ::BlockPos>                     mMax;
    ::ll::TypedStorage<8, 8, ::ChunkPos>                      mChunkPos;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 8, ::StructureSpawnRegistry const&> mStructureSpawnRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelChunkVolumeData& operator=(LevelChunkVolumeData const&);
    LevelChunkVolumeData(LevelChunkVolumeData const&);
    LevelChunkVolumeData();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addStructure(std::shared_ptr<const br::worldgen::StructureInstance>);
#else // @header-generator platform
    MCAPI void addStructure(::std::shared_ptr<::br::worldgen::StructureInstance const> instance);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addStructure(::StructureStart const&);
#else // @header-generator platform
    MCFOLD void addStructure(::StructureStart const& start);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addStructureReference(std::shared_ptr<const br::worldgen::StructureInstance>);
#else // @header-generator platform
    MCAPI void addStructureReference(::std::shared_ptr<::br::worldgen::StructureInstance const> instance);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addStructureReference(::StructureStart const&);
#else // @header-generator platform
    MCFOLD void addStructureReference(::StructureStart const& start);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<WeightedRandomList<br::worldgen::SpawnerData>>
           dynamicMobsAt(::BlockPos, ::SpawnCategory::Type) const;
#else // @header-generator platform
    MCAPI void deserializeAabbVolumes(::IDataInput& stream);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::shared_ptr<const br::worldgen::StructureInstance>> getOverlappingStructures() const;
#else // @header-generator platform
    MCAPI void deserializeHardcodedSpawners(::IDataInput& stream);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::string> getStructuresAt(::Vec3 const) const;
#else // @header-generator platform
    MCAPI ::std::vector<::std::shared_ptr<::br::worldgen::StructureInstance const>> getOverlappingStructures() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<WeightedRandomList<br::worldgen::SpawnerData>> mobsAt(::BlockPos, ::SpawnCategory::Type) const;

    MCNAPI bool serializeAabbVolumes(::IDataOutput&) const;

    MCNAPI std::vector<BlockPos> structureSpawnPos() const;

    MCNAPI ~LevelChunkVolumeData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI ::std::vector<::BlockPos> structureSpawnPos() const;
#endif // @header-generator platform
    // NOLINTEND
};
