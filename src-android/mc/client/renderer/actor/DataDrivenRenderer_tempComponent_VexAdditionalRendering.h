#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/DataDrivenRenderer_tempComponent.h"
#include "mc/client/renderer/actor/V2TempComponentRequirements.h"
#include "mc/deps/renderer/MatrixStack.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorRenderData;
class BaseActorRenderContext;
class BoneOrientation;
class DataDrivenRenderer;
class HashedString;
class ItemStack;
class Mob;
class ModelPart;
class RenderParams;
// clang-format on

class DataDrivenRenderer_tempComponent_VexAdditionalRendering : public ::DataDrivenRenderer_tempComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<DataDrivenRenderer>> mRenderer;
    ::ll::TypedStorage<8, 8, ::ModelPart*>                       mRightArm;
    ::ll::TypedStorage<8, 8, ::ModelPart*>                       mRightItem;
    ::ll::TypedStorage<8, 8, ::ModelPart*>                       mLeftArm;
    ::ll::TypedStorage<1, 2, std::optional<bool>>                mHeldItemIgnoresLighting;
    ::ll::TypedStorage<1, 2, std::optional<bool>>                mRenderLeftHandItem;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenRenderer_tempComponent_VexAdditionalRendering();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataDrivenRenderer_tempComponent_VexAdditionalRendering();

    virtual void render(::BaseActorRenderContext&, ::ActorRenderData&, ::RenderParams&);

    virtual ::V2TempComponentRequirements getV2Requirements() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _renderParentedItemInHand(
        ::Mob&,
        ::HashedString const&,
        ::ItemStack const&,
        ::BaseActorRenderContext&,
        std::vector<BoneOrientation> const&,
        ::MatrixStack::MatrixStackRef&
    ) const;
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
