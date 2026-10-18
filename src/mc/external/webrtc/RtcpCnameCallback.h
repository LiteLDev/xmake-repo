#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtcpCnameCallback {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RtcpCnameCallback() = default;

    virtual void OnCname(uint, ::std::string_view) = 0;
    // NOLINTEND
};

} // namespace webrtc
#endif // @header-generator platform
