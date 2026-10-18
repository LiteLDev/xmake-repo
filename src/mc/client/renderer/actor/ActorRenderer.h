#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/BaseActorRenderer.h"
#include "mc/deps/core/container/small_vector_base.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorRenderData;
class BaseActorRenderContext;
class Model;
class RenderParams;
class Tessellator;
class Vec2;
struct ActorTextureInfo;
struct ActorUniqueID;
struct NameTagRenderObject;
struct RopePoints;
namespace mce { class Color; }
namespace mce { class Mesh; }
namespace mce { class TextureGroup; }
// clang-format on

class ActorRenderer : public ::BaseActorRenderer, public ::std::enable_shared_from_this<ActorRenderer> {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/BaseActorRenderer.h"
#include "mc/deps/core/container/small_vector_base.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorRenderData;
class BaseActorRenderContext;
class Model;
class RenderParams;
class Vec2;
class Vec3;
struct ActorTextureInfo;
struct ActorUniqueID;
struct RopePoints;
namespace mce { class Mesh; }
namespace mce { class TextureGroup; }
// clang-format on

class ActorRenderer : public ::BaseActorRenderer, public ::std::enable_shared_from_this<::ActorRenderer> {
#else // @header-generator platform
class ActorRenderer {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // ActorRenderer inner types declare
    // clang-format off
    struct LeashPins;
    // clang-format on

    // ActorRenderer inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct LeashPins {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3> start;
        ::ll::TypedStorage<4, 12, ::Vec3> end;
        ::ll::TypedStorage<4, 12, ::Vec3> nextStart;
        ::ll::TypedStorage<4, 12, ::Vec3> nextEnd;
        ::ll::TypedStorage<4, 12, ::Vec3> startOffsetPos;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                mRenderingInventory;
    ::ll::TypedStorage<1, 1, bool const>                          mHasWaterHole;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                 mEntityAlphatestMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                 mEntityAlphatestGlintMaterial;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                  mGlintTexture;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                  mAtlasTexture;
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::TextureGroup>> mTextureGroup;
    ::ll::TypedStorage<4, 24, ::AABB>                             mBaseRenderBounds;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Model>>             mModel;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActorRenderer();

    virtual void render(::BaseActorRenderContext&, ::ActorRenderData&) = 0;

    virtual void renderDebug(::BaseActorRenderContext&, ::ActorRenderData&);

    virtual void renderEffects(::BaseActorRenderContext&, ::ActorRenderData&);

    virtual void renderLeash(::BaseActorRenderContext&, ::ActorRenderData&);

    virtual void renderWaterHole(::BaseActorRenderContext&, ::ActorRenderData&);

    virtual void addAdditionalRenderingIfNeeded(std::shared_ptr<mce::TextureGroup>);

    virtual ::AABB getRenderBounds(::Actor const&) const;

    virtual void getLeashOffsets(::Actor&, float, float, float, bool, ::Bedrock::small_vector_base<Vec3>&) const;

    virtual void setIsOnScreen(::Actor&, bool, float) const;

    virtual bool shouldUpdateBonesAndEffectsIfOffScreen(::RenderParams&) const;

    virtual bool shouldUpdateEffectsIfOffScreen(::RenderParams&) const;

