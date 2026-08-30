#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/spawn_category/Type.h"
#include "mc/world/level/chunk/ChunkBoundingBox.h"
#include "mc/world/level/chunk/ChunkEntity.h"
#include "mc/world/level/chunk/DynamicSpawnArea.h"
#include "mc/world/level/chunk/FullStructureBoundingBox.h"
#include "mc/world/level/chunk/StaticSpawnArea.h"
#include "mc/world/level/chunk/StructureKey.h"
#include "mc/world/level/chunk/StructureType.h"
#include "mc/world/level/levelgen/v2/StructureSpawnOverride.h"

namespace br {

class LevelChunkDataRegistry {
public:
    // LevelChunkDataRegistry inner types define
    using Entity = ::br::ChunkEntity;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 88, ::entt::basic_storage<br::ChunkEntity, br::ChunkEntity, std::allocator<br::ChunkEntity>>> mEntities;
    ::ll::TypedStorage<8, 680, std::tuple<entt::basic_storage<br::StructureType, br::ChunkEntity, std::allocator<br::StructureType>>, entt::basic_storage<br::ChunkBoundingBox, br::ChunkEntity, std::allocator<br::ChunkBoundingBox>>, entt::basic_storage<br::StructureKey, br::ChunkEntity, std::allocator<br::StructureKey>>, entt::basic_storage<br::FullStructureBoundingBox, br::ChunkEntity, std::allocator<br::FullStructureBoundingBox>>, entt::basic_storage<br::DynamicSpawnArea, br::ChunkEntity, std::allocator<br::DynamicSpawnArea>>, entt::basic_storage<br::StaticSpawnArea, br::ChunkEntity, std::allocator<br::StaticSpawnArea>>, entt::basic_storage<std::unordered_map<SpawnCategory::Type, br::worldgen::StructureSpawnOverride>, br::ChunkEntity, std::allocator<std::unordered_map<SpawnCategory::Type, br::worldgen::StructureSpawnOverride>>>>> mData;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~LevelChunkDataRegistry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace br
