#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/IPacketLimitAlgorithm.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class BucketPacketLimitAlgorithm : public ::IPacketLimitAlgorithm {
public:
    // BucketPacketLimitAlgorithm inner types define
    using ChronoSteadyTimePoint =
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>;

    using ChronoSteadySeconds = std::chrono::duration<float, std::ratio<1, 1>>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 48> mGetTime;
    ::ll::TypedStorage<4, 4, float> mPacketCount;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastUpdate;
    ::ll::TypedStorage<4, 4, float> mDrainRatePerSec;
    ::ll::UntypedStorage<4, 12> mMaxBucketSize;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    BucketPacketLimitAlgorithm& operator=(BucketPacketLimitAlgorithm const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BucketPacketLimitAlgorithm();

    virtual std::unique_ptr<IPacketLimitAlgorithm> copy() const;

    virtual uint checkPacket(::MinecraftPacketIds);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<BucketPacketLimitAlgorithm, std::error_code> createFromJsonParams(::Json::Value&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& DRAIN_RATE_PER_SEC_MAX();

    MCNAPI static float const& DRAIN_RATE_PER_SEC_MIN();

    MCNAPI static uint const& MAX_BUCKET_SIZE_MAX();

    MCNAPI static uint const& MAX_BUCKET_SIZE_MIN();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<IPacketLimitAlgorithm> $copy() const;

    MCNAPI uint $checkPacket(::MinecraftPacketIds);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
