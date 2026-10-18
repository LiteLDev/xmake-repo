#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/RenderStage.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/Mesh.h"

// auto generated forward declare list
// clang-format off
class HudDebugOverlayRenderer;
class IClientInstance;
class ScreenContext;
class Tessellator;
// clang-format on

class DefaultUIRendererCompositorStage : public ::mce::RenderStage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                     setToBackBuffer;
    ::ll::TypedStorage<8, 8, ::IClientInstance&>                       mClient;
    ::ll::TypedStorage<8, 8, std::unique_ptr<HudDebugOverlayRenderer>> mHudDebugOverlayRenderer;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                      mUIQuadMaterial;
    ::ll::TypedStorage<8, 616, ::mce::Mesh>                            mUIQuadMesh;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                      mUICursorMaterial;
    ::ll::TypedStorage<8, 616, ::mce::Mesh>                            mUICursorMesh;
    ::ll::TypedStorage<1, 1, bool>                                     mUIMeshAvailable;
    ::ll::TypedStorage<4, 4, float>                                    mCursorVPsizeX;
    ::ll::TypedStorage<4, 4, float>                                    mCursorVPsizeY;
    ::ll::TypedStorage<4, 4, float>                                    mCursorGuiScale;
    // NOLINTEND

public:
    // prevent constructor by default
    DefaultUIRendererCompositorStage& operator=(DefaultUIRendererCompositorStage const&);
    DefaultUIRendererCompositorStage(DefaultUIRendererCompositorStage const&);
    DefaultUIRendererCompositorStage();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DefaultUIRendererCompositorStage();

    virtual void preRenderUpdate(::ScreenContext&);

    virtual void preRender(::ScreenContext&);

    virtual void postRender(::ScreenContext&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DefaultUIRendererCompositorStage(::IClientInstance&);
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
    MCNAPI void $preRenderUpdate(::ScreenContext&);

    MCNAPI void $preRender(::ScreenContext&);

    MCNAPI void $postRender(::ScreenContext&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class DefaultUIRendererCompositorStage {};
#endif // @header-generator platform
