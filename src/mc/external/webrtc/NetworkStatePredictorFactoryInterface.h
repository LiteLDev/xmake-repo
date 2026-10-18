#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class NetworkStatePredictor; }
// clang-format on

namespace webrtc {

class NetworkStatePredictorFactoryInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::unique_ptr<::webrtc::NetworkStatePredictor> CreateNetworkStatePredictor() = 0;

    virtual ~NetworkStatePredictorFactoryInterface() = default;
    // NOLINTEND
};

} // namespace webrtc
#endif // @header-generator platform
