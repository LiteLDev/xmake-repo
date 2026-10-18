#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/StrongAlias.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class MaxRetransmitsTag; }
// clang-format on

namespace dcsctp {

class MaxRetransmits : public ::webrtc::StrongAlias<::dcsctp::MaxRetransmitsTag, ushort> {};

} // namespace dcsctp
#endif // @header-generator platform
