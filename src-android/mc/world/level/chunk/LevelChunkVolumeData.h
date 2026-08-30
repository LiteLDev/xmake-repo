#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/WeightedRandomList.h"
#include "mc/world/actor/spawn_category/Type.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/chunk/LevelChunkDataRegistry.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class IDataInput;
class IDataOutput;
class MobSpawnerData;
class StructureSpawnRegistry;
class StructureStart;
class Vec3;
namespace br::worldgen { class StructureInstance; }
namespace br::worldgen { struct SpawnerData; }
// clang-format on

class LevelChunkVolumeData {
public:
    // LevelChunkVolumeData inner types define
    using StructureInstanceList = std::vector<std::shared_ptr<const br::worldgen::StructureInstance>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<const br::worldgen::StructureInstance>>> mStructures;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<const br::worldgen::StructureInstance>>> mStructureReferences;
    ::ll::TypedStorage<8, 768, ::br::LevelChunkDataRegistry>                                       mDataRegistry;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                                          mMin;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                                          mMax;
    ::ll::TypedStorage<8, 8, ::ChunkPos>                                                           mChunkPos;
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
    MCNAPI void addStructure(std::shared_ptr<const br::worldgen::StructureInstance>);

    MCNAPI void addStructure(::StructureStart const&);

    MCNAPI void addStructureReference(std::shared_ptr<const br::worldgen::StructureInstance>);

    MCNAPI void addStructureReference(::StructureStart const&);

    MCNAPI std::optional<WeightedRandomList<br::worldgen::SpawnerData>>
           dynamicMobsAt(::BlockPos, ::SpawnCategory::Type) const;

    MCNAPI std::vector<std::shared_ptr<const br::worldgen::StructureInstance>> getOverlappingStructures() const;

    MCNAPI std::vector<std::string> getStructuresAt(::Vec3 const) const;

    MCNAPI std::optional<WeightedRandomList<br::worldgen::SpawnerData>> mobsAt(::BlockPos, ::SpawnCategory::Type) const;

    MCNAPI bool serializeAabbVolumes(::IDataOutput&) const;

    MCNAPI std::vector<BlockPos> structureSpawnPos() const;

    MCNAPI ~LevelChunkVolumeData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
