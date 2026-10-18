#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialVariants.h"
#include "mc/util/molang/ExpressionNode.h"
#include "mc/world/actor/ModelPartLocator.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseActorRenderContext;
class BoneOrientation;
class ClientPBRTextureData;
class DataDrivenGeometry;
class Mob;
class ModelPart;
class RenderController;
class RenderParams;
class ScreenContext;
struct ActorTextureInfo;
struct MERSUniformData;
struct PBRTexturePtrs;
namespace dragon { struct RenderMetadata; }
namespace mce { class MaterialPtr; }
namespace mce { struct ClientTexture; }
// clang-format on

class Model : public ::AppPlatformListener {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 12, ::Vec3> mLeashOffset;
    ::ll::TypedStorage<4, 4, float> mAttackTime;
    ::ll::TypedStorage<1, 1, bool> mYoung;
    ::ll::TypedStorage<1, 1, bool> mRiding;
    ::ll::TypedStorage<8, 24, std::vector<ModelPart*>> mAllParts;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, HashedString>> mParticleEffectsMap;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, ModelPartLocator>> mLocators;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<std::shared_ptr<RenderController>, ExpressionNode>>> mRenderControllers;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<DataDrivenGeometry>>> mGeometries;
    ::ll::TypedStorage<8, 8, ulong> mQueryableGeometryIndex;
    ::ll::TypedStorage<4, 24, ::AABB> mAABB;
    ::ll::TypedStorage<8, 32, ::MaterialVariants> mMaterialVariants;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Model();

    virtual void onAppSuspended();

    virtual void clear();

    virtual void preDraw(::ScreenContext&);

    virtual void postDraw(::ScreenContext&);

    virtual void render(::BaseActorRenderContext&, ::Actor&, float, float, float, float, float, float);

    virtual void render(::BaseActorRenderContext&);

    virtual void render(::ScreenContext&, ::Actor&, float, float, float, float, float, float);

    virtual void render(::ScreenContext&);

    virtual void setupAnim();

    virtual void setupAnim(float, float, float, float, float, float);

    virtual void prepareMobModel(::Mob&, float, float, float);

    virtual float getHeightAdjustment() const;

    virtual ::AABB buildAABB() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Model();

    MCNAPI void assignPartToGroup(::ModelPart&, bool, int, ::DataDrivenGeometry*);

    MCNAPI void dataDrivenDraw(
        ::RenderParams&,
        ::dragon::RenderMetadata const&,
        ::gsl::not_null<const RenderController*>,
        ::DataDrivenGeometry&,
        ::ClientPBRTextureData const&,
        std::optional<MERSUniformData> const&
    );

    MCNAPI void draw(::ScreenContext&, ::dragon::RenderMetadata const&, ::mce::ClientTexture const&);

    MCNAPI void draw(::ScreenContext&, ::dragon::RenderMetadata const&, ::ActorTextureInfo const&);

    MCNAPI void draw(
        ::ScreenContext&,
        ::dragon::RenderMetadata const&,
        ::ClientPBRTextureData const&,
        std::optional<MERSUniformData> const&
    );

    MCNAPI void draw(
        ::BaseActorRenderContext&,
        ::dragon::RenderMetadata const&,
        ::ClientPBRTextureData const&,
        std::optional<MERSUniformData> const&
    );

    MCNAPI void draw(
        ::ScreenContext&,
        ::dragon::RenderMetadata const&,
        ::ClientPBRTextureData const&,
        ::MaterialVariants const&,
        std::optional<MERSUniformData> const&
    );

    MCNAPI ::AABB getAABB() const;

    MCNAPI std::vector<std::shared_ptr<DataDrivenGeometry>> const& getGeometries() const;

    MCNAPI ::Vec3 getLeashOffsetPosition() const;

    MCNAPI std::vector<std::pair<std::shared_ptr<RenderController>, ExpressionNode>>& getRenderControllers();

    MCNAPI bool hasBone(::HashedString const&) const;

    MCNAPI void prepareSkinning();

