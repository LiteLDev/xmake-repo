#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Socket; }
// clang-format on

namespace webrtc {

class SocketFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SocketFactory() = default;

    virtual ::webrtc::Socket* CreateSocket(int family, int type) = 0;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
#endif // @header-generator platform
