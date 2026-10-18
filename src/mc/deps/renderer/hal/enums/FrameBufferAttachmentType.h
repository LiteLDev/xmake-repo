#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
enum class FrameBufferAttachmentType : uint64 {
    UnknownFrameBufferAttachment      = 0,
    ColorFrameBufferAttachment        = 1,
    DepthFrameBufferAttachment        = 2,
    StencilFrameBufferAttachment      = 3,
    DepthStencilFrameBufferAttachment = 4,
};
#else // @header-generator platform
enum class FrameBufferAttachmentType : uint {};
#endif // @header-generator platform

}
