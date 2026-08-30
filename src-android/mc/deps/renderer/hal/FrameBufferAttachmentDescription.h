#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/enums/TextureFormat.h"
#include "mc/deps/renderer/hal/TextureDescription.h"
#include "mc/deps/renderer/hal/enums/FrameBufferAttachmentType.h"

namespace mce {

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

} // namespace mce
