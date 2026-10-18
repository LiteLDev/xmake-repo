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
class DataDrivenModel;
class DataDrivenRenderer;
class ModelPart;
class RenderParams;
// clang-format on

class DataDrivenRenderer_tempComponent_GuardianAdditionalRendering : public ::DataDrivenRenderer_tempComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<DataDrivenRenderer>> mRenderer;
    ::ll::TypedStorage<1, 1, bool>                               mRenderingInventory;
    ::ll::TypedStorage<8, 8, std::unique_ptr<DataDrivenModel>>   mGhostModel;
    ::ll::TypedStorage<8, 8, ::ModelPart*>                       mHead;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                 mElderSkin;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                 mBeamSkin;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                mBeamMaterial;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenRenderer_tempComponent_GuardianAdditionalRendering();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataDrivenRenderer_tempComponent_GuardianAdditionalRendering();

    virtual void preRender(::BaseActorRenderContext&, ::ActorRenderData&, ::RenderParams&);

    virtual void render(::BaseActorRenderContext&, ::ActorRenderData&, ::RenderParams&);
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

    MCNAPI void $render(::BaseActorRenderContext&, ::ActorRenderData&, ::RenderParams&);
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
class DataDrivenModel;
class DataDrivenRenderer;
class ModelPart;
class RenderParams;
// clang-format on

class DataDrivenRenderer_tempComponent_GuardianAdditionalRendering : public ::DataDrivenRenderer_tempComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::DataDrivenRenderer>> mRenderer;
    ::ll::TypedStorage<1, 1, bool>                                   mRenderingInventory;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DataDrivenModel>>   mGhostModel;
    ::ll::TypedStorage<8, 8, ::ModelPart*>                           mHead;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                     mElderSkin;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                     mBeamSkin;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                    mBeamMaterial;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void preRender(
        ::BaseActorRenderContext& renderContext,
        ::ActorRenderData&        actorRenderData,
        ::RenderParams&           renderParams
    ) /*override*/;

    virtual void render(::BaseActorRenderContext&, ::ActorRenderData&, ::RenderParams&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $preRender(
        ::BaseActorRenderContext& renderContext,
        ::ActorRenderData&        actorRenderData,
        ::RenderParams&           renderParams
    );

    MCFOLD void $render(::BaseActorRenderContext&, ::ActorRenderData&, ::RenderParams&);
    // NOLINTEND
};
#else // @header-generator platform
class DataDrivenRenderer_tempComponent_GuardianAdditionalRendering {};
#endif // @header-generator platform
#endif // @header-generator platform
