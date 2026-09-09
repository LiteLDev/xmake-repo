#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorOwnerComponent;
class BlockSource;
class ChunkPos;
class EntityRegistry;
class LevelChunk;
class LoadedChunksComponent;
struct Tick;
struct TickingSystemWithInfo;
// clang-format on

class LevelChunkTickingSystem : public ::ITickingSystem {
public:
    // LevelChunkTickingSystem inner types define
    using LevelChunks = std::vector<std::shared_ptr<LevelChunk>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<LevelChunk>>> mScratchLevelChunksToTick;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<LevelChunk>>> mScratchLevelChunksBlockEntitiesToTick;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelChunkTickingSystem();

    virtual void tick(::EntityRegistry&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createPlayerPassengerSystem();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(::EntityRegistry&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
