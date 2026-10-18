#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

#if defined(LL_PLAT_A) // @header-generator platform
enum EConnectionFlags : uint {
#else // @header-generator platform
enum class EConnectionFlags : int {
#endif // @header-generator platform
    // bitfield representation
#if defined(LL_PLAT_A) // @header-generator platform
    eConnectionFlagsNone                        = 0,
    eConnectionFlagsRelayOnly                   = 1u << 0,
    eConnectionFlagsNoTCPCandidates             = 1u << 1,
    eConnectionFlagsNoLocalCandidates           = 1u << 2,
    eConnectionFlagsNoServerReflexiveCandidates = 1u << 3,
    eConnectionFlagsNoPeerReflexiveCandidates   = 1u << 4,
    eConnectionFlagsNoRelayCandidates           = 1u << 5,
#else // @header-generator platform
    EConnectionFlagsNone                        = 0,
    EConnectionFlagsRelayOnly                   = 1 << 0,
    EConnectionFlagsNoTCPCandidates             = 1 << 1,
    EConnectionFlagsNoLocalCandidates           = 1 << 2,
    EConnectionFlagsNoServerReflexiveCandidates = 1 << 3,
    EConnectionFlagsNoPeerReflexiveCandidates   = 1 << 4,
    EConnectionFlagsNoRelayCandidates           = 1 << 5,
#endif // @header-generator platform
};

}
