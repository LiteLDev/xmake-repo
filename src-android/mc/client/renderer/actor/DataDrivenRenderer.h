#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/ActorRenderer.h"
#include "mc/client/renderer/actor/V2TempComponentRequirements.h"
#include "mc/deps/core/container/small_vector_base.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class ActorRenderData;
class ActorResourceDefinition;
class BaseActorRenderContext;
class BlockTessellator;
class DataDrivenModel;
class DataDrivenRenderer_tempComponent;
class Matrix;
class Mob;
class Model;
class RenderParams;
class SemVersionView;
class Vec3;
namespace mce { class TextureGroup; }
// clang-format on

class DataDrivenRenderer : public ::ActorRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<DataDrivenRenderer_tempComponent>>> mTempComponents;
    ::ll::TypedStorage<8, 40, ::HashedString const>                                           mName;
    ::ll::TypedStorage<1, 1, bool const>                                                      mIsAttachable;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                                              mDefaultSkin;
    ::ll::TypedStorage<8, 16, ::ExpressionNode> mUpdateBonesAndEffectsIfOffScreen;
    ::ll::TypedStorage<8, 16, ::ExpressionNode> mUpdateEffectsIfOffScreen;
    ::ll::TypedStorage<8, 16, ::ExpressionNode> mHideHeldItems;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataDrivenRenderer();

    virtual void render(::BaseActorRenderContext&, ::ActorRenderData&);

    virtual void renderEffects(::BaseActorRenderContext&, ::ActorRenderData&);

    virtual void addAdditionalRenderingIfNeeded(std::shared_ptr<mce::TextureGroup>);

    virtual ::AABB getRenderBounds(::Actor const&) const;

    virtual void getLeashOffsets(::Actor&, float, float, float, bool, ::Bedrock::small_vector_base<Vec3>&) const;

    virtual void setIsOnScreen(::Actor&, bool const, float) const;

    virtual bool shouldUpdateBonesAndEffectsIfOffScreen(::RenderParams&) const;

    virtual bool shouldUpdateEffectsIfOffScreen(::RenderParams&) const;

    virtual bool shouldHideHeldItems(::RenderParams&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DataDrivenRenderer(std::shared_ptr<ActorResourceDefinition>, std::shared_ptr<mce::TextureGroup>);

    MCNAPI void addGuardianAdditionalRendering();

    MCNAPI void addHumanoidAdditionalRendering(std::shared_ptr<mce::TextureGroup>);

    MCNAPI void addMinecartAdditionalRendering(::BlockTessellator&);

    MCNAPI bool armorHidden() const;

    MCNAPI bool attachablesEnabled() const;

    MCNAPI ::DataDrivenModel const& getModel() const;

    MCNAPI ::DataDrivenModel& getModel();

    MCNAPI std::shared_ptr<DataDrivenModel> getModelShared();

    MCNAPI ::V2TempComponentRequirements getV2TempComponentRequirement() const;

    MCNAPI bool isAttachable() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void getLeashOffsets(::Actor&, bool, ::Bedrock::small_vector_base<Vec3>&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<ActorResourceDefinition>, std::shared_ptr<mce::TextureGroup>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $render(::BaseActorRenderContext&, ::ActorRenderData&);

    MCNAPI void $renderEffects(::BaseActorRenderContext&, ::ActorRenderData&);

    MCNAPI void $addAdditionalRenderingIfNeeded(std::shared_ptr<mce::TextureGroup>);

    MCNAPI ::AABB $getRenderBounds(::Actor const&) const;

    MCNAPI void $getLeashOffsets(::Actor&, float, float, float, bool, ::Bedrock::small_vector_base<Vec3>&) const;

    MCNAPI void $setIsOnScreen(::Actor&, bool const, float) const;

    MCNAPI bool $shouldUpdateBonesAndEffectsIfOffScreen(::RenderParams&) const;

    MCNAPI bool $shouldUpdateEffectsIfOffScreen(::RenderParams&) const;

    MCNAPI bool $shouldHideHeldItems(::RenderParams&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
