#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/NetworkIdentifier.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlobCache::Server { class ActiveTransfersManager; }
namespace ClientBlobCache::Server { class Blob; }
// clang-format on

namespace ClientBlobCache::Server {

class ActiveTransfer {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::ClientBlobCache::Server::ActiveTransfersManager*> mCache;
    ::ll::TypedStorage<8, 176, ::NetworkIdentifier> mOwner;
    ::ll::TypedStorage<8, 40, std::unordered_map<ulong, std::shared_ptr<ClientBlobCache::Server::Blob>>> mIdsWaitingForACK;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ulong getNumberOfIdsWaitingForAck() const;
    // NOLINTEND
};

} // namespace ClientBlobCache::Server
