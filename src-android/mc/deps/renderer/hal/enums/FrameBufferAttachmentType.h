#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

enum class FrameBufferAttachmentType : uint64 {
    UnknownFrameBufferAttachment      = 0,
    ColorFrameBufferAttachment        = 1,
    DepthFrameBufferAttachment        = 2,
    StencilFrameBufferAttachment      = 3,
    DepthStencilFrameBufferAttachment = 4,
};

}
