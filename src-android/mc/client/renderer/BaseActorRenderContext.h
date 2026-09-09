#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/HistoricalFrameTimes.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/minecraft_renderer/resources/OffscreenCaptureDescription.h"
#include "mc/platform/brstd/copyable_function.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorBlockRenderer;
class ActorRenderDispatcher;
class BlockActorRenderDispatcher;
class DataDrivenRenderer;
class DataDrivenRendererRegistry;
class FontHandle;
class HashedString;
class HitResult;
class HudIconActorRenderer;
class IClientInstance;
class IMinecraftGame;
class IOptionRegistry;
class IVanillaRenderBlockActorComponent;
class ItemInHandRenderer;
class ItemRenderer;
class LightTexture;
class MatrixStack;
class ParticleSystemEngine;
class ScreenContext;
class SortedMeshDrawList;
class Tessellator;
class Vec2;
struct DataDrivenRendererContinuousData;
namespace LightPropagation { class LightVolumeManager; }
namespace mce { class TextureGroup; }
// clang-format on

class BaseActorRenderContext {
public:
    // BaseActorRenderContext inner types declare
    // clang-format off
    struct Impl;
    // clang-format on

    // BaseActorRenderContext inner types define
    struct Impl {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, ::OffscreenCaptureDescription> mOffscreenCaptureDescription;
        ::ll::TypedStorage<4, 12, ::Vec3>                        mCameraTargetPosition;
        ::ll::TypedStorage<4, 12, ::Vec3>                        mCameraPosition;
        ::ll::TypedStorage<4, 24, ::AABB>                        mWorldClipRegion;
        ::ll::TypedStorage<8, 488, ::HistoricalFrameTimes>       mHistoricalFrameTimes;
        // NOLINTEND
    };

    using ResetToken = ::gsl::final_action<brstd::copyable_function<void()>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                                mNumEntitiesRenderedThisFrame;
    ::ll::TypedStorage<4, 4, float>                                                mLastFrameTime;
    ::ll::TypedStorage<8, 8, ::SortedMeshDrawList*>                                mSortedMeshDrawList;
    ::ll::TypedStorage<8, 8, ::IClientInstance&>                                   mClientInstance;
    ::ll::TypedStorage<8, 8, ::IMinecraftGame&>                                    mMinecraftGame;
    ::ll::TypedStorage<8, 8, ::ScreenContext&>                                     mScreenContext;
    ::ll::TypedStorage<8, 8, ::BlockActorRenderDispatcher&>                        mBlockEntityRenderDispatcher;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ActorRenderDispatcher>>              mEntityRenderDispatcher;
    ::ll::TypedStorage<8, 8, ::ActorBlockRenderer&>                                mEntityBlockRenderer;
    ::ll::TypedStorage<8, 8, ::ItemInHandRenderer&>                                mItemInHandRenderer;
    ::ll::TypedStorage<8, 8, ::ItemRenderer&>                                      mItemRenderer;
    ::ll::TypedStorage<8, 8, ::HudIconActorRenderer&>                              mHudIconActorRenderer;
    ::ll::TypedStorage<8, 16, std::weak_ptr<LightPropagation::LightVolumeManager>> mLightVolumeManager;
    ::ll::TypedStorage<8, 8, ::ParticleSystemEngine*>                              mParticleSystemEngine;
    ::ll::TypedStorage<8, 8, ::DataDrivenRendererRegistry const*>                  mProcessedV2DataDrivenRenderers;
    ::ll::TypedStorage<8, 8, ::DataDrivenRendererContinuousData*>                  mV2DataDrivenContinuousData;
    ::ll::TypedStorage<1, 1, bool>                                                 mV2ShouldRenderActorsWithAttachables;
    ::ll::TypedStorage<8, 16, std::optional<long>>                                 mRenderUniqueIdOverride;
    ::ll::TypedStorage<8, 8, std::unique_ptr<BaseActorRenderContext::Impl>>        mImpl;
    ::ll::TypedStorage<4, 4, float const>                                          mFrameAlpha;
    ::ll::TypedStorage<4, 4, float>                                                mActorDitheringMaxDistance;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsOnScreen;
    ::ll::TypedStorage<1, 1, bool>                                                 mUpdateBonesAndEffects;
    ::ll::TypedStorage<1, 1, bool>                                                 mUpdateEffects;
    ::ll::TypedStorage<1, 1, bool>                                                 mIgnoresLighting;
    ::ll::TypedStorage<1, 1, bool>                                                 mForceLightingOn;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsRenderingOnMap;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseActorRenderContext& operator=(BaseActorRenderContext const&);
    BaseActorRenderContext(BaseActorRenderContext const&);
    BaseActorRenderContext();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BaseActorRenderContext();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BaseActorRenderContext(::ScreenContext&, ::IClientInstance&, ::IMinecraftGame&);

