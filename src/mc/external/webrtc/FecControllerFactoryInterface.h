#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Environment; }
namespace webrtc { class FecController; }
// clang-format on

namespace webrtc {

class FecControllerFactoryInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FecControllerFactoryInterface() = default;

    virtual ::std::unique_ptr<::webrtc::FecController> CreateFecController(::webrtc::Environment const&) = 0;
    // NOLINTEND
};

} // namespace webrtc
#endif // @header-generator platform
