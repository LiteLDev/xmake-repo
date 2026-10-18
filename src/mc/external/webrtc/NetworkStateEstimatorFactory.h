#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class NetworkStateEstimator; }
// clang-format on

namespace webrtc {

class NetworkStateEstimatorFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::unique_ptr<::webrtc::NetworkStateEstimator> Create(::webrtc::FieldTrialsView const*) = 0;

    virtual ~NetworkStateEstimatorFactory() = default;
    // NOLINTEND
};

} // namespace webrtc
#endif // @header-generator platform
