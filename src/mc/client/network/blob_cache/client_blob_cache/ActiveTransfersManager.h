#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/client/network/blob_cache/client_blob_cache/ActiveTransfer.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/network/NetworkIdentifier.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/brstd/function_ref.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class ServerNetworkSystem;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace ClientBlobCache::Server { class ActiveTransfer; }
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ::ClientBlobCache::Server::ActiveTransfersManager&>    mCache;
        ::ll::TypedStorage<8, 176, ::NetworkIdentifier const>                           mOwner;
        ::ll::TypedStorage<8, 24, std::vector<ClientBlobCache::Server::ActiveTransfer>> mTransfers;
        ::ll::TypedStorage<4, 4, uint>                                                  mMaxConcurrentTransfers;
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, ::ClientBlobCache::Server::ActiveTransfersManager&>        mCache;
        ::ll::TypedStorage<8, 176, ::NetworkIdentifier const>                               mOwner;
        ::ll::TypedStorage<8, 24, ::std::vector<::ClientBlobCache::Server::ActiveTransfer>> mTransfers;
        ::ll::TypedStorage<4, 4, uint>                                                      mMaxConcurrentTransfers;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        TransferTracker& operator=(TransferTracker const&);
        TransferTracker(TransferTracker const&);
#endif // @header-generator platform
        TransferTracker();

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ulong getMaximumConcurrentTransfers() const;

        MCNAPI ulong getNumberOfActiveTransfers() const;

        MCNAPI std::vector<ClientBlobCache::Server::ActiveTransfer> const& getTransfers() const;

        MCNAPI void onAckReceived(ulong);
#else // @header-generator platform
        MCNAPI void onAckReceived(uint64 acked);
#endif // @header-generator platform
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using CacheMap = std::map<ulong, std::weak_ptr<ClientBlobCache::Server::Blob>>;
#else // @header-generator platform
    using CacheMap = ::std::map<uint64, ::std::weak_ptr<::ClientBlobCache::Server::Blob>>;

    using CacheMapIterator = ::std::_Tree_iterator<::std::_Tree_val<
        ::std::_Tree_simple_types<::std::pair<uint64 const, ::std::weak_ptr<::ClientBlobCache::Server::Blob>>>>>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<NetworkIdentifier, std::unique_ptr<ClientBlobCache::Server::ActiveTransfersManager::TransferTracker>>> mTransferTrackerMap;
    ::ll::TypedStorage<8, 24, std::map<ulong, std::weak_ptr<ClientBlobCache::Server::Blob>>> mSentBlobs;
    ::ll::TypedStorage<8, 8, ulong> mCacheSizeBytes;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::NetworkIdentifier,
            ::std::unique_ptr<::ClientBlobCache::Server::ActiveTransfersManager::TransferTracker>>>
                                                                                                    mTransferTrackerMap;
    ::ll::TypedStorage<8, 16, ::std::map<uint64, ::std::weak_ptr<::ClientBlobCache::Server::Blob>>> mSentBlobs;
    ::ll::TypedStorage<8, 8, uint64>                                                                mCacheSizeBytes;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ActiveTransfersManager();
#else // @header-generator platform
    virtual ~ActiveTransfersManager() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<ClientBlobCache::Server::Blob> dropBlobFor(::NetworkIdentifier const&, ulong);
#else // @header-generator platform
    MCAPI ::std::shared_ptr<::ClientBlobCache::Server::Blob> dropBlobFor(::NetworkIdentifier const& client, uint64 id);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void enableCacheFor(::NetworkIdentifier const&);
#else // @header-generator platform
    MCAPI void enableCacheFor(::NetworkIdentifier const& client);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isCacheEnabledFor(::NetworkIdentifier const&) const;
#else // @header-generator platform
    MCAPI ::std::shared_ptr<::ClientBlobCache::Server::Blob>
    rememberBlob(uint64 id, ::std::string& data, bool isChunkInTickRange);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void onPeerDisconnected(::NetworkIdentifier const&);
#else // @header-generator platform
    MCAPI ::ClientBlobCache::Server::TransferBuilder startTransfer(::NetworkIdentifier const& client) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<ClientBlobCache::Server::Blob> rememberBlob(ulong, std::string&, bool);
#else // @header-generator platform
    MCAPI ::ClientBlobCache::Server::TransferBuilder tryStartTransfer(::NetworkIdentifier const& client) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ClientBlobCache::Server::TransferBuilder startTransfer(::NetworkIdentifier const&) const;

    MCNAPI ::ClientBlobCache::Server::TransferBuilder tryStartTransfer(::NetworkIdentifier const&) const;

    MCNAPI void updateNetworkConditions(::ServerNetworkSystem&);

    MCNAPI void visitTransfers(
        ::brstd::function_ref<
            void(const NetworkIdentifier&, const ClientBlobCache::Server::ActiveTransfersManager::TransferTracker&)>
    ) const;
#else // @header-generator platform
    MCAPI void updateNetworkConditions(::ServerNetworkSystem& handler);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ClientBlobCache::Server
