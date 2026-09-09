#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/blob_cache/client_blob_cache/ActiveTransfer.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/network/NetworkIdentifier.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class ServerNetworkSystem;
namespace ClientBlobCache::Server { class Blob; }
namespace ClientBlobCache::Server { class TransferBuilder; }
// clang-format on

namespace ClientBlobCache::Server {

class ActiveTransfersManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ActiveTransfersManager inner types declare
    // clang-format off
    class TransferTracker;
    // clang-format on

    // ActiveTransfersManager inner types define
    class TransferTracker {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ClientBlobCache::Server::ActiveTransfersManager&>    mCache;
        ::ll::TypedStorage<8, 176, ::NetworkIdentifier const>                           mOwner;
        ::ll::TypedStorage<8, 24, std::vector<ClientBlobCache::Server::ActiveTransfer>> mTransfers;
        ::ll::TypedStorage<4, 4, uint>                                                  mMaxConcurrentTransfers;
        // NOLINTEND

    public:
        // prevent constructor by default
        TransferTracker();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ulong getMaximumConcurrentTransfers() const;

        MCNAPI ulong getNumberOfActiveTransfers() const;

        MCNAPI std::vector<ClientBlobCache::Server::ActiveTransfer> const& getTransfers() const;

        MCNAPI void onAckReceived(ulong);
        // NOLINTEND
    };

    using CacheMap = std::map<ulong, std::weak_ptr<ClientBlobCache::Server::Blob>>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<NetworkIdentifier, std::unique_ptr<ClientBlobCache::Server::ActiveTransfersManager::TransferTracker>>> mTransferTrackerMap;
    ::ll::TypedStorage<8, 24, std::map<ulong, std::weak_ptr<ClientBlobCache::Server::Blob>>> mSentBlobs;
    ::ll::TypedStorage<8, 8, ulong> mCacheSizeBytes;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActiveTransfersManager();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::shared_ptr<ClientBlobCache::Server::Blob> dropBlobFor(::NetworkIdentifier const&, ulong);

    MCNAPI void enableCacheFor(::NetworkIdentifier const&);

    MCNAPI bool isCacheEnabledFor(::NetworkIdentifier const&) const;

    MCNAPI void onPeerDisconnected(::NetworkIdentifier const&);

    MCNAPI std::shared_ptr<ClientBlobCache::Server::Blob> rememberBlob(ulong, std::string&, bool);

    MCNAPI ::ClientBlobCache::Server::TransferBuilder startTransfer(::NetworkIdentifier const&) const;

    MCNAPI ::ClientBlobCache::Server::TransferBuilder tryStartTransfer(::NetworkIdentifier const&) const;

    MCNAPI void updateNetworkConditions(::ServerNetworkSystem&);

    MCNAPI void visitTransfers(
        ::brstd::function_ref<
            void(const NetworkIdentifier&, const ClientBlobCache::Server::ActiveTransfersManager::TransferTracker&)>
    ) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ClientBlobCache::Server
