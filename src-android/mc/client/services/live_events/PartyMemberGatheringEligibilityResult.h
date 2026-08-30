#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/store/services/PartyMemberEligibilityReason.h"

struct PartyMemberGatheringEligibilityResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                                 mEligible;
    ::ll::TypedStorage<4, 4, ::Bedrock::Services::gatherings::model::PartyMemberEligibilityReason> mReason;
    // NOLINTEND
};
