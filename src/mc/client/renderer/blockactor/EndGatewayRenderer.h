#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/blockactor/BlockActorRenderer.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
struct BlockActorRenderData;
namespace mce { class TextureGroup; }
// clang-format on

class EndGatewayRenderer : public ::BlockActorRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, short>               mWorldHeight;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>  mBeaconTexture;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mBeaconMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mBeaconTransparentMaterial;
    // NOLINTEND

public:
    // prevent constructor by default
    EndGatewayRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EndGatewayRenderer();

    virtual void render(::BaseActorRenderContext&, ::BlockActorRenderData&);

    virtual void renderAlpha(::BaseActorRenderContext&, ::BlockActorRenderData&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $render(::BaseActorRenderContext&, ::BlockActorRenderData&);

    MCNAPI void $renderAlpha(::BaseActorRenderContext&, ::BlockActorRenderData&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/blockactor/BlockActorRenderer.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
struct BlockActorRenderData;
// clang-format on

class EndGatewayRenderer : public ::BlockActorRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, short>               mWorldHeight;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>  mBeaconTexture;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mBeaconMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mBeaconTransparentMaterial;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void
    render(::BaseActorRenderContext& renderContext, ::BlockActorRenderData& blockEntityRenderData) /*override*/;

    virtual void
    renderAlpha(::BaseActorRenderContext& renderContext, ::BlockActorRenderData& blockEntityRenderData) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $render(::BaseActorRenderContext& renderContext, ::BlockActorRenderData& blockEntityRenderData);

    MCAPI void $renderAlpha(::BaseActorRenderContext& renderContext, ::BlockActorRenderData& blockEntityRenderData);
    // NOLINTEND
};
#else // @header-generator platform
class EndGatewayRenderer {};
#endif // @header-generator platform
#endif // @header-generator platform
