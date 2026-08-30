#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/live_events/PartyMemberGatheringEligibilityResult.h"
#include "mc/client/store/services/PartyEligibilityStatus.h"

struct PartyGatheringEligibilityResult {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, PartyMemberGatheringEligibilityResult>> mEligibilityResults;
    ::ll::TypedStorage<4, 4, ::Bedrock::Services::gatherings::model::PartyEligibilityStatus> mPartyStatus;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    PartyGatheringEligibilityResult& operator=(PartyGatheringEligibilityResult const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool areAllMembersEligible() const;

    MCNAPI bool areNoMembersEligible() const;

    MCNAPI ~PartyGatheringEligibilityResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