    virtual bool shouldHideHeldItems(::RenderParams&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorRenderer(std::shared_ptr<mce::TextureGroup>, ::Vec2 const&, ::Vec3 const&, bool);

    MCNAPI
    ActorRenderer(std::shared_ptr<Model>, std::shared_ptr<mce::TextureGroup>, ::Vec2 const&, ::Vec3 const&, bool);

    MCNAPI ::mce::TexturePtr getAtlasTexture();

    MCNAPI ::Model* getModel();

    MCNAPI void renderGui(::BaseActorRenderContext&, ::ActorRenderData&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _addLeashPinToOutput(
        ::Vec3 const&,
        ::Vec3 const&,
        ::Actor const&,
        ::Actor const*,
        ::ActorUniqueID const,
        ulong const,
        float const,
        ::Bedrock::small_vector_base<ActorRenderer::LeashPins>&
    );

    MCNAPI static void _drawRopeRange(
        ::BaseActorRenderContext&,
        int,
        int,
        ::Vec3 const&,
        ::Vec3 const&,
        ::Vec3 const&,
        ::RopePoints const&,
        ::mce::TexturePtr&,
        float,
        ::Vec3*,
        ::Vec3*
    );

    MCNAPI static void _getLeashPins(
        float const,
        ::BaseActorRenderContext&,
        ::Actor&,
        ::Bedrock::small_vector_base<ActorRenderer::LeashPins>&,
        ::Bedrock::small_vector_base<Vec3>&
    );

    MCNAPI static bool isDitheringEnabled(::BaseActorRenderContext const&, ::Actor const&);

    MCNAPI static void renderDebugAttachPos(int, ::Actor const&);

    MCNAPI static void renderFlame(::BaseActorRenderContext&, ::ActorRenderData&);

    MCNAPI static void
    renderLeash(::BaseActorRenderContext&, ::ActorRenderData&, ::Bedrock::small_vector_base<ActorRenderer::LeashPins>&);

    MCNAPI static void resetTextures();

    MCNAPI static bool shouldRenderLeash(::Actor&, bool);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Vec2 const& DEFAULT_RENDER_BOUNDS();

    MCNAPI static ::mce::MaterialPtr& mFlameMaterial();

    MCNAPI static ::mce::Mesh& mFlameMesh();

    MCNAPI static ::ActorTextureInfo& mFlameTexture();

    MCNAPI static ::mce::MaterialPtr& mLeashMat();

    MCNAPI static ::mce::TexturePtr& mLeashTexture();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<mce::TextureGroup>, ::Vec2 const&, ::Vec3 const&, bool);

    MCNAPI void* $ctor(std::shared_ptr<Model>, std::shared_ptr<mce::TextureGroup>, ::Vec2 const&, ::Vec3 const&, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $renderDebug(::BaseActorRenderContext&, ::ActorRenderData&);

    MCNAPI void $renderEffects(::BaseActorRenderContext&, ::ActorRenderData&);

    MCNAPI void $renderLeash(::BaseActorRenderContext&, ::ActorRenderData&);

    MCNAPI void $renderWaterHole(::BaseActorRenderContext&, ::ActorRenderData&);

    MCNAPI void $addAdditionalRenderingIfNeeded(std::shared_ptr<mce::TextureGroup>);

    MCNAPI ::AABB $getRenderBounds(::Actor const&) const;

    MCNAPI void $getLeashOffsets(::Actor&, float, float, float, bool, ::Bedrock::small_vector_base<Vec3>&) const;

    MCNAPI void $setIsOnScreen(::Actor&, bool, float) const;

    MCNAPI bool $shouldUpdateBonesAndEffectsIfOffScreen(::RenderParams&) const;

    MCNAPI bool $shouldUpdateEffectsIfOffScreen(::RenderParams&) const;

    MCNAPI bool $shouldHideHeldItems(::RenderParams&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct LeashPins {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnkadd485;
        ::ll::UntypedStorage<4, 12> mUnk9c3e04;
        ::ll::UntypedStorage<4, 12> mUnk95cfb7;
        ::ll::UntypedStorage<4, 12> mUnkc010bc;
        ::ll::UntypedStorage<4, 12> mUnk8a6402;
        // NOLINTEND

    public:
        // prevent constructor by default
        LeashPins& operator=(LeashPins const&);
        LeashPins(LeashPins const&);
        LeashPins();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                    mRenderingInventory;
    ::ll::TypedStorage<1, 1, bool const>                              mHasWaterHole;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                     mEntityAlphatestMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                     mEntityAlphatestGlintMaterial;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                      mGlintTexture;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                      mAtlasTexture;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::TextureGroup>> mTextureGroup;
    ::ll::TypedStorage<4, 24, ::AABB>                                 mBaseRenderBounds;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Model>>             mModel;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActorRenderer() /*override*/;

    virtual void render(::BaseActorRenderContext& renderContext, ::ActorRenderData& actorRenderData) = 0;

    virtual void renderDebug(::BaseActorRenderContext& renderContext, ::ActorRenderData& entityRenderData);

    virtual void renderEffects(::BaseActorRenderContext& renderContext, ::ActorRenderData& actorRenderData);

    virtual void renderLeash(::BaseActorRenderContext& renderContext, ::ActorRenderData& entityRenderData);

    virtual void renderWaterHole(::BaseActorRenderContext& renderContext, ::ActorRenderData& entityRenderData);

    virtual void addAdditionalRenderingIfNeeded(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    virtual ::AABB getRenderBounds(::Actor const& entity) const;

    virtual void getLeashOffsets(
        ::Actor&,
        float                                 yRot,
        float                                 yRotPrev,
        float                                 a,
        bool                                  legacyOffset,
        ::Bedrock::small_vector_base<::Vec3>& output
    ) const;

    virtual void setIsOnScreen(::Actor&, bool, float) const;

    virtual bool shouldUpdateBonesAndEffectsIfOffScreen(::RenderParams& renderParams) const;

    virtual bool shouldUpdateEffectsIfOffScreen(::RenderParams& renderParams) const;

    virtual bool shouldHideHeldItems(::RenderParams& renderParams) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorRenderer(
        ::std::shared_ptr<::mce::TextureGroup> textureGroup,
        ::Vec2 const&                          renderDim,
        ::Vec3 const&                          renderDimOffset,
        bool                                   hasWaterHole
    );

    MCAPI ActorRenderer(
        ::std::shared_ptr<::Model>             model,
        ::std::shared_ptr<::mce::TextureGroup> textureGroup,
        ::Vec2 const&                          renderDim,
        ::Vec3 const&                          renderDimOffset,
        bool                                   hasWaterHole
    );

    MCAPI void renderGui(::BaseActorRenderContext& renderContext, ::ActorRenderData& actorRenderData);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _addLeashPinToOutput(
        ::Vec3 const&                                             fromLeashes,
        ::Vec3 const&                                             toLeashes,
        ::Actor const&                                            actor,
        ::Actor const*                                            roper,
        ::ActorUniqueID const                                     roperID,
        uint64 const                                              ropeIndex,
        float const                                               actorFrameAlpha,
        ::Bedrock::small_vector_base<::ActorRenderer::LeashPins>& output
    );

    MCAPI static void _drawRopeRange(
        ::BaseActorRenderContext& renderContext,
        int                       begin,
        int                       end,
        ::Vec3 const&             basisX,
        ::Vec3 const&             basisY,
        ::Vec3 const&             deltaNorm,
        ::RopePoints const&       nodes,
        ::mce::TexturePtr&        tex,
        float                     a,
        ::Vec3*                   startPoint,
        ::Vec3*                   endPoint
    );

    MCAPI static void _getLeashPins(
        float                                                     actorFrameAlpha,
        ::BaseActorRenderContext&                                 renderContext,
        ::Actor&                                                  actor,
        ::Bedrock::small_vector_base<::ActorRenderer::LeashPins>& output,
        ::Bedrock::small_vector_base<::Vec3>&                     leashFromOffsets
    );

    MCAPI static bool isDitheringEnabled(::BaseActorRenderContext const& renderContext, ::Actor const& actor);

    MCAPI static void renderDebugAttachPos(int renderAttachPos, ::Actor const& mob);

    MCAPI static void renderFlame(::BaseActorRenderContext& renderContext, ::ActorRenderData& entityRenderData);

    MCAPI static void renderLeash(
        ::BaseActorRenderContext&                                 renderContext,
        ::ActorRenderData&                                        entityRenderData,
        ::Bedrock::small_vector_base<::ActorRenderer::LeashPins>& allLeashPins
    );

    MCAPI static void resetTextures();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Vec2 const& DEFAULT_RENDER_BOUNDS();

    MCAPI static ::mce::MaterialPtr& mFlameMaterial();

    MCAPI static ::mce::Mesh& mFlameMesh();

    MCAPI static ::ActorTextureInfo& mFlameTexture();

    MCAPI static ::mce::MaterialPtr& mLeashMat();

    MCAPI static ::mce::TexturePtr& mLeashTexture();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::mce::TextureGroup> textureGroup,
        ::Vec2 const&                          renderDim,
        ::Vec3 const&                          renderDimOffset,
        bool                                   hasWaterHole
    );

    MCAPI void* $ctor(
        ::std::shared_ptr<::Model>             model,
        ::std::shared_ptr<::mce::TextureGroup> textureGroup,
        ::Vec2 const&                          renderDim,
        ::Vec3 const&                          renderDimOffset,
        bool                                   hasWaterHole
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $renderDebug(::BaseActorRenderContext& renderContext, ::ActorRenderData& entityRenderData);

    MCFOLD void $renderEffects(::BaseActorRenderContext& renderContext, ::ActorRenderData& actorRenderData);

    MCAPI void $renderLeash(::BaseActorRenderContext& renderContext, ::ActorRenderData& entityRenderData);

    MCFOLD void $renderWaterHole(::BaseActorRenderContext& renderContext, ::ActorRenderData& entityRenderData);

    MCFOLD void $addAdditionalRenderingIfNeeded(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCAPI ::AABB $getRenderBounds(::Actor const& entity) const;

    MCAPI void $getLeashOffsets(
        ::Actor&,
        float                                 yRot,
        float                                 yRotPrev,
        float                                 a,
        bool                                  legacyOffset,
        ::Bedrock::small_vector_base<::Vec3>& output
    ) const;

    MCFOLD void $setIsOnScreen(::Actor&, bool, float) const;

    MCFOLD bool $shouldUpdateBonesAndEffectsIfOffScreen(::RenderParams& renderParams) const;

    MCFOLD bool $shouldUpdateEffectsIfOffScreen(::RenderParams& renderParams) const;

    MCFOLD bool $shouldHideHeldItems(::RenderParams& renderParams) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    struct LeashPins {};
#endif // @header-generator platform
#endif // @header-generator platform
};
