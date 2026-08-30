#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Parties::PartyUtils {

enum class DestinationChange : int {
    NoChange             = 0,
    DestinationReconnect = 1,
    InDestinationTravel  = 2,
};

}
