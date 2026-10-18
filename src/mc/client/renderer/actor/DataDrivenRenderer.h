#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/actor/ActorRenderer.h"
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
class DataDrivenRenderer_tempComponent;
class RenderParams;
class Vec3;
namespace mce { class TextureGroup; }
// clang-format on

class DataDrivenRenderer : public ::ActorRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::DataDrivenRenderer_tempComponent>>> mTempComponents;
    ::ll::TypedStorage<8, 48, ::HashedString const>                                                 mName;
    ::ll::TypedStorage<1, 1, bool const>                                                            mIsAttachable;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                                                    mDefaultSkin;
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
    virtual void getLeashOffsets(
        ::Actor& actor,
        float,
        float,
        float,
        bool                                  legacyOffset,
        ::Bedrock::small_vector_base<::Vec3>& output
    ) const /*override*/;

    virtual void render(::BaseActorRenderContext& renderContext, ::ActorRenderData& actorRenderData) /*override*/;

    virtual void
    renderEffects(::BaseActorRenderContext& renderContext, ::ActorRenderData& actorRenderData) /*override*/;

    virtual ::AABB getRenderBounds(::Actor const& entity) const /*override*/;

    virtual void addAdditionalRenderingIfNeeded(::std::shared_ptr<::mce::TextureGroup> textureGroup) /*override*/;

    virtual void setIsOnScreen(::Actor& actor, bool const isOnScreen, float distance) const /*override*/;

    virtual bool shouldUpdateBonesAndEffectsIfOffScreen(::RenderParams& renderParams) const /*override*/;

    virtual bool shouldUpdateEffectsIfOffScreen(::RenderParams& renderParams) const /*override*/;

    virtual bool shouldHideHeldItems(::RenderParams& renderParams) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DataDrivenRenderer(
        ::std::shared_ptr<::ActorResourceDefinition> definition,
        ::std::shared_ptr<::mce::TextureGroup>       textureGroup
    );

    MCAPI void addGuardianAdditionalRendering();

    MCAPI void addHumanoidAdditionalRendering(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCAPI void addMinecartAdditionalRendering(::BlockTessellator& commonBlockRenderer);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void getLeashOffsets(::Actor& actor, bool legacyOffset, ::Bedrock::small_vector_base<::Vec3>& output);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::shared_ptr<::ActorResourceDefinition> definition, ::std::shared_ptr<::mce::TextureGroup> textureGroup);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $getLeashOffsets(
        ::Actor& actor,
        float,
        float,
        float,
        bool                                  legacyOffset,
        ::Bedrock::small_vector_base<::Vec3>& output
    ) const;

    MCAPI void $render(::BaseActorRenderContext& renderContext, ::ActorRenderData& actorRenderData);

    MCAPI void $renderEffects(::BaseActorRenderContext& renderContext, ::ActorRenderData& actorRenderData);

    MCAPI ::AABB $getRenderBounds(::Actor const& entity) const;

    MCAPI void $addAdditionalRenderingIfNeeded(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCAPI void $setIsOnScreen(::Actor& actor, bool const isOnScreen, float distance) const;

    MCAPI bool $shouldUpdateBonesAndEffectsIfOffScreen(::RenderParams& renderParams) const;

    MCAPI bool $shouldUpdateEffectsIfOffScreen(::RenderParams& renderParams) const;

    MCAPI bool $shouldHideHeldItems(::RenderParams& renderParams) const;
    // NOLINTEND
};
#else // @header-generator platform
class DataDrivenRenderer {};
#endif // @header-generator platform
#endif // @header-generator platform