    MCNAPI void registerParts(::ModelPart&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onAppSuspended();

    MCNAPI void $clear();

    MCNAPI void $preDraw(::ScreenContext&);

    MCNAPI void $postDraw(::ScreenContext&);

    MCNAPI void $render(::BaseActorRenderContext&, ::Actor&, float, float, float, float, float, float);

    MCNAPI void $render(::BaseActorRenderContext&);

    MCNAPI void $render(::ScreenContext&, ::Actor&, float, float, float, float, float, float);

    MCNAPI void $render(::ScreenContext&);

    MCNAPI void $setupAnim();

    MCNAPI void $setupAnim(float, float, float, float, float, float);

    MCNAPI void $prepareMobModel(::Mob&, float, float, float);

    MCNAPI float $getHeightAdjustment() const;

    MCNAPI ::AABB $buildAABB() const;
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
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialVariants.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseActorRenderContext;
class ClientPBRTextureData;
class DataDrivenGeometry;
class ExpressionNode;
class Mob;
class ModelPart;
class ModelPartLocator;
class RenderController;
class RenderParams;
class ScreenContext;
struct ActorTextureInfo;
struct MERSUniformData;
namespace dragon { struct RenderMetadata; }
namespace mce { struct ClientTexture; }
// clang-format on

class Model : public ::AppPlatformListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3>                                                   mLeashOffset;
    ::ll::TypedStorage<4, 4, float>                                                     mAttackTime;
    ::ll::TypedStorage<1, 1, bool>                                                      mYoung;
    ::ll::TypedStorage<1, 1, bool>                                                      mRiding;
    ::ll::TypedStorage<8, 24, ::std::vector<::ModelPart*>>                              mAllParts;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::HashedString>>     mParticleEffectsMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::ModelPartLocator>> mLocators;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::std::shared_ptr<::RenderController>, ::ExpressionNode>>>
                                                                                      mRenderControllers;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::DataDrivenGeometry>>> mGeometries;
    ::ll::TypedStorage<8, 8, uint64>                                                  mQueryableGeometryIndex;
    ::ll::TypedStorage<4, 24, ::AABB>                                                 mAABB;
    ::ll::TypedStorage<8, 32, ::MaterialVariants>                                     mMaterialVariants;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Model() /*override*/;

    virtual void clear();

    virtual void onAppSuspended() /*override*/;

    virtual void preDraw(::ScreenContext&);

    virtual void postDraw(::ScreenContext&);

    virtual void render(::ScreenContext& screenContext);

    virtual void render(
        ::ScreenContext& screenContext,
        ::Actor&         entity,
        float            time,
        float            r,
        float            bob,
        float            yRot,
        float            xRot,
        float            scale
    );

    virtual void render(::BaseActorRenderContext&);

    virtual void
    render(::BaseActorRenderContext& baseActorRenderContext, ::Actor&, float, float, float, float, float, float);

    virtual void setupAnim(float time, float r, float bob, float yRot, float xRot, float scale);

    virtual void setupAnim();

    virtual void prepareMobModel(::Mob&, float, float, float);

    virtual float getHeightAdjustment() const;

    virtual ::AABB buildAABB() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Model();

    MCAPI void assignPartToGroup(
        ::ModelPart&          part,
        bool                  forceToUniqueGroup,
        int                   skinnedMeshGroupIdentifier,
        ::DataDrivenGeometry* owningGeometry
    );

    MCAPI void dataDrivenDraw(
        ::RenderParams&                            renderParams,
        ::dragon::RenderMetadata const&            renderMetadata,
        ::gsl::not_null<::RenderController const*> renderController,
        ::DataDrivenGeometry&                      geo,
        ::ClientPBRTextureData const&              textureData,
        ::std::optional<::MERSUniformData> const&  mersUniforms
    );

    MCAPI void draw(
        ::ScreenContext&                screenContext,
        ::dragon::RenderMetadata const& renderMetadata,
        ::mce::ClientTexture const&     texture
    );

    MCAPI void draw(
        ::ScreenContext&                screenContext,
        ::dragon::RenderMetadata const& renderMetadata,
        ::ActorTextureInfo const&       textureInfo
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $clear();

    MCAPI void $onAppSuspended();

    MCFOLD void $preDraw(::ScreenContext&);

    MCFOLD void $postDraw(::ScreenContext&);

    MCFOLD void $render(::ScreenContext& screenContext);

    MCAPI void $render(
        ::ScreenContext& screenContext,
        ::Actor&         entity,
        float            time,
        float            r,
        float            bob,
        float            yRot,
        float            xRot,
        float            scale
    );

    MCFOLD void $render(::BaseActorRenderContext&);

    MCAPI void
    $render(::BaseActorRenderContext& baseActorRenderContext, ::Actor&, float, float, float, float, float, float);

    MCFOLD void $setupAnim(float time, float r, float bob, float yRot, float xRot, float scale);

    MCFOLD void $setupAnim();

    MCFOLD void $prepareMobModel(::Mob&, float, float, float);

    MCAPI float $getHeightAdjustment() const;

    MCAPI ::AABB $buildAABB() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class Model {};
#endif // @header-generator platform
#endif // @header-generator platform
