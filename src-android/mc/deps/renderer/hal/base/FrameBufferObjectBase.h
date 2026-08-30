#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/renderer/hal/FrameBufferDescription.h"
#include "mc/mce__FrameBufferAttachmentIdentifier.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
namespace mce { class FrameBufferAttachment; }
namespace mce { class FrameBufferAttachmentDescription; }
namespace mce { class FrameBufferObject; }
namespace mce { class RenderContext; }
namespace mce { class RenderTargetState; }
namespace mce { class Texture; }
namespace mce { struct ViewportInfo; }
// clang-format on

namespace mce {

class FrameBufferObjectBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::mce::FrameBufferDescription>                            mFrameBufferDescription;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<mce::FrameBufferAttachment>>> mFrameBufferAttachments;
    ::ll::TypedStorage<8, 8, ::mce::FrameBufferAttachment*>                             mColorFrameBufferAttachment;
    ::ll::TypedStorage<8, 8, ::mce::FrameBufferAttachment*>                             mDepthFrameBufferAttachment;
    ::ll::TypedStorage<8, 24, std::string>                                              mFrameBufferObjectName;
    ::ll::TypedStorage<8, 8, ulong> mNumberOfColorFrameBufferAttachments;
    ::ll::TypedStorage<1, 1, bool>  mFinalizedFrameBuffer;
    ::ll::TypedStorage<1, 1, bool>  mCreatedFrameBuffer;
    // NOLINTEND

public:
    // prevent constructor by default
    FrameBufferObjectBase& operator=(FrameBufferObjectBase const&);
    FrameBufferObjectBase(FrameBufferObjectBase const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FrameBufferObjectBase();

    MCNAPI FrameBufferObjectBase(::mce::FrameBufferObjectBase&&);

    MCNAPI void bindFrameBuffer();

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

    MCNAPI void setFrameBufferObjectName(std::string_view);

    MCNAPI ~FrameBufferObjectBase();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::mce::FrameBufferObjectBase&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce
