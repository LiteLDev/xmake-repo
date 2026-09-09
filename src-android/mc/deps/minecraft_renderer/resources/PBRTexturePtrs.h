#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#include "mc/deps/minecraft_renderer/resources/MERSTextureMode.h"
#include "mc/deps/minecraft_renderer/resources/NormalTextureMode.h"

struct PBRTexturePtrs {
public:
    // PBRTexturePtrs inner types declare
    // clang-format off
    struct MERSTexturePtr;
    struct NormalTexturePtr;
    // clang-format on

    // PBRTexturePtrs inner types define
    struct MERSTexturePtr {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::mce::TexturePtr> mTexture;
        ::ll::TypedStorage<1, 1, ::MERSTextureMode>  mMode;
        // NOLINTEND
    };

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
};
