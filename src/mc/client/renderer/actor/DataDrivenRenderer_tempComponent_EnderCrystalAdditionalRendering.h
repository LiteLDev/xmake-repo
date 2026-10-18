#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/actor/DataDrivenRenderer_tempComponent.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class ActorRenderData;
class BaseActorRenderContext;
class DataDrivenRenderer;
class RenderParams;
class Tessellator;
class Vec3;
// clang-format on

class DataDrivenRenderer_tempComponent_EnderCrystalAdditionalRendering : public ::DataDrivenRenderer_tempComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<DataDrivenRenderer>> mRenderer;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                mBeamMaterial;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                 mBeamTexture;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenRenderer_tempComponent_EnderCrystalAdditionalRendering();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataDrivenRenderer_tempComponent_EnderCrystalAdditionalRendering();

    virtual void render(::BaseActorRenderContext&, ::ActorRenderData&, ::RenderParams&);

    virtual void renderEffects(::BaseActorRenderContext&, ::ActorRenderData&, ::RenderParams&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void tessellateCrystalBeam(::Tessellator&, ::Vec3 const&, ::Vec3 const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $render(::BaseActorRenderContext&, ::ActorRenderData&, ::RenderParams&);

    MCNAPI void $renderEffects(::BaseActorRenderContext&, ::ActorRenderData&, ::RenderParams&);
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
#include "mc/client/renderer/actor/DataDrivenRenderer_tempComponent.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class ActorRenderData;
class BaseActorRenderContext;
class DataDrivenRenderer;
class RenderParams;
class Tessellator;
class Vec3;
// clang-format on

class DataDrivenRenderer_tempComponent_EnderCrystalAdditionalRendering : public ::DataDrivenRenderer_tempComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::DataDrivenRenderer>> mRenderer;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                    mBeamMaterial;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                     mBeamTexture;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void render(::BaseActorRenderContext&, ::ActorRenderData&, ::RenderParams&) /*override*/;

    virtual void renderEffects(
        ::BaseActorRenderContext& renderContext,
        ::ActorRenderData&        actorRenderData,
        ::RenderParams&           renderParams
    ) /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void tessellateCrystalBeam(::Tessellator& tessellator, ::Vec3 const& beamStart, ::Vec3 const& beamEnd);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $render(::BaseActorRenderContext&, ::ActorRenderData&, ::RenderParams&);

    MCAPI void $renderEffects(
        ::BaseActorRenderContext& renderContext,
        ::ActorRenderData&        actorRenderData,
        ::RenderParams&           renderParams
    );
    // NOLINTEND
};
#else // @header-generator platform
class DataDrivenRenderer_tempComponent_EnderCrystalAdditionalRendering {};
#endif // @header-generator platform
#endif // @header-generator platform
