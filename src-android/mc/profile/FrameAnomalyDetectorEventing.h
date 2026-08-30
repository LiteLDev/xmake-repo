#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/profile/FrameSlowdownEvent.h"
#include "mc/profile/FrameSpikeEvent.h"
#include "mc/profile/FrameStutterEvent.h"

// auto generated forward declare list
// clang-format off
class FrameAnomalyDetector;
struct FrameAnomalyDetectorSummary;
// clang-format on

class FrameAnomalyDetectorEventing : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                mFrameAnomalyDetector;
    ::ll::TypedStorage<8, 24, std::vector<FrameSpikeEvent>>    mSpikeEvents;
    ::ll::TypedStorage<8, 24, std::vector<FrameSlowdownEvent>> mSlowdownEvents;
    ::ll::TypedStorage<8, 24, std::vector<FrameStutterEvent>>  mStutterEvents;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mSlowdownSub;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mSpikeSub;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mStutterSub;
    // NOLINTEND

public:
    // prevent constructor by default
    FrameAnomalyDetectorEventing();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FrameAnomalyDetectorEventing();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit FrameAnomalyDetectorEventing(
        ::gsl::not_null<Bedrock::NonOwnerPointer<FrameAnomalyDetector>> const&
    );

    MCNAPI std::optional<FrameAnomalyDetectorSummary> tryGetSummary();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<FrameAnomalyDetector>> const&);
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
