#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FieldTrialListBase; }
// clang-format on

namespace webrtc {

class FieldTrialListWrapper {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FieldTrialListWrapper() = default;

    virtual void WriteElement(void*, int) = 0;

    virtual ::webrtc::FieldTrialListBase* GetList() = 0;
    // NOLINTEND
};

} // namespace webrtc
#endif // @header-generator platform
