#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace mce { class Texture; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace rendergraph {

class FrameBufferBuilder {
public:
    // FrameBufferBuilder inner types declare
    // clang-format off
    struct Packet;
    // clang-format on

    // FrameBufferBuilder inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct Packet {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::mce::Texture const*> mAttachmentTexture;
        ::ll::TypedStorage<1, 1, uchar>                 mMipLevel;
        ::ll::TypedStorage<1, 1, uchar>                 mArrayIndex;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<rendergraph::FrameBufferBuilder::Packet>> mColorAttachmentCreations;
    ::ll::TypedStorage<8, 16, ::rendergraph::FrameBufferBuilder::Packet>            mDepthStencilAttachmentCreation;
    // NOLINTEND
#else // @header-generator platform
    struct Packet {};
#endif // @header-generator platform
};

} // namespace rendergraph
