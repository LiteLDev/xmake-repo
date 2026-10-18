#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/enums/TextureFormat.h"
#include "mc/deps/renderer/hal/TextureDescription.h"
#include "mc/deps/renderer/hal/enums/FrameBufferAttachmentType.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
class FrameBufferAttachmentDescription : public ::mce::TextureDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::FrameBufferAttachmentType> mFrameBufferAttachmentType;
    ::ll::TypedStorage<1, 1, bool>                             mAutomaticLatentResolve;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FrameBufferAttachmentDescription();

    MCNAPI explicit FrameBufferAttachmentDescription(::mce::TextureDescription const&);

    MCNAPI void setTextureFormatAndAttachmentType(::mce::TextureFormat const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::mce::TextureDescription const&);
    // NOLINTEND
};
#else // @header-generator platform
class FrameBufferAttachmentDescription {};
#endif // @header-generator platform

} // namespace mce
