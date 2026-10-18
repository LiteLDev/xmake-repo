#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/renderer/hal/deprecated/ResourceBase.h"
#include "mc/deps/renderer/hal/null/FrameBufferObjectNull.h"
#include "mc/mce__FrameBufferAttachmentIdentifier.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
namespace mce { class FrameBufferAttachment; }
namespace mce { class FrameBufferAttachmentDescription; }
namespace mce { class FrameBufferDescription; }
namespace mce { class RenderContext; }
namespace mce { class Texture; }
namespace mce { struct ViewportInfo; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
class FrameBufferObject : public ::mce::FrameBufferObjectNull,
                          public ::mce::deprecated::ResourceBase<mce::FrameBufferObjectNull> {
public:
    // prevent constructor by default
    FrameBufferObject& operator=(FrameBufferObject const&);
    FrameBufferObject(FrameBufferObject const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FrameBufferObject();

    MCNAPI FrameBufferObject(::mce::FrameBufferObject&&);

    MCNAPI void bindFrameBuffer();

    MCNAPI void clearColorAttachment(::mce::ViewportInfo const*) const;

    MCNAPI void clearColorAttachment(::mce::Color const&, ::mce::ViewportInfo const*) const;

    MCNAPI void clearDepthAttachment(::mce::ViewportInfo const*) const;

    MCNAPI void clearDepthStencilAttachment(::mce::ViewportInfo const*) const;

    MCNAPI void clearStencilAttachment(::mce::ViewportInfo const*) const;

    MCNAPI void createFrameBuffer(::mce::RenderContext&, ::mce::FrameBufferDescription const&);

    MCNAPI ::mce::FrameBufferAttachment& createFrameBufferAttachmentAndTexture(
        ::mce::RenderContext&,
        ::mce::FrameBufferAttachmentDescription const&,
        ::mce::Texture&
    );

    MCNAPI ::mce::FrameBufferAttachment& createFrameBufferAttachmentWithTexture(
        ::mce::RenderContext&,
        ::mce::FrameBufferAttachmentDescription const&,
        ::mce::Texture const&,
        uchar const,
        ushort const,
        uint const
    );

    MCNAPI void destroyFrameBuffer();

    MCNAPI void finalizeFrameBuffer();

    MCNAPI void resolveFrameBuffer() const;

    MCNAPI void resolveFrameBuffer(::mce::FrameBufferObject const&) const;

    MCNAPI void transitionFrameBufferToShaderResource();

    MCNAPI ~FrameBufferObject();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::mce::FrameBufferObject&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class FrameBufferObject {};
#endif // @header-generator platform

} // namespace mce