    MCNAPI float getActorDitheringMaxDistance() const;

    MCNAPI ::BlockActorRenderDispatcher& getBlockEntityRenderDispatcher();

    MCNAPI ::Actor* getCameraActor();

    MCNAPI ::Vec3 const& getCameraPosition() const;

    MCNAPI ::Vec2 getCameraRotation(float const) const;

    MCNAPI ::Vec3 const& getCameraTargetPosition() const;

    MCNAPI ::IClientInstance const& getClient() const;

    MCNAPI ::IClientInstance& getClient();

    MCNAPI std::shared_ptr<DataDrivenRenderer> getDataDrivenRenderer(::HashedString const&) const;

    MCNAPI ::ActorBlockRenderer& getEntityBlockRenderer();

    MCNAPI std::shared_ptr<ActorRenderDispatcher> getEntityRenderDispatcher();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const FontHandle>> getFontHandle();

    MCNAPI float getFrameAlpha(::Actor const&) const;

    MCNAPI float getFrameAlpha(::Actor const*) const;

    MCNAPI float getFrameAlpha(::IVanillaRenderBlockActorComponent const&) const;

    MCNAPI ::HistoricalFrameTimes const& getHistoricalFrameTimes() const;

    MCNAPI ::HudIconActorRenderer& getHudIconActorRenderer();

    MCNAPI ::ItemInHandRenderer& getItemInHandRenderer();

    MCNAPI ::ItemRenderer& getItemRenderer();

    MCNAPI ::LightTexture* getLightTexture() const;

    MCNAPI std::weak_ptr<LightPropagation::LightVolumeManager> getLightVolumeManager() const;

    MCNAPI ::OffscreenCaptureDescription const& getOffscreenCaptureDescription() const;

    MCNAPI ::IOptionRegistry& getOptions();

    MCNAPI ::ParticleSystemEngine* getParticleSystemEngine();

    MCNAPI ::MatrixStack& getProjectionMatrix();

    MCNAPI std::optional<long> getRenderUniqueIdOverride() const;

    MCNAPI ::ScreenContext& getScreenContext() const;

    MCNAPI ::Tessellator& getTessellator();

    MCNAPI std::shared_ptr<mce::TextureGroup> getTextureGroup();

    MCNAPI ::DataDrivenRendererContinuousData* getV2ContinuousData();

    MCNAPI ::DataDrivenRendererRegistry const* getV2DataDrivenRendererRegistry() const;

    MCNAPI bool getV2ShouldRenderActorsWithAttachables() const;

    MCNAPI ::MatrixStack& getViewMatrix();

    MCNAPI ::MatrixStack& getWorldMatrix();

    MCNAPI bool isDeferredUpscaling() const;

    MCNAPI bool isForceLightingOn() const;

    MCNAPI bool isIgnoringLighting() const;

    MCNAPI bool isLightingOff() const;

    MCNAPI bool isRenderingOnMap() const;

    MCNAPI bool isSimple();

    MCNAPI ::gsl::final_action<brstd::copyable_function<void()>> overrideIgnoreLighting(bool);

    MCNAPI ::BaseActorRenderContext overrideScreenContext(::ScreenContext&) const;

    MCNAPI void setActorDitheringMaxDistance(float);

    MCNAPI void setCameraPosition(::Vec3 const&);

    MCNAPI void setCameraTargetPosition(::Vec3 const&);

    MCNAPI void setForceLightingOn(bool);

    MCNAPI void setHistoricalFrameTimes(::HistoricalFrameTimes const&);

    MCNAPI void setIgnoreLighting(bool);

    MCNAPI void setIsOnScreen(bool);

    MCNAPI void setOffscreenCaptureDescription(::OffscreenCaptureDescription const&);

    MCNAPI void setRenderUniqueIdOverride(long);

    MCNAPI void setRenderUniqueIdOverride(std::optional<long>);

    MCNAPI void setRenderingOnMap(bool);

    MCNAPI void setUpdateBonesAndEffects(bool);

    MCNAPI void setUpdateEffects(bool);

    MCNAPI void setWorldClipRegion(::AABB const&);

    MCNAPI bool shouldUpdateBonesAndEffects() const;

    MCNAPI bool shouldUpdateEffects() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScreenContext&, ::IClientInstance&, ::IMinecraftGame&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
