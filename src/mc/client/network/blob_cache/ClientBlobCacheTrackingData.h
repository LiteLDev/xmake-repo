#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/world/level/chunk/AtomicTimeAccumulator.h"

struct ClientBlobCacheTrackingData : public ::Bedrock::EnableNonOwnerReferences {
#else // @header-generator platform
struct ClientBlobCacheTrackingData {
#endif // @header-generator platform
public:
    // ClientBlobCacheTrackingData inner types declare
    // clang-format off
    struct ActiveTransfersData;
    // clang-format on

    // ClientBlobCacheTrackingData inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct ActiveTransfersData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ulong> mNumberOfActiveTransfers;
        ::ll::TypedStorage<8, 8, ulong> mMaximumAllowedActiveTransfers;
        ::ll::TypedStorage<8, 8, ulong> mPeakActiveTransfers;
        ::ll::TypedStorage<8, 8, ulong> mNumberOfIdsWaitingAck;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::AtomicTimeAccumulator> mCacheGetOps;
    ::ll::TypedStorage<8, 24, ::AtomicTimeAccumulator> mCacheInsertOps;
    ::ll::TypedStorage<8, 24, ::AtomicTimeAccumulator> mCacheSendTime;
    ::ll::TypedStorage<8, 24, ::AtomicTimeAccumulator> mServerBlobPacketHandler;
    ::ll::TypedStorage<8, 24, ::AtomicTimeAccumulator> mCacheTrimTime;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>>       mCacheMisses;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>>       mCacheMissesNoBlob;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>>       mCacheHits;
    ::ll::TypedStorage<8, 8, ulong>                    mCacheMissQueueSize;
    ::ll::TypedStorage<8, 8, ulong>                    mCacheHitsQueueSize;
    ::ll::TypedStorage<8, 8, ulong>                    mBlobKeysNeedingResponseSetSize;
    ::ll::TypedStorage<1, 1, bool>                     mIsTrimmingCache;
    ::ll::TypedStorage<8, 8, ulong>                    mTrimmedKeysChecked;
    ::ll::TypedStorage<8, 8, ulong>                    mTrimmedKeysRemoved;
    ::ll::TypedStorage<8, 24, std::map<ulong, ClientBlobCacheTrackingData::ActiveTransfersData>> mActiveTransfersData;
    ::ll::TypedStorage<1, 1, bool>                                                               mCollectData;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientBlobCacheTrackingData();
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
#else // @header-generator platform
    struct ActiveTransfersData {};
#endif // @header-generator platform
};
