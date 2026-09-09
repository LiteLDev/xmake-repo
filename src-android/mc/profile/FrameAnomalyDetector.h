#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/profile/FrameAnomalyDetectionConfiguration.h"

// auto generated forward declare list
// clang-format off
struct FrameSlowdownEvent;
struct FrameSpikeEvent;
struct FrameStutterEvent;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace flighting { class IFlightReader; }
// clang-format on

class FrameAnomalyDetector : public ::Bedrock::EnableNonOwnerReferences {
public:
    // FrameAnomalyDetector inner types define
    using IsInGameFunc = std::function<bool()>;

public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // prevent constructor by default
    FrameAnomalyDetector();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FrameAnomalyDetector();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
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
    // NOLINTEND
};
