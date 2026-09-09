#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/MovePriorityQueue.h"

// auto generated forward declare list
// clang-format off
class ClientNetworkHandler;
class LevelChunk;
class LevelChunkPacketHandler;
class LocalPlayer;
class NetworkIdentifier;
// clang-format on

class NetworkChunkInserter {
public:
    // NetworkChunkInserter inner types declare
    // clang-format off
    struct PendingChunk;
    // clang-format on

    // NetworkChunkInserter inner types define
    struct PendingChunk {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ulong>                       sequenceID;
        ::ll::TypedStorage<8, 8, std::unique_ptr<LevelChunk>> chunk;
        ::ll::TypedStorage<8, 8, ulong>                       subChunkRequestLimit;
        // NOLINTEND

    public:
        // prevent constructor by default
        PendingChunk& operator=(PendingChunk const&);
        PendingChunk(PendingChunk const&);
        PendingChunk();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~PendingChunk();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ClientNetworkHandler&> mHandler;
    ::ll::TypedStorage<8, 8, ulong>                   mChunkSequenceIDCounter;
    ::ll::TypedStorage<8, 8, ulong>                   mNextChunkSequenceID;
    ::ll::UntypedStorage<8, 24>                       mChunksPendingInsertion;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkChunkInserter& operator=(NetworkChunkInserter const&);
    NetworkChunkInserter(NetworkChunkInserter const&);
    NetworkChunkInserter();
};
