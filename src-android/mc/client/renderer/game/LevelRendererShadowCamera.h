#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
public:
    // LevelRendererShadowCamera inner types define
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
};
