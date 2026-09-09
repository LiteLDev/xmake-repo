#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Services::gatherings::model {

enum class PartyMemberEligibilityReason : int {
    Unknown               = 0,
    ClientVersionMismatch = 1,
    WorldNotUnlocked      = 2,
    Forbidden             = 3,
};

}
