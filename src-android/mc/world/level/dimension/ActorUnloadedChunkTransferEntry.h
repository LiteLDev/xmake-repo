#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/ChunkKey.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

struct ActorUnloadedChunkTransferEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ChunkKey>                  mFromChunkKey;
    ::ll::TypedStorage<8, 24, std::string>                 mActorStorageKey;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CompoundTag>> mActorTag;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorUnloadedChunkTransferEntry& operator=(ActorUnloadedChunkTransferEntry const&);
    ActorUnloadedChunkTransferEntry(ActorUnloadedChunkTransferEntry const&);
    ActorUnloadedChunkTransferEntry();
};
