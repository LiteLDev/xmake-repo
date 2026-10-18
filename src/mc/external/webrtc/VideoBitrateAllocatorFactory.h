#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Environment; }
namespace webrtc { class VideoBitrateAllocator; }
namespace webrtc { class VideoCodec; }
// clang-format on

namespace webrtc {

class VideoBitrateAllocatorFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VideoBitrateAllocatorFactory() = default;

    virtual ::std::unique_ptr<::webrtc::VideoBitrateAllocator>
    Create(::webrtc::Environment const&, ::webrtc::VideoCodec const&) = 0;
    // NOLINTEND
};

} // namespace webrtc
#endif // @header-generator platform
