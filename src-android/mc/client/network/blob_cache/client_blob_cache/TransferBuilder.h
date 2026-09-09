#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/blob_cache/client_blob_cache/ActiveTransfer.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
namespace ClientBlobCache::Server { class ActiveTransfersManager; }
// clang-format on

namespace ClientBlobCache::Server {

class TransferBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 224, ::ClientBlobCache::Server::ActiveTransfer> mTransfer;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void add(ulong, std::string&, bool);

    MCNAPI ~TransferBuilder();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ClientBlobCache::Server
