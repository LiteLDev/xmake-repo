#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/actor/V2TempComponentRequirements.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class ActorRenderData;
class BaseActorRenderContext;
class BoneOrientation;
class HashedString;
class RenderParams;
// clang-format on

class DataDrivenRenderer_tempComponent {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataDrivenRenderer_tempComponent();

    virtual void preRender(::BaseActorRenderContext&, ::ActorRenderData&, ::RenderParams&);

    virtual void render(::BaseActorRenderContext&, ::ActorRenderData&, ::RenderParams&) = 0;

    virtual void renderEffects(::BaseActorRenderContext&, ::ActorRenderData&, ::RenderParams&);

    virtual ::AABB getRenderBounds(::Actor const&) const;

    virtual ::V2TempComponentRequirements getV2Requirements() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $preRender(::BaseActorRenderContext&, ::ActorRenderData&, ::RenderParams&);

    MCNAPI void $renderEffects(::BaseActorRenderContext&, ::ActorRenderData&, ::RenderParams&);

    MCNAPI ::AABB $getRenderBounds(::Actor const&) const;

    MCNAPI ::V2TempComponentRequirements $getV2Requirements() const;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/actor/V2TempComponentRequirements.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class ActorRenderData;
class BaseActorRenderContext;
class RenderParams;
// clang-format on

class DataDrivenRenderer_tempComponent {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataDrivenRenderer_tempComponent() = default;

    virtual void preRender(
        ::BaseActorRenderContext& renderContext,
        ::ActorRenderData&        actorRenderData,
        ::RenderParams&           renderParams
    );

    virtual void render(
        ::BaseActorRenderContext& renderContext,
        ::ActorRenderData&        actorRenderData,
        ::RenderParams&           renderParams
    ) = 0;

    virtual void renderEffects(
        ::BaseActorRenderContext& renderContext,
        ::ActorRenderData&        actorRenderData,
        ::RenderParams&           renderParams
    );

    virtual ::AABB getRenderBounds(::Actor const& entity) const;

    virtual ::V2TempComponentRequirements getV2Requirements() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $preRender(
        ::BaseActorRenderContext& renderContext,
        ::ActorRenderData&        actorRenderData,
        ::RenderParams&           renderParams
    );

    MCFOLD void $renderEffects(
        ::BaseActorRenderContext& renderContext,
        ::ActorRenderData&        actorRenderData,
        ::RenderParams&           renderParams
    );

    MCFOLD ::AABB $getRenderBounds(::Actor const& entity) const;

    MCFOLD ::V2TempComponentRequirements $getV2Requirements() const;
    // NOLINTEND
};
#else // @header-generator platform
class DataDrivenRenderer_tempComponent {};
#endif // @header-generator platform
#endif // @header-generator platform
