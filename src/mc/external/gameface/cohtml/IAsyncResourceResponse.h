#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/external/gameface/renoir/ImageOrigin.h"
#include "mc/external/gameface/renoir/PixelFormat.h"
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace cohtml { class DataBuffer; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

namespace cohtml {

class IAsyncResourceResponse {
public:
    // IAsyncResourceResponse inner types declare
    // clang-format off
    struct UserImageData;
    // clang-format on

    // IAsyncResourceResponse inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum Status : uint {
        Success = 0,
        Failure = 1,
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class Status : int {
        Success = 0,
        Failure = 1,
    };
#else // @header-generator platform
    enum class Status : int {};
#endif // @header-generator platform
#endif // @header-generator platform

    struct UserImageData {
    public:
        // UserImageData inner types define
#if defined(LL_PLAT_A) // @header-generator platform
        enum TextureFilteringMode : uint {
            FilterPoint  = 0,
            FilterLinear = 1,
        };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
        enum class TextureFilteringMode : int {
            FilterPoint  = 0,
            FilterLinear = 1,
        };
#else // @header-generator platform
        enum class TextureFilteringMode : int {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
        enum class AlphaPremultiplicationMode : int {
            Premultiplied    = 0,
            NonPremultiplied = 1,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk16189b;
        ::ll::UntypedStorage<4, 4> mUnk68a279;
        ::ll::UntypedStorage<4, 4> mUnkef4915;
        ::ll::UntypedStorage<4, 4> mUnk9e6001;
        ::ll::UntypedStorage<4, 4> mUnkf6e233;
        ::ll::UntypedStorage<4, 4> mUnkf4cfe5;
        ::ll::UntypedStorage<4, 4> mUnkc28890;
        ::ll::UntypedStorage<4, 4> mUnk9b804c;
        ::ll::UntypedStorage<4, 4> mUnk7f72bb;
        ::ll::UntypedStorage<4, 4> mUnkffeab0;
        ::ll::UntypedStorage<4, 4> mUnk9482e2;
        ::ll::UntypedStorage<8, 8> mUnkf2e06e;
        ::ll::UntypedStorage<8, 8> mUnk5cc4f9;
        ::ll::UntypedStorage<4, 4> mUnk7144cf;
        ::ll::UntypedStorage<4, 4> mUnkff2cf8;
        // NOLINTEND

    public:
        // prevent constructor by default
        UserImageData& operator=(UserImageData const&);
        UserImageData(UserImageData const&);
        UserImageData();
#else // @header-generator platform
        enum class AlphaPremultiplicationMode : int {};
#endif // @header-generator platform
#endif // @header-generator platform
    };
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IAsyncResourceResponse() = default;

    virtual void* GetSpace(uint64) = 0;

    virtual void ReceiveUserImage(::cohtml::IAsyncResourceResponse::UserImageData const&) = 0;

    virtual void ReceiveOptimizedData(::cohtml::DataBuffer const*) = 0;

    virtual void SignalProgress() = 0;

    virtual void SetStatus(ushort) = 0;

    virtual void SetResponseURL(char const*) = 0;

    virtual void SetHeader(char const*, char const*) = 0;

    virtual void Finish(::cohtml::IAsyncResourceResponse::Status) = 0;
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace cohtml
