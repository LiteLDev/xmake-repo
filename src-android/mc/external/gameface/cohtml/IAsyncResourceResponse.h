#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/gameface/renoir/ImageOrigin.h"
#include "mc/external/gameface/renoir/PixelFormat.h"

namespace cohtml {

class IAsyncResourceResponse {
public:
    // IAsyncResourceResponse inner types declare
    // clang-format off
    struct UserImageData;
    // clang-format on

    // IAsyncResourceResponse inner types define
    enum Status : uint {
        Success = 0,
        Failure = 1,
    };

    struct UserImageData {
    public:
        // UserImageData inner types define
        enum TextureFilteringMode : uint {
            FilterPoint  = 0,
            FilterLinear = 1,
        };

        enum AlphaPremultiplicationMode : uint {
            Premultiplied    = 0,
            NonPremultiplied = 1,
        };

    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<4, 4, uint> Width;
        ::ll::TypedStorage<4, 4, uint> Height;
        ::ll::TypedStorage<4, 4, uint> ContentRectX;
        ::ll::TypedStorage<4, 4, uint> ContentRectY;
        ::ll::TypedStorage<4, 4, uint> ContentRectWidth;
        ::ll::TypedStorage<4, 4, uint> ContentRectHeight;
        ::ll::TypedStorage<4, 4, uint> ImageHandle;
        ::ll::TypedStorage<4, 4, uint> SystemOwnerId;
        ::ll::TypedStorage<4, 4, uint> MipsCount;
        ::ll::TypedStorage<4, 4, ::renoir::ImageOrigin> Origin;
        ::ll::TypedStorage<4, 4, ::renoir::PixelFormat> Format;
        ::ll::TypedStorage<8, 8, void*> TextureBatchingHint;
        ::ll::TypedStorage<8, 8, void*> Texture;
        ::ll::TypedStorage<4, 4, ::cohtml::IAsyncResourceResponse::UserImageData::TextureFilteringMode> TextureFiltering;
        ::ll::TypedStorage<4, 4, ::cohtml::IAsyncResourceResponse::UserImageData::AlphaPremultiplicationMode> AlphaPremultiplication;
        // clang-format on
        // NOLINTEND
    };
};

} // namespace cohtml
