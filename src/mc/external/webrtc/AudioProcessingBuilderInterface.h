#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AudioProcessing; }
namespace webrtc { class Environment; }
// clang-format on

namespace webrtc {

class AudioProcessingBuilderInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AudioProcessingBuilderInterface() = default;

    virtual ::webrtc::scoped_refptr<::webrtc::AudioProcessing> Build(::webrtc::Environment const&) = 0;
    // NOLINTEND
};

} // namespace webrtc
#endif // @header-generator platform
