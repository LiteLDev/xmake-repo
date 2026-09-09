#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Services::gatherings::model {

enum class PartyEligibilityStatus : int {
    Unknown       = 0,
    PartyTooLarge = 1,
    Ok            = 2,
};

}
