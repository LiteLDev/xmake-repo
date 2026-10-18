#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/application/DeviceSunsetTier.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class FlightingService;
class OptionRegistry;
// clang-format on

class SunsettingManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                mFlightingService;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mTreatmentsMonitorSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    SunsettingManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SunsettingManager();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SunsettingManager(::gsl::not_null<Bedrock::NonOwnerPointer<FlightingService>> const&);

    MCNAPI std::string getSunsettingInfoUrl() const;

    MCNAPI std::string getSunsettingText() const;

    MCNAPI bool isDeviceBeingSunset() const;

    MCNAPI bool isDeviceSunset() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::shared_ptr<OptionRegistry> _getPrimaryUserOptions();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<FlightingService>> const&);
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
#else // @header-generator platform
class SunsettingManager {};
#endif // @header-generator platform
