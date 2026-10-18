#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/TextureSetImageDescription.h"
#include "mc/deps/minecraft_renderer/renderer/IsMissingTexture.h"
#include "mc/deps/minecraft_renderer/renderer/TextureLoadState.h"
#include "mc/deps/minecraft_renderer/resources/ClientTexture.h"
#include "mc/deps/renderer/hal/TextureDescription.h"

struct BedrockTextureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 24>                                 mClientTexture;
    ::ll::TypedStorage<8, 80, ::mce::TextureDescription>        mTextureDescription;
    ::ll::TypedStorage<1, 1, ::IsMissingTexture>                mIsMissingTexture;
    ::ll::TypedStorage<1, 1, ::TextureLoadState>                mTextureLoadState;
    ::ll::TypedStorage<8, 24, ::cg::TextureSetImageDescription> mTextureSetDescription;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BedrockTextureData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/TextureSetImageDescription.h"
#include "mc/deps/minecraft_renderer/renderer/IsMissingTexture.h"
#include "mc/deps/minecraft_renderer/renderer/TextureLoadState.h"
#include "mc/deps/minecraft_renderer/resources/ClientTexture.h"
#include "mc/deps/renderer/hal/TextureDescription.h"

struct BedrockTextureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::mce::ClientTexture>             mClientTexture;
    ::ll::TypedStorage<4, 64, ::mce::TextureDescription>        mTextureDescription;
    ::ll::TypedStorage<1, 1, ::IsMissingTexture>                mIsMissingTexture;
    ::ll::TypedStorage<1, 1, ::TextureLoadState>                mTextureLoadState;
    ::ll::TypedStorage<8, 24, ::cg::TextureSetImageDescription> mTextureSetDescription;
    // NOLINTEND
};
#else // @header-generator platform
struct BedrockTextureData {};
#endif // @header-generator platform
#endif // @header-generator platform
