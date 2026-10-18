#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class MdnsResponderInterface; }
// clang-format on

namespace webrtc {

class MdnsResponderProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MdnsResponderProvider() = default;

    virtual ::webrtc::MdnsResponderInterface* GetMdnsResponder() const = 0;
    // NOLINTEND
};

} // namespace webrtc
#endif // @header-generator platform
