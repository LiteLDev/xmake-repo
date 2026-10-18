#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/network/NetworkIdentifier.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlobCache::Server { class ActiveTransfersManager; }
namespace ClientBlobCache::Server { class Blob; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace ClientBlobCache::Server {

class ActiveTransfer {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 8, ::ClientBlobCache::Server::ActiveTransfersManager*> mCache;
    ::ll::TypedStorage<8, 176, ::NetworkIdentifier> mOwner;
    ::ll::TypedStorage<8, 40, std::unordered_map<ulong, std::shared_ptr<ClientBlobCache::Server::Blob>>> mIdsWaitingForACK;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>   mUnka898bd;
    ::ll::UntypedStorage<8, 176> mUnk320474;
    ::ll::UntypedStorage<8, 64>  mUnk4bec70;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI ulong getNumberOfIdsWaitingForAck() const;
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    ActiveTransfer& operator=(ActiveTransfer const&);
    ActiveTransfer(ActiveTransfer const&);
    ActiveTransfer();
#endif // @header-generator platform
};

} // namespace ClientBlobCache::Server
