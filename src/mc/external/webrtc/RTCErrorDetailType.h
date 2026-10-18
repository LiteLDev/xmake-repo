#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class RTCErrorDetailType : int {
    None                        = 0,
    DataChannelFailure          = 1,
    DtlsFailure                 = 2,
    FingerprintFailure          = 3,
    SctpFailure                 = 4,
    SdpSyntaxError              = 5,
    HardwareEncoderNotAvailable = 6,
    HardwareEncoderError        = 7,
};

}
#endif // @header-generator platform
