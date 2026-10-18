#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class IceSwitchReason : int {
    Unknown                               = 0,
    RemoteCandidateGenerationChange       = 1,
    NetworkPreferenceChange               = 2,
    NewConnectionFromLocalCandidate       = 3,
    NewConnectionFromRemoteCandidate      = 4,
    NewConnectionFromUnknownRemoteAddress = 5,
    NominationOnControlledSide            = 6,
    DataReceived                          = 7,
    ConnectStateChange                    = 8,
    SelectedConnectionDestroyed           = 9,
    IceControllerRecheck                  = 10,
    ApplicationRequested                  = 11,
};

}
#endif // @header-generator platform
