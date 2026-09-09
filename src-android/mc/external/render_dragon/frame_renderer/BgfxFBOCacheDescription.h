#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/Attachment.h"

namespace dragon::framerenderer::details {

struct BgfxFBOCacheDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 96, std::array<bgfx::Attachment, 16>> mColorAttachments;
    ::ll::TypedStorage<2, 6, ::bgfx::Attachment>                mDepthAttachment;
    // NOLINTEND
};

} // namespace dragon::framerenderer::details
