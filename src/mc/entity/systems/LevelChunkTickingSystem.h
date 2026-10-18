#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
class ActorOwnerComponent;
class BlockSource;
class ChunkPos;
#else // @header-generator platform
#endif // @header-generator platform
class EntityRegistry;
class LevelChunk;
#if defined(LL_PLAT_A) // @header-generator platform
class LoadedChunksComponent;
struct Tick;
#else // @header-generator platform
#endif // @header-generator platform
struct TickingSystemWithInfo;
// clang-format on

class LevelChunkTickingSystem : public ::ITickingSystem {
public:
    // LevelChunkTickingSystem inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using LevelChunks = std::vector<std::shared_ptr<LevelChunk>>;
#else // @header-generator platform
    using LevelChunks = ::std::vector<::std::shared_ptr<::LevelChunk>>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<LevelChunk>>> mScratchLevelChunksToTick;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<LevelChunk>>> mScratchLevelChunksBlockEntitiesToTick;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::LevelChunk>>> mScratchLevelChunksToTick;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::LevelChunk>>> mScratchLevelChunksBlockEntitiesToTick;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LevelChunkTickingSystem();

    virtual void tick(::EntityRegistry&);
#else // @header-generator platform
    virtual void tick(::EntityRegistry& registry) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createPlayerPassengerSystem();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createPlayerPassengerSystem();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick(::EntityRegistry&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $tick(::EntityRegistry& registry);
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
