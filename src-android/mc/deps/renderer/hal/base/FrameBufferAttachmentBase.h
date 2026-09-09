#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/renderer/hal/FrameBufferAttachmentDescription.h"

// auto generated forward declare list
// clang-format off
namespace mce { class FrameBufferObject; }
namespace mce { class RenderContext; }
namespace mce { class Texture; }
// clang-format on

namespace mce {

class FrameBufferAttachmentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::Texture const*>                    mTexturePtr;
    ::ll::TypedStorage<1, 1, uchar>                                    mTextureLevel;
    ::ll::TypedStorage<2, 2, ushort>                                   mTextureLayer;
    ::ll::TypedStorage<8, 8, ::mce::FrameBufferObject*>                mParentFrameBufferObject;
    ::ll::TypedStorage<8, 96, ::mce::FrameBufferAttachmentDescription> mFrameBufferAttachmentDescription;
    ::ll::TypedStorage<8, 24, std::string>                             mResourceName;
    ::ll::TypedStorage<1, 1, bool>                                     mStorageAllocated;
    // NOLINTEND

public:
    // prevent constructor by default
    FrameBufferAttachmentBase& operator=(FrameBufferAttachmentBase const&);
    FrameBufferAttachmentBase(FrameBufferAttachmentBase const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FrameBufferAttachmentBase();

    MCNAPI void
    createAttachmentAndTexture(::mce::RenderContext&, ::mce::FrameBufferAttachmentDescription const&, ::mce::Texture&);

    MCNAPI void createAttachmentWithTexture(
        ::mce::RenderContext&,
        ::mce::FrameBufferAttachmentDescription const&,
        ::mce::Texture const&,
        uchar const,
        ushort const,
        uint const
    );

    MCNAPI ::mce::FrameBufferAttachmentDescription const& getFrameBufferAttachmentDescription() const;

    MCNAPI ~FrameBufferAttachmentBase();
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

} // namespace mce
