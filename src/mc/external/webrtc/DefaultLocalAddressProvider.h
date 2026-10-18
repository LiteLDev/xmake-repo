#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class IPAddress; }
// clang-format on

namespace webrtc {

class DefaultLocalAddressProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DefaultLocalAddressProvider() = default;

    virtual bool GetDefaultLocalAddress(int family, ::webrtc::IPAddress* ipaddr) const = 0;
    // NOLINTEND
};

} // namespace webrtc
#endif // @header-generator platform
