#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#include "mc/deps/minecraft_renderer/resources/MERSTextureMode.h"
#include "mc/deps/minecraft_renderer/resources/NormalTextureMode.h"
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

struct PBRTexturePtrs {
public:
    // PBRTexturePtrs inner types declare
    // clang-format off
    struct MERSTexturePtr;
    struct NormalTexturePtr;
    // clang-format on

    // PBRTexturePtrs inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct MERSTexturePtr {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::mce::TexturePtr> mTexture;
        ::ll::TypedStorage<1, 1, ::MERSTextureMode>  mMode;
        // NOLINTEND
    };
#else // @header-generator platform
    struct MERSTexturePtr {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct NormalTexturePtr {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::mce::TexturePtr>  mTexture;
        ::ll::TypedStorage<1, 1, ::NormalTextureMode> mMode;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                  mColorTexture;
    ::ll::TypedStorage<8, 40, ::PBRTexturePtrs::MERSTexturePtr>   mMERSTexture;
    ::ll::TypedStorage<8, 40, ::PBRTexturePtrs::NormalTexturePtr> mNormalTexture;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PBRTexturePtrs();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    struct NormalTexturePtr {};
#if defined(LL_PLAT_C) // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                  mColorTexture;
    ::ll::TypedStorage<8, 40, ::PBRTexturePtrs::MERSTexturePtr>   mMERSTexture;
    ::ll::TypedStorage<8, 40, ::PBRTexturePtrs::NormalTexturePtr> mNormalTexture;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PBRTexturePtrs();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
};
