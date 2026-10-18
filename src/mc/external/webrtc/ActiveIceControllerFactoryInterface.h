#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class ActiveIceControllerInterface; }
namespace webrtc { struct ActiveIceControllerFactoryArgs; }
// clang-format on

namespace webrtc {

class ActiveIceControllerFactoryInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActiveIceControllerFactoryInterface() = default;

    virtual ::std::unique_ptr<::webrtc::ActiveIceControllerInterface>
    Create(::webrtc::ActiveIceControllerFactoryArgs const&) = 0;
    // NOLINTEND
};

} // namespace webrtc
#endif // @header-generator platform
