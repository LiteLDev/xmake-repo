#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
