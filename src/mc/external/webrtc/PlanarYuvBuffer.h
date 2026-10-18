#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/VideoFrameBuffer.h"

namespace webrtc {

class PlanarYuvBuffer : public ::webrtc::VideoFrameBuffer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual int ChromaWidth() const = 0;

    virtual int ChromaHeight() const = 0;

    virtual int StrideY() const = 0;

    virtual int StrideU() const = 0;

    virtual int StrideV() const = 0;

    virtual ~PlanarYuvBuffer() /*override*/ = default;
    // NOLINTEND
};

} // namespace webrtc
#endif // @header-generator platform
