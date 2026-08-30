#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

enum EConnectionFlags : uint {
    // bitfield representation
    eConnectionFlagsNone                        = 0,
    eConnectionFlagsRelayOnly                   = 1u << 0,
    eConnectionFlagsNoTCPCandidates             = 1u << 1,
    eConnectionFlagsNoLocalCandidates           = 1u << 2,
    eConnectionFlagsNoServerReflexiveCandidates = 1u << 3,
    eConnectionFlagsNoPeerReflexiveCandidates   = 1u << 4,
    eConnectionFlagsNoRelayCandidates           = 1u << 5,
};

}
