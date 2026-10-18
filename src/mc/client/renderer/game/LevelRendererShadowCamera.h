#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/LevelRendererCameraType.h"
#include "mc/client/renderer/game/LevelRendererCameraListeners.h"
#include "mc/client/renderer/game/PreviousShadowCascade.h"
#include "mc/client/renderer/game/ShadowRenderingParameters.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/minecraft_renderer/game/LevelCullerType.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class IClientInstance;
class Level;
class LevelRenderer;
class OptionRegistry;
class Player;
class ScreenContext;
class WeakEntityRef;
struct LevelRenderPreRenderUpdateParameters;
struct ShadowCascadeState;
namespace mce::framebuilder { struct ShadowParameters; }
// clang-format on

class LevelRendererShadowCamera : public ::LevelRendererCameraListeners {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/game/LevelRendererCameraListeners.h"
#include "mc/client/renderer/game/LevelRendererCameraType.h"
#include "mc/deps/minecraft_renderer/game/LevelCullerType.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class Player;
class ScreenContext;
class Vec3;
struct LevelRenderPreRenderUpdateParameters;
struct ShadowCascadeState;
namespace mce::framebuilder { struct ShadowParameters; }
// clang-format on

class LevelRendererShadowCamera : public ::LevelRendererCameraListeners {
#else // @header-generator platform
class LevelRendererShadowCamera {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // LevelRendererShadowCamera inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class QueueShadowRenders : int {
        DoNotQueue  = 0,
        ShouldQueue = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 248, ::ShadowRenderingParameters>                      mRenderingParameters;
    ::ll::TypedStorage<4, 12, ::Vec3>                                            mShadowCameraDir;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>>           mPlayerPosition;
    ::ll::TypedStorage<4, 4, float>                                              mOffscreenShadowCasterRange;
    ::ll::TypedStorage<4, 4, ::LevelRendererShadowCamera::QueueShadowRenders>    mShouldQueueShadowRenders;
    ::ll::TypedStorage<8, 24, std::vector<std::optional<PreviousShadowCascade>>> mPreviousShadowCascades;
    ::ll::TypedStorage<8, 8, ::IClientInstance&>                                 mClientInstance;
    ::ll::TypedStorage<8, 8, ::LevelRenderer&>                                   mLevelRenderer;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelRendererShadowCamera& operator=(LevelRendererShadowCamera const&);
    LevelRendererShadowCamera(LevelRendererShadowCamera const&);
    LevelRendererShadowCamera();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelRendererShadowCamera();

    virtual ::LevelRendererCameraType getCameraType() const;

    virtual void addCameraListenerToRenderChunkCoordinator();

    virtual void updateViewArea(::LevelRenderPreRenderUpdateParameters const&);

    virtual void renderBlockEntities(::BaseActorRenderContext&, bool);

    virtual void setViewArea(::LevelRenderPreRenderUpdateParameters const&);

    virtual void recalculateRenderDistance(float const);

    virtual void preRenderUpdate(::ScreenContext&, ::LevelRenderPreRenderUpdateParameters&);

    virtual void updateLevelCullerType(::LevelCullerType const);

    virtual void queueRenderEntities(::LevelRenderPreRenderUpdateParameters const&);

    virtual void setupViewArea();

