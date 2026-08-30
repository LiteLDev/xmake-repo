#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/RenderStageWithFrameBufferObject.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class ScreenContext;
struct FrameRenderObject;
namespace mce { class RenderContext; }
namespace mce { class Texture; }
// clang-format on

class TickingTextureStage : public ::mce::RenderStageWithFrameBufferObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>               mHasFrameBuffer;
    ::ll::TypedStorage<8, 8, ::IClientInstance&> mClient;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr> mAtlasTexture;
    // NOLINTEND

public:
    // prevent constructor by default
    TickingTextureStage& operator=(TickingTextureStage const&);
    TickingTextureStage(TickingTextureStage const&);
    TickingTextureStage();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TickingTextureStage();

    virtual void preRender(::ScreenContext&);

    virtual void render(::ScreenContext&, ::FrameRenderObject const&);

    virtual void postRender(::ScreenContext&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit TickingTextureStage(::IClientInstance&);

    MCNAPI void _createRenderTarget(::mce::Texture&, ::mce::RenderContext&);

    MCNAPI void createRenderTarget(::mce::RenderContext&);

    MCNAPI void resetStage();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IClientInstance&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $preRender(::ScreenContext&);

    MCNAPI void $render(::ScreenContext&, ::FrameRenderObject const&);

    MCNAPI void $postRender(::ScreenContext&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
