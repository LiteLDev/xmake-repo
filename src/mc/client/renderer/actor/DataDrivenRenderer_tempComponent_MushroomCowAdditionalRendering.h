#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/actor/DataDrivenRenderer_tempComponent.h"
#include "mc/client/renderer/actor/V2TempComponentRequirements.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class ActorRenderData;
class BaseActorRenderContext;
class BlockTessellator;
class DataDrivenRenderer;
class ModelPart;
class RenderParams;
// clang-format on

class DataDrivenRenderer_tempComponent_MushroomCowAdditionalRendering : public ::DataDrivenRenderer_tempComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mMushroomMaterial;
    ::ll::TypedStorage<8, 8, ::BlockTessellator&> mBlockTessellator;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>  mAtlasTexture;
    ::ll::TypedStorage<8, 8, ::ModelPart*>        mHead;
    ::ll::TypedStorage<8, 8, ::ModelPart*>        mBody;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenRenderer_tempComponent_MushroomCowAdditionalRendering&
    operator=(DataDrivenRenderer_tempComponent_MushroomCowAdditionalRendering const&);
    DataDrivenRenderer_tempComponent_MushroomCowAdditionalRendering(
        DataDrivenRenderer_tempComponent_MushroomCowAdditionalRendering const&
    );
    DataDrivenRenderer_tempComponent_MushroomCowAdditionalRendering();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataDrivenRenderer_tempComponent_MushroomCowAdditionalRendering();

    virtual void render(::BaseActorRenderContext&, ::ActorRenderData&, ::RenderParams&);

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
    MCNAPI void $render(::BaseActorRenderContext&, ::ActorRenderData&, ::RenderParams&);

    MCNAPI ::V2TempComponentRequirements $getV2Requirements() const;
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
#include "mc/client/renderer/actor/V2TempComponentRequirements.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class ActorRenderData;
class BaseActorRenderContext;
class BlockTessellator;
class ModelPart;
class RenderParams;
// clang-format on

class DataDrivenRenderer_tempComponent_MushroomCowAdditionalRendering : public ::DataDrivenRenderer_tempComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mMushroomMaterial;
    ::ll::TypedStorage<8, 8, ::BlockTessellator&> mBlockTessellator;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>  mAtlasTexture;
    ::ll::TypedStorage<8, 8, ::ModelPart*>        mHead;
    ::ll::TypedStorage<8, 8, ::ModelPart*>        mBody;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenRenderer_tempComponent_MushroomCowAdditionalRendering&
    operator=(DataDrivenRenderer_tempComponent_MushroomCowAdditionalRendering const&);
    DataDrivenRenderer_tempComponent_MushroomCowAdditionalRendering(
        DataDrivenRenderer_tempComponent_MushroomCowAdditionalRendering const&
    );
    DataDrivenRenderer_tempComponent_MushroomCowAdditionalRendering();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::V2TempComponentRequirements getV2Requirements() const /*override*/;

    virtual void render(
        ::BaseActorRenderContext& renderContext,
        ::ActorRenderData&        actorRenderData,
        ::RenderParams&           renderParams
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::V2TempComponentRequirements $getV2Requirements() const;

    MCAPI void
    $render(::BaseActorRenderContext& renderContext, ::ActorRenderData& actorRenderData, ::RenderParams& renderParams);
    // NOLINTEND
};
#else // @header-generator platform
class DataDrivenRenderer_tempComponent_MushroomCowAdditionalRendering {};
#endif // @header-generator platform
#endif // @header-generator platform
