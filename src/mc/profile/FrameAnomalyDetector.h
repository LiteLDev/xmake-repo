#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/profile/FrameAnomalyDetectionConfiguration.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
struct FrameSlowdownEvent;
struct FrameSpikeEvent;
struct FrameStutterEvent;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace flighting { class IFlightReader; }
#else // @header-generator platform
struct FrameAnomalyDetectionConfiguration;
#endif // @header-generator platform
// clang-format on

class FrameAnomalyDetector : public ::Bedrock::EnableNonOwnerReferences {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // FrameAnomalyDetector inner types define
    using IsInGameFunc = std::function<bool()>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mFrameTimings;
    ::ll::TypedStorage<2, 2, ushort> mFrameTimingIndex;
    ::ll::TypedStorage<8, 24, std::vector<std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mSortedTimings;
    ::ll::TypedStorage<4, 20, ::FrameAnomalyDetectionConfiguration> mConfig;
    ::ll::TypedStorage<1, 1, bool> mHasStartedRecordingTimings;
    ::ll::TypedStorage<1, 1, bool> mHasFilledCaptureWindow;
    ::ll::TypedStorage<1, 1, bool> mIsTrackingPotentialStutter;
    ::ll::TypedStorage<1, 1, bool> mIsStuttering;
    ::ll::TypedStorage<4, 4, uint> mSpikedFrames;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mMaxSpike;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mMaxStutter;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mMinStutter;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mStutterStart;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mSlowdownStart;
    ::ll::UntypedStorage<8, 88> mFrameAnomalyBeginEventPublisher;
    ::ll::UntypedStorage<8, 88> mFrameAnomalyCanceledEventPublisher;
    ::ll::UntypedStorage<8, 88> mSpikeEventPublisher;
    ::ll::UntypedStorage<8, 88> mSlowdownEventPublisher;
    ::ll::UntypedStorage<8, 88> mStutterEventPublisher;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mFlightingToggleSub;
    ::ll::UntypedStorage<1, 16> mIsDetectionEnabled;
    ::ll::UntypedStorage<8, 48> mIsInGameFunc;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24>  mUnka334a9;
    ::ll::UntypedStorage<2, 2>   mUnk3f16c7;
    ::ll::UntypedStorage<8, 24>  mUnke99fe9;
    ::ll::UntypedStorage<4, 20>  mUnkd107de;
    ::ll::UntypedStorage<1, 1>   mUnkdf497d;
    ::ll::UntypedStorage<1, 1>   mUnkc4366c;
    ::ll::UntypedStorage<1, 1>   mUnk94f7c7;
    ::ll::UntypedStorage<1, 1>   mUnkfbacfe;
    ::ll::UntypedStorage<4, 4>   mUnkd04602;
    ::ll::UntypedStorage<8, 8>   mUnk87a716;
    ::ll::UntypedStorage<8, 8>   mUnkef053d;
    ::ll::UntypedStorage<8, 8>   mUnk429626;
    ::ll::UntypedStorage<8, 8>   mUnk306139;
    ::ll::UntypedStorage<8, 8>   mUnk5d1271;
    ::ll::UntypedStorage<8, 128> mUnk7fdebe;
    ::ll::UntypedStorage<8, 128> mUnkf3797a;
    ::ll::UntypedStorage<8, 128> mUnkbd8d4a;
    ::ll::UntypedStorage<8, 128> mUnka7a7ae;
    ::ll::UntypedStorage<8, 128> mUnk36e430;
    ::ll::UntypedStorage<8, 16>  mUnkca5fba;
    ::ll::UntypedStorage<1, 1>   mUnk5077f6;
    ::ll::UntypedStorage<8, 64>  mUnk88400d;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    FrameAnomalyDetector& operator=(FrameAnomalyDetector const&);
    FrameAnomalyDetector(FrameAnomalyDetector const&);
#endif // @header-generator platform
    FrameAnomalyDetector();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FrameAnomalyDetector();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit FrameAnomalyDetector(std::function<bool()>&&);

    MCNAPI FrameAnomalyDetector(::FrameAnomalyDetectionConfiguration, std::function<bool()>&&);

    MCNAPI void checkForSpikesAndSlowdowns(
        std::chrono::duration<long long, std::ratio<1, 1000000000>>,
        std::chrono::duration<long long, std::ratio<1, 1000000000>>,
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
    );

    MCNAPI void checkForStutters(
        std::chrono::duration<long long, std::ratio<1, 1000000000>>,
        std::chrono::duration<long long, std::ratio<1, 1000000000>>,
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>
    );

    MCNAPI void initializeFlighting(::flighting::IFlightReader const&);

    MCNAPI void update(std::chrono::duration<long long, std::ratio<1, 1000000000>> const);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI FrameAnomalyDetector(::FrameAnomalyDetectionConfiguration config, ::std::function<bool()>&& isInGameFunc);

    MCNAPI void update(::std::chrono::nanoseconds frameDelta);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::function<bool()>&&);

    MCNAPI void* $ctor(::FrameAnomalyDetectionConfiguration, std::function<bool()>&&);
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::FrameAnomalyDetectionConfiguration config, ::std::function<bool()>&& isInGameFunc);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
