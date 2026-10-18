#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/blockactor/BlockActorRenderer.h"
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/Mesh.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class BlockActor;
class ConduitBaseModel;
class ConduitCageModel;
class ConduitWindModel;
class Tessellator;
struct BlockActorRenderData;
namespace dragon { struct RenderMetadata; }
namespace mce { class TextureGroup; }
// clang-format on

class ConduitRenderer : public ::BlockActorRenderer, public ::AppPlatformListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                mGuiMaterial;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr const>           mBaseTexture;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr const>           mShellTexture;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr const>           mWindTexture;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr const>           mWindTextureVertical;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr const>           mCoreTexture;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr const>           mActiveCoreTexture;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ConduitBaseModel>> mModel;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ConduitCageModel>>  mCage;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ConduitWindModel>>  mOuterWind;
    ::ll::TypedStorage<8, 616, ::mce::Mesh>                      mHeartMesh;
    // NOLINTEND

public:
    // prevent constructor by default
    ConduitRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ConduitRenderer();

    virtual void render(::BaseActorRenderContext&, ::BlockActorRenderData&);

    virtual void onAppSuspended();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ConduitRenderer(std::shared_ptr<mce::TextureGroup>);

    MCNAPI void _tessellateHeart(::Tessellator&) const;

    MCNAPI void
    renderInGui(::BaseActorRenderContext&, ::dragon::RenderMetadata const&, ::BlockActor&, float, float, float, float);

    MCNAPI void renderInHand(::BaseActorRenderContext&, ::BlockActorRenderData&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& ROTATION_SPEED();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<mce::TextureGroup>);
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

    MCNAPI void $onAppSuspended();
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
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/Mesh.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class BlockActor;
class ConduitBaseModel;
class ConduitCageModel;
class ConduitWindModel;
struct BlockActorRenderData;
namespace dragon { struct RenderMetadata; }
// clang-format on

class ConduitRenderer : public ::BlockActorRenderer, public ::AppPlatformListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                    mGuiMaterial;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr const>               mBaseTexture;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr const>               mShellTexture;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr const>               mWindTexture;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr const>               mWindTextureVertical;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr const>               mCoreTexture;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr const>               mActiveCoreTexture;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ConduitBaseModel>> mModel;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ConduitCageModel>>  mCage;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ConduitWindModel>>  mOuterWind;
    ::ll::TypedStorage<8, 616, ::mce::Mesh>                          mHeartMesh;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ConduitRenderer() /*override*/ = default;

    virtual void onAppSuspended() /*override*/;

    virtual void
    render(::BaseActorRenderContext& renderContext, ::BlockActorRenderData& blockEntityRenderData) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void renderInGui(
        ::BaseActorRenderContext&       renderContext,
        ::dragon::RenderMetadata const& renderMetadata,
        ::BlockActor&                   entity,
        float                           x,
        float                           y,
        float                           scale,
        float                           lightMultiplier
    );

    MCAPI void renderInHand(::BaseActorRenderContext& renderContext, ::BlockActorRenderData& blockEntityRenderData);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onAppSuspended();

    MCAPI void $render(::BaseActorRenderContext& renderContext, ::BlockActorRenderData& blockEntityRenderData);
    // NOLINTEND
};
#else // @header-generator platform
class ConduitRenderer {};
#endif // @header-generator platform
#endif // @header-generator platform
