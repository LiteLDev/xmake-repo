#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/catalog/IClientRequirementVerifier.h"
#include "mc/client/services/catalog/RequirementCategory.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class FlightingService;
// clang-format on

class ClientRequirementVerifier : public ::IClientRequirementVerifier,
                                  public ::std::enable_shared_from_this<ClientRequirementVerifier> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<FlightingService>> mFlightingServiceExistenceTracker;
    ::ll::TypedStorage<1, 1, bool>                             mTreatmentsReady;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>        mTreatments;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mTreatmentMonitorSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientRequirementVerifier();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientRequirementVerifier();

    virtual bool doesMeetRequirements(::RequirementCategory, std::string const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ClientRequirementVerifier(::gsl::not_null<Bedrock::NonOwnerPointer<FlightingService>> const&);

    MCNAPI void init();
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
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $doesMeetRequirements(::RequirementCategory, std::string const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class ClientRequirementVerifier {};
#endif // @header-generator platform
