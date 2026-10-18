#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/StrongAlias.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class PayloadTypeTag; }
// clang-format on

namespace webrtc {

class PayloadType : public ::webrtc::StrongAlias<::webrtc::PayloadTypeTag, uchar> {};

} // namespace webrtc
#endif // @header-generator platform
