#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/GamefaceRenderTargetTexture.h"

namespace mce::framebuilder {

struct GamefaceRenderTarget {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>                                        mColorTargetTextureHandle;
    ::ll::UntypedStorage<8, 32>                                        mDepthTargetTextureHandle;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>> mViewport;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>> mScissor;
    ::ll::TypedStorage<1, 1, bool>                                     scissorEnabled;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::mce::framebuilder::GamefaceRenderTarget& operator=(::mce::framebuilder::GamefaceRenderTarget&&);

    MCNAPI ::mce::framebuilder::GamefaceRenderTarget& operator=(::mce::framebuilder::GamefaceRenderTarget const&);

    MCNAPI ~GamefaceRenderTarget();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce::framebuilder
