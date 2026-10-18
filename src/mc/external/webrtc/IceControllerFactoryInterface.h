#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class IceControllerInterface; }
namespace webrtc { struct IceControllerFactoryArgs; }
// clang-format on

namespace webrtc {

class IceControllerFactoryInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IceControllerFactoryInterface() = default;

    virtual ::std::unique_ptr<::webrtc::IceControllerInterface>
    Create(::webrtc::IceControllerFactoryArgs const& args) = 0;
    // NOLINTEND
};

} // namespace webrtc
#endif // @header-generator platform
