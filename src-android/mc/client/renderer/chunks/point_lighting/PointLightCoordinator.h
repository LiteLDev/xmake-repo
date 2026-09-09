#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/chunks/LightContainer.h"
#include "mc/client/renderer/chunks/point_lighting/ClearHeuristics.h"
#include "mc/client/renderer/chunks/point_lighting/Idle.h"
#include "mc/client/renderer/chunks/point_lighting/LightLODResourceManager.h"
#include "mc/client/renderer/chunks/point_lighting/ScoreApply.h"
#include "mc/client/renderer/chunks/point_lighting/ScoreCompute.h"
#include "mc/client/renderer/chunks/point_lighting/TierReconcile.h"
#include "mc/client/renderer/chunks/point_lighting/TieredLightScores.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class RuntimeLocalLightingConfig;
class SubChunkPos;
class Vec3;
struct BlockQueueEntry;
struct Bounds;
namespace PointLighting { struct ICandidacyHeuristic; }
namespace PointLighting { struct ManagedPointLight; }
namespace PointLighting { struct PointLightTieredScoresPolicies; }
namespace mce { struct AnalyticalLight; }
namespace mce { struct PointLightParameters; }
namespace mce::framebuilder { struct PointLightParameters; }
// clang-format on

namespace PointLighting {

class PointLightCoordinator {
public:
    // PointLightCoordinator inner types define
    using UpdatePhase = std::variant<
        PointLighting::UpdatePhases::Idle,
        PointLighting::UpdatePhases::ScoreCompute,
        PointLighting::UpdatePhases::ScoreApply,
        PointLighting::UpdatePhases::TierReconcile,
        PointLighting::UpdatePhases::ClearHeuristics>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>                                                                 mLightContainer;
    ::ll::TypedStorage<1, 1, bool const>                                                        mLightLODsEnabled;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<PointLighting::ICandidacyHeuristic>>> mLightHeuristics;
    ::ll::TypedStorage<4, 4, int>                                                               mFramesSinceLastUpdate;
    ::ll::UntypedStorage<8, 560>                                                                mTieredScores;
    ::ll::TypedStorage<1, 1, bool>                                                              mRefreshLightScores;
    ::ll::TypedStorage<8, 48, ::PointLighting::LightLODResourceManager>                         mLODResourceManager;
    ::ll::TypedStorage<8, 16, std::weak_ptr<const RuntimeLocalLightingConfig>>                  mLightingConfig;
    ::ll::UntypedStorage<8, 592>                                                                mCurrentPhase;
    // NOLINTEND

public:
    // prevent constructor by default
    PointLightCoordinator();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PointLightCoordinator(bool const, std::weak_ptr<const RuntimeLocalLightingConfig>);

    MCNAPI void _clearHeuristics();

    MCNAPI std::optional<mce::PointLightParameters> _createPointLightFromBlock(::Block const&, ::BlockPos const&) const;

    MCNAPI void applyBlockQueue(std::vector<BlockQueueEntry> const&);

    MCNAPI void clear();

    MCNAPI std::vector<mce::AnalyticalLight> getAnalyticalLights() const;

    MCNAPI void onBlockChanged(::BlockPos const&, ::Block const&, ::Block const&);

    MCNAPI void resetLightingConfig(std::weak_ptr<const RuntimeLocalLightingConfig>);

    MCNAPI void update(std::optional<Bounds> const&, bool const, ::mce::framebuilder::PointLightParameters const&);

    MCNAPI ~PointLightCoordinator();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isPointLightCandidate(::Block const&, ::RuntimeLocalLightingConfig const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool const, std::weak_ptr<const RuntimeLocalLightingConfig>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace PointLighting
