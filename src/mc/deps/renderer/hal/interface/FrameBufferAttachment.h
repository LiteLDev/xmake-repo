#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/renderer/hal/deprecated/ResourceBase.h"
#include "mc/deps/renderer/hal/null/FrameBufferAttachmentNull.h"

// auto generated forward declare list
// clang-format off
namespace mce { class FrameBufferAttachmentDescription; }
namespace mce { class RenderContext; }
namespace mce { class Texture; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
class FrameBufferAttachment : public ::mce::FrameBufferAttachmentNull,
                              public ::mce::deprecated::ResourceBase<mce::FrameBufferAttachmentNull> {
public:
    // prevent constructor by default
    FrameBufferAttachment& operator=(FrameBufferAttachment const&);
    FrameBufferAttachment(FrameBufferAttachment const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FrameBufferAttachment();

    MCNAPI void createFrameBufferAttachmentAndTexture(
        ::mce::RenderContext&,
        ::mce::FrameBufferAttachmentDescription const&,
        ::mce::Texture&
    );

    MCNAPI void createFrameBufferAttachmentWithTexture(
        ::mce::RenderContext&,
        ::mce::FrameBufferAttachmentDescription const&,
        ::mce::Texture const&,
        uchar const,
        ushort const,
        uint const
    );

    MCNAPI ~FrameBufferAttachment();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class FrameBufferAttachment {};
#endif // @header-generator platform

} // namespace mce
