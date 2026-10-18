#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class AddIceCandidateResult : int {
    KAddIceCandidateSuccess                 = 0,
    KAddIceCandidateFailClosed              = 1,
    KAddIceCandidateFailNoRemoteDescription = 2,
    KAddIceCandidateFailNullCandidate       = 3,
    KAddIceCandidateFailNotValid            = 4,
    KAddIceCandidateFailNotReady            = 5,
    KAddIceCandidateFailInAddition          = 6,
    KAddIceCandidateFailNotUsable           = 7,
    KAddIceCandidateMax                     = 8,
};

}
#endif // @header-generator platform
