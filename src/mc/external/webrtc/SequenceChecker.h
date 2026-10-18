#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/SequenceCheckerDoNothing.h"

namespace webrtc {

class SequenceChecker : public ::webrtc::webrtc_sequence_checker_internal::SequenceCheckerDoNothing {
public:
    // SequenceChecker inner types define
    enum class InitialState : uchar {
        KDetached = 0,
        KAttached = 1,
    };
};

} // namespace webrtc
#endif // @header-generator platform
