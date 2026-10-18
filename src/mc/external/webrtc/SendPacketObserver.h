#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

class SendPacketObserver {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SendPacketObserver() = default;

    virtual void OnSendPacket(::std::optional<ushort>, ::webrtc::Timestamp, uint) = 0;
    // NOLINTEND
};

} // namespace webrtc
#endif // @header-generator platform
