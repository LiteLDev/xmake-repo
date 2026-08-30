#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ClientCacheBlobStatusPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ulong>> mMissingIds;
    ::ll::TypedStorage<8, 24, std::vector<ulong>> mFoundIds;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ClientCacheBlobStatusPacketPayload(::ClientCacheBlobStatusPacketPayload const&);

    MCNAPI bool isEmpty() const;

    MCNAPI bool isFull() const;

    MCNAPI ~ClientCacheBlobStatusPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ClientCacheBlobStatusPacketPayload const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
