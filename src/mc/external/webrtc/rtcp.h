#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::rtcp { class RemoteEstimateSerializer; }
// clang-format on

namespace webrtc::rtcp {
// functions
// NOLINTBEGIN
MCNAPI ::webrtc::rtcp::RemoteEstimateSerializer const* GetRemoteEstimateSerializer();
// NOLINTEND

} // namespace webrtc::rtcp
#endif // @header-generator platform
