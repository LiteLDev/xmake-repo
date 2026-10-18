#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/client/network/blob_cache/client_blob_cache/ActiveTransfer.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
namespace ClientBlobCache::Server { class ActiveTransfersManager; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace ClientBlobCache::Server {

class TransferBuilder {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 224, ::ClientBlobCache::Server::ActiveTransfer> mTransfer;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 248> mUnkd248eb;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    TransferBuilder& operator=(TransferBuilder const&);
    TransferBuilder(TransferBuilder const&);
    TransferBuilder();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void add(ulong, std::string&, bool);

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI ~TransferBuilder();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ClientBlobCache::Server
