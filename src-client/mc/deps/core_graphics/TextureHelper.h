#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/enums/TextureFormat.h"
#include "mc/deps/renderer/hal/enums/FrameBufferAttachmentType.h"

namespace mce::TextureHelper {
// functions
// NOLINTBEGIN
MCAPI ::mce::FrameBufferAttachmentType frameBufferAttachmentTypeFromTextureFormat(::mce::TextureFormat textureFormat);
// NOLINTEND

} // namespace mce::TextureHelper
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
