#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/external/bgfx/Access.h"
#include "mc/external/bgfx/TextureFormat.h"
#include "mc/external/bgfx/TextureHandle.h"
#include "mc/external/bgfx/UniformHandle.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace dragon::framerenderer::drawcommands {

struct TextureBinding {
public:
    // TextureBinding inner types declare
    // clang-format off
    struct Image;
    struct Texture;
    // clang-format on

    // TextureBinding inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct Image {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, uchar> mMip;
        ::ll::UntypedStorage<4, 4>      mAccess;
        ::ll::UntypedStorage<4, 4>      mFormat;
        // NOLINTEND
    };
#else // @header-generator platform
    struct Image {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct Texture {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, ::bgfx::UniformHandle> mSampler;
        ::ll::TypedStorage<4, 4, uint>                  mFlags;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, uchar> mStage;
    ::ll::TypedStorage<4, 4, uint> mIndex;
    ::ll::TypedStorage<2, 2, ::bgfx::TextureHandle> mHandle;
    ::ll::TypedStorage<4, 16, std::variant<std::monostate, dragon::framerenderer::drawcommands::TextureBinding::Image, dragon::framerenderer::drawcommands::TextureBinding::Texture>> mData;
    // clang-format on
    // NOLINTEND
#else // @header-generator platform
    struct Texture {};
#endif // @header-generator platform
};

} // namespace dragon::framerenderer::drawcommands
