#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Texture; }
// clang-format on

namespace rendergraph {

class FrameBufferBuilder {
public:
    // FrameBufferBuilder inner types declare
    // clang-format off
    struct Packet;
    // clang-format on

    // FrameBufferBuilder inner types define
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
};

} // namespace rendergraph
