#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/profile/FrameSlowdownEvent.h"
#include "mc/profile/FrameSpikeEvent.h"
#include "mc/profile/FrameStutterEvent.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class FrameAnomalyDetector;
struct FrameAnomalyDetectorSummary;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct FrameSlowdownEvent;
struct FrameSpikeEvent;
struct FrameStutterEvent;
#endif // @header-generator platform
// clang-format on

class FrameAnomalyDetectorEventing : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                                mFrameAnomalyDetector;
    ::ll::TypedStorage<8, 24, std::vector<FrameSpikeEvent>>    mSpikeEvents;
    ::ll::TypedStorage<8, 24, std::vector<FrameSlowdownEvent>> mSlowdownEvents;
    ::ll::TypedStorage<8, 24, std::vector<FrameStutterEvent>>  mStutterEvents;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mSlowdownSub;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mSpikeSub;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mStutterSub;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::FrameAnomalyDetector>> mFrameAnomalyDetector;
    ::ll::TypedStorage<8, 24, ::std::vector<::FrameSpikeEvent>>                      mSpikeEvents;
    ::ll::TypedStorage<8, 24, ::std::vector<::FrameSlowdownEvent>>                   mSlowdownEvents;
    ::ll::TypedStorage<8, 24, ::std::vector<::FrameStutterEvent>>                    mStutterEvents;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                       mSlowdownSub;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                       mSpikeSub;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                       mStutterSub;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    FrameAnomalyDetectorEventing();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FrameAnomalyDetectorEventing();
    // NOLINTEND

#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    FrameAnomalyDetectorEventing();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit FrameAnomalyDetectorEventing(
        ::gsl::not_null<Bedrock::NonOwnerPointer<FrameAnomalyDetector>> const&
    );

    MCNAPI std::optional<FrameAnomalyDetectorSummary> tryGetSummary();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI explicit FrameAnomalyDetectorEventing(
        ::Bedrock::NotNullNonOwnerPtr<::FrameAnomalyDetector> const& frameAnomalyDetector
    );

    MCNAPI ::std::optional<::FrameAnomalyDetectorSummary> tryGetSummary();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::FrameAnomalyDetector> const& frameAnomalyDetector);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