    virtual void onDimensionChanged(::Player&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ShadowRenderingParameters const& getRenderingParameters() const;

    MCNAPI void setupCamera(
        ::glm::vec<3, float, (glm::qualifier)0> const&,
        float,
        float,
        float,
        float,
        ::glm::mat<4, 4, float, (glm::qualifier)0> const&,
        ::glm::mat<4, 4, float, (glm::qualifier)0> const&,
        ::glm::vec<3, float, (glm::qualifier)0> const&,
        ::mce::framebuilder::ShadowParameters const&,
        ::ShadowCascadeState&,
        ::LevelRendererShadowCamera::QueueShadowRenders
    );

    MCNAPI void setupCloudCamera(
        float,
        float,
        ::glm::mat<4, 4, float, (glm::qualifier)0> const&,
        ::glm::mat<4, 4, float, (glm::qualifier)0> const&,
        ::glm::vec<3, float, (glm::qualifier)0> const&,
        ::mce::framebuilder::ShadowParameters const&,
        ::ShadowCascadeState&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::LevelRendererCameraType $getCameraType() const;

    MCNAPI void $addCameraListenerToRenderChunkCoordinator();

    MCNAPI void $updateViewArea(::LevelRenderPreRenderUpdateParameters const&);

    MCNAPI void $renderBlockEntities(::BaseActorRenderContext&, bool);

    MCNAPI void $setViewArea(::LevelRenderPreRenderUpdateParameters const&);

    MCNAPI void $recalculateRenderDistance(float const);

    MCNAPI void $preRenderUpdate(::ScreenContext&, ::LevelRenderPreRenderUpdateParameters&);

    MCNAPI void $updateLevelCullerType(::LevelCullerType const);

    MCNAPI void $queueRenderEntities(::LevelRenderPreRenderUpdateParameters const&);

    MCNAPI void $setupViewArea();

    MCNAPI void $onDimensionChanged(::Player&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class QueueShadowRenders : int {
        DoNotQueue  = 0,
        ShouldQueue = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 248> mUnk67b8c9;
    ::ll::UntypedStorage<4, 12>  mUnk50eba9;
    ::ll::UntypedStorage<4, 12>  mUnk99f048;
    ::ll::UntypedStorage<4, 4>   mUnk5968ec;
    ::ll::UntypedStorage<4, 4>   mUnka02294;
    ::ll::UntypedStorage<8, 24>  mUnk411ff9;
    ::ll::UntypedStorage<8, 8>   mUnk86c499;
    ::ll::UntypedStorage<8, 8>   mUnk489cc3;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelRendererShadowCamera& operator=(LevelRendererShadowCamera const&);
    LevelRendererShadowCamera(LevelRendererShadowCamera const&);
    LevelRendererShadowCamera();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::LevelRendererCameraType getCameraType() const /*override*/;

    virtual void recalculateRenderDistance(float const renderDistanceScalar) /*override*/;

    virtual void preRenderUpdate(
        ::ScreenContext&                        screenContext,
        ::LevelRenderPreRenderUpdateParameters& levelRenderPreRenderUpdateParameters
    ) /*override*/;

    virtual void renderBlockEntities(::BaseActorRenderContext& renderContext, bool renderAlphaLayer) /*override*/;

    virtual void queueRenderEntities(
        ::LevelRenderPreRenderUpdateParameters const& levelRenderPreRenderUpdateParameters
    ) /*override*/;

    virtual void setupViewArea() /*override*/;

    virtual void
    setViewArea(::LevelRenderPreRenderUpdateParameters const& levelRenderPreRenderUpdateParameters) /*override*/;

    virtual void
    updateViewArea(::LevelRenderPreRenderUpdateParameters const& levelRenderPreRenderUpdateParameters) /*override*/;

    virtual void onDimensionChanged(::Player& player) /*override*/;

    virtual void addCameraListenerToRenderChunkCoordinator() /*override*/;

    virtual void updateLevelCullerType(::LevelCullerType const newLevelCullerType) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _calculatePlayerShadowMap(
        ::mce::framebuilder::ShadowParameters const& shadowParameters,
        ::Vec3 const&                                lightSourceDir
    );

    MCNAPI void setupCamera(
        ::glm::vec3 const&                              direction,
        float                                           angle,
        float                                           perpendicularAngle,
        float                                           fov,
        float                                           aspectRatio,
        ::glm::mat4x4 const&                            playerView,
        ::glm::mat4x4 const&                            playerProj,
        ::glm::vec3 const&                              playerPosition,
        ::mce::framebuilder::ShadowParameters const&    shadowParameters,
        ::ShadowCascadeState&                           shadowCascadeState,
        ::LevelRendererShadowCamera::QueueShadowRenders shouldQueueShadowRenders
    );

    MCNAPI void setupCloudCamera(
        float                                        angle,
        float                                        perpendicularAngle,
        ::glm::mat4x4 const&                         playerView,
        ::glm::mat4x4 const&                         playerProj,
        ::glm::vec3 const&                           playerPosition,
        ::mce::framebuilder::ShadowParameters const& shadowParameters,
        ::ShadowCascadeState&                        shadowCascadeState
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::LevelRendererCameraType $getCameraType() const;

    MCNAPI void $recalculateRenderDistance(float const renderDistanceScalar);

    MCNAPI void $preRenderUpdate(
        ::ScreenContext&                        screenContext,
        ::LevelRenderPreRenderUpdateParameters& levelRenderPreRenderUpdateParameters
    );

    MCNAPI void $renderBlockEntities(::BaseActorRenderContext& renderContext, bool renderAlphaLayer);

    MCNAPI void
    $queueRenderEntities(::LevelRenderPreRenderUpdateParameters const& levelRenderPreRenderUpdateParameters);

    MCNAPI void $setupViewArea();

    MCNAPI void $setViewArea(::LevelRenderPreRenderUpdateParameters const& levelRenderPreRenderUpdateParameters);

    MCNAPI void $updateViewArea(::LevelRenderPreRenderUpdateParameters const& levelRenderPreRenderUpdateParameters);

    MCNAPI void $onDimensionChanged(::Player& player);

    MCNAPI void $addCameraListenerToRenderChunkCoordinator();

    MCNAPI void $updateLevelCullerType(::LevelCullerType const newLevelCullerType);
    // NOLINTEND
#else // @header-generator platform
    enum class QueueShadowRenders : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};
