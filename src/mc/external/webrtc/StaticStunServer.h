#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class SocketAddress; }
// clang-format on

namespace webrtc {

class StaticStunServer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StaticStunServer() = default;

    virtual ::std::optional<::webrtc::SocketAddress> Reflect(::webrtc::SocketAddress const& local) const = 0;
    // NOLINTEND
};

} // namespace webrtc
#endif // @header-generator platform
