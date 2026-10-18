#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/spawn_category/Type.h"
#include "mc/world/level/chunk/ChunkBoundingBox.h"
#include "mc/world/level/chunk/ChunkEntity.h"
#include "mc/world/level/chunk/DynamicSpawnArea.h"
#include "mc/world/level/chunk/FullStructureBoundingBox.h"
#include "mc/world/level/chunk/StaticSpawnArea.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/chunk/StorageTypeHelper.h"
#endif // @header-generator platform
#include "mc/world/level/chunk/StructureKey.h"
#include "mc/world/level/chunk/StructureType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/levelgen/v2/StructureSpawnOverride.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace br::worldgen { struct StructureSpawnOverride; }
// clang-format on
#endif // @header-generator platform

namespace br {

class LevelChunkDataRegistry {
public:
    // LevelChunkDataRegistry inner types define
    using Entity = ::br::ChunkEntity;

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    using StorageType = ::br::detail::StorageTypeHelper<
        ::br::StructureType,
        ::br::ChunkBoundingBox,
        ::br::StructureKey,
        ::br::FullStructureBoundingBox,
        ::br::DynamicSpawnArea,
        ::br::StaticSpawnArea,
        ::std::unordered_map<::SpawnCategory::Type, ::br::worldgen::StructureSpawnOverride>>;

#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 88, ::entt::basic_storage<br::ChunkEntity, br::ChunkEntity, std::allocator<br::ChunkEntity>>> mEntities;
    ::ll::TypedStorage<8, 680, std::tuple<entt::basic_storage<br::StructureType, br::ChunkEntity, std::allocator<br::StructureType>>, entt::basic_storage<br::ChunkBoundingBox, br::ChunkEntity, std::allocator<br::ChunkBoundingBox>>, entt::basic_storage<br::StructureKey, br::ChunkEntity, std::allocator<br::StructureKey>>, entt::basic_storage<br::FullStructureBoundingBox, br::ChunkEntity, std::allocator<br::FullStructureBoundingBox>>, entt::basic_storage<br::DynamicSpawnArea, br::ChunkEntity, std::allocator<br::DynamicSpawnArea>>, entt::basic_storage<br::StaticSpawnArea, br::ChunkEntity, std::allocator<br::StaticSpawnArea>>, entt::basic_storage<std::unordered_map<SpawnCategory::Type, br::worldgen::StructureSpawnOverride>, br::ChunkEntity, std::allocator<std::unordered_map<SpawnCategory::Type, br::worldgen::StructureSpawnOverride>>>>> mData;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 88, ::entt::basic_storage<::br::ChunkEntity, ::br::ChunkEntity>> mEntities;
    ::ll::TypedStorage<
        8,
        680,
        ::std::tuple<
            ::entt::basic_storage<::br::StructureType, ::br::ChunkEntity>,
            ::entt::basic_storage<::br::ChunkBoundingBox, ::br::ChunkEntity>,
            ::entt::basic_storage<::br::StructureKey, ::br::ChunkEntity>,
            ::entt::basic_storage<::br::FullStructureBoundingBox, ::br::ChunkEntity>,
            ::entt::basic_storage<::br::DynamicSpawnArea, ::br::ChunkEntity>,
            ::entt::basic_storage<::br::StaticSpawnArea, ::br::ChunkEntity>,
            ::entt::basic_storage<
                ::std::unordered_map<::SpawnCategory::Type, ::br::worldgen::StructureSpawnOverride>,
                ::br::ChunkEntity>>>
        mData;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    LevelChunkDataRegistry& operator=(LevelChunkDataRegistry const&);
    LevelChunkDataRegistry(LevelChunkDataRegistry const&);
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~LevelChunkDataRegistry();
#else // @header-generator platform
    MCAPI LevelChunkDataRegistry();

    MCAPI ::br::ChunkEntity create();

    MCAPI ::br::LevelChunkDataRegistry& operator=(::br::LevelChunkDataRegistry&& other);
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace br
