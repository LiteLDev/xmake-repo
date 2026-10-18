#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bgfx/Attachment.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::framerenderer::details {

#if defined(LL_PLAT_A) // @header-generator platform
struct BgfxFBOCacheDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 96, std::array<bgfx::Attachment, 16>> mColorAttachments;
    ::ll::TypedStorage<2, 6, ::bgfx::Attachment>                mDepthAttachment;
    // NOLINTEND
};
#else // @header-generator platform
struct BgfxFBOCacheDescription {};
#endif // @header-generator platform

} // namespace dragon::framerenderer::details
