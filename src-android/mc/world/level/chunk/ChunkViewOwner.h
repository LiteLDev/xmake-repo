#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/network/NetworkIdentifier.h"

class ChunkViewOwner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::NetworkIdentifier> mNetworkIdentifier;
    ::ll::TypedStorage<1, 1, ::SubClientId>         mSubClientId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ChunkViewOwner(::ChunkViewOwner const&);

    MCNAPI ChunkViewOwner(::NetworkIdentifier const&, ::SubClientId);

    MCNAPI ulong getHash() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ChunkViewOwner const&);

    MCNAPI void* $ctor(::NetworkIdentifier const&, ::SubClientId);
    // NOLINTEND
};
