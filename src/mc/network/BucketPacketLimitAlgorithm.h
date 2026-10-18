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
#if defined(LL_PLAT_A) // @header-generator platform
    // BucketPacketLimitAlgorithm inner types define
    using ChronoSteadyTimePoint =
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>;

    using ChronoSteadySeconds = std::chrono::duration<float, std::ratio<1, 1>>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::UntypedStorage<8, 48> mGetTime;
    ::ll::TypedStorage<4, 4, float> mPacketCount;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastUpdate;
    ::ll::TypedStorage<4, 4, float> mDrainRatePerSec;
    ::ll::UntypedStorage<4, 12> mMaxBucketSize;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnke601de;
    ::ll::UntypedStorage<4, 4>  mUnke51234;
    ::ll::UntypedStorage<8, 8>  mUnkf22008;
    ::ll::UntypedStorage<4, 4>  mUnkc65a29;
    ::ll::UntypedStorage<4, 4>  mUnk66956d;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    BucketPacketLimitAlgorithm& operator=(BucketPacketLimitAlgorithm const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    BucketPacketLimitAlgorithm(BucketPacketLimitAlgorithm const&);
    BucketPacketLimitAlgorithm();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BucketPacketLimitAlgorithm();
#else // @header-generator platform
    virtual ::std::unique_ptr<::IPacketLimitAlgorithm> copy() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<IPacketLimitAlgorithm> copy() const;
#else // @header-generator platform
    virtual uint checkPacket(::MinecraftPacketIds packet) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual uint checkPacket(::MinecraftPacketIds);
#else // @header-generator platform
    virtual ~BucketPacketLimitAlgorithm() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BucketPacketLimitAlgorithm(
        float                                                      drainRatePerSec,
        uint                                                       maxBucketSize,
        ::std::function<::std::chrono::steady_clock::time_point()> getTime
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Bedrock::Result<BucketPacketLimitAlgorithm, std::error_code> createFromJsonParams(::Json::Value&);
#else // @header-generator platform
    MCNAPI static ::Bedrock::Result<::BucketPacketLimitAlgorithm> createFromJsonParams(::Json::Value& paramsNode);
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // static variables
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static float const& DRAIN_RATE_PER_SEC_MAX();

    MCNAPI static float const& DRAIN_RATE_PER_SEC_MIN();

    MCNAPI static uint const& MAX_BUCKET_SIZE_MAX();

    MCNAPI static uint const& MAX_BUCKET_SIZE_MIN();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(
        float                                                      drainRatePerSec,
        uint                                                       maxBucketSize,
        ::std::function<::std::chrono::steady_clock::time_point()> getTime
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<IPacketLimitAlgorithm> $copy() const;
#else // @header-generator platform
    MCNAPI ::std::unique_ptr<::IPacketLimitAlgorithm> $copy() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint $checkPacket(::MinecraftPacketIds);
#else // @header-generator platform
    MCNAPI uint $checkPacket(::MinecraftPacketIds packet);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
