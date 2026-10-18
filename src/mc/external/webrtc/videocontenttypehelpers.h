#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/VideoContentType.h"

namespace webrtc::videocontenttypehelpers {
// functions
// NOLINTBEGIN
MCNAPI bool IsScreenshare(::webrtc::VideoContentType const& content_type);

MCNAPI char const* ToString(::webrtc::VideoContentType const& content_type);
// NOLINTEND

} // namespace webrtc::videocontenttypehelpers
#endif // @header-generator platform
