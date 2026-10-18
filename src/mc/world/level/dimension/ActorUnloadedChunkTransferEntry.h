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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::ChunkKey>                  mFromChunkKey;
    ::ll::TypedStorage<8, 24, std::string>                 mActorStorageKey;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CompoundTag>> mActorTag;
#else // @header-generator platform
    ::ll::TypedStorage<8, 12, ::ChunkKey>                      mFromChunkKey;
    ::ll::TypedStorage<8, 32, ::std::string>                   mActorStorageKey;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompoundTag>> mActorTag;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    ActorUnloadedChunkTransferEntry& operator=(ActorUnloadedChunkTransferEntry const&);
    ActorUnloadedChunkTransferEntry(ActorUnloadedChunkTransferEntry const&);
#else // @header-generator platform
#endif // @header-generator platform
    ActorUnloadedChunkTransferEntry();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorUnloadedChunkTransferEntry(
        ::ChunkKey&                      fromChunkKey,
        ::std::string&                   actorStorageKey,
        ::std::unique_ptr<::CompoundTag> actorTag
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::ChunkKey& fromChunkKey, ::std::string& actorStorageKey, ::std::unique_ptr<::CompoundTag> actorTag);
    // NOLINTEND
#endif // @header-generator platform
};
