#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
struct PartyMemberGatheringEligibilityResult {};
#endif // @header-generator platform
