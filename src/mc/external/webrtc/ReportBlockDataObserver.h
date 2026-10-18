#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class ReportBlockData; }
// clang-format on

namespace webrtc {

class ReportBlockDataObserver {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ReportBlockDataObserver() = default;

    virtual void OnReportBlockDataUpdated(::webrtc::ReportBlockData) = 0;
    // NOLINTEND
};

} // namespace webrtc
#endif // @header-generator platform
