#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/chunks/point_lighting/AnalyticLightResources.h"
#include "mc/client/renderer/chunks/point_lighting/ILightLODResourceProvider.h"
#include "mc/client/renderer/chunks/point_lighting/PointLightShadowAtlasHysteresis.h"
#include "mc/client/renderer/chunks/point_lighting/PointLightShadowBatchProcessor.h"
#include "mc/client/renderer/chunks/point_lighting/PointLightShadowProbe.h"
#include "mc/deps/minecraft_renderer/framebuilder/PointLightParameters.h"
#include "mc/external/render_dragon/rendering/TextureCubeFace.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockSource;
class FrustumCuller;
namespace PointLighting { struct TileAction; }
namespace dragon::atlas { class IAtlasHandle; }
namespace dragon::atlas { class IAtlasUserOperations; }
namespace mce { struct PointLightParameters; }
namespace mce::framebuilder { struct ActiveShadowTileInfo; }
namespace mce::framebuilder { struct ShadowAtlasFrameDescription; }
// clang-format on

namespace PointLighting {

class PointLightShadowProbeManager
: public ::PointLighting::ILightLODResourceProvider<PointLighting::AnalyticLightResources> {
public:
    // PointLightShadowProbeManager inner types declare
    // clang-format off
    struct AtlasPressureState;
    struct ProbeDebugStats;
    // clang-format on

    // PointLightShadowProbeManager inner types define
    struct AtlasPressureState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint> mConsecutiveFailureFrames;
        ::ll::TypedStorage<1, 1, bool> mWasFullFlag;
        ::ll::TypedStorage<1, 1, bool> mFailedThisFrame;
        // NOLINTEND
    };

    struct ProbeDebugStats {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ulong> mActiveProbeCount;
        ::ll::TypedStorage<8, 8, ulong> mAllocatedFaceCount;
        ::ll::TypedStorage<4, 4, uint>  mGrowCount;
        ::ll::TypedStorage<4, 4, uint>  mShrinkCount;
        ::ll::TypedStorage<4, 4, uint>  mInvalidateCount;
        ::ll::TypedStorage<4, 4, uint>  mNewCount;
        ::ll::TypedStorage<4, 4, uint>  mConsecutiveFailureFrames;
        ::ll::TypedStorage<1, 1, bool>  mAtlasFull;
        // NOLINTEND
    };

    using ProbeMap = std::unordered_map<BlockPos, PointLighting::PointLightShadowProbe>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<dragon::atlas::IAtlasUserOperations>>                 mAtlasOps;
    ::ll::TypedStorage<8, 40, std::unordered_map<BlockPos, PointLighting::PointLightShadowProbe>> mActiveProbes;
    ::ll::UntypedStorage<8, 8>                                                                    mNextToQueue;
    ::ll::TypedStorage<8, 64, ::PointLighting::PointLightShadowBatchProcessor>                    mBatchProcessor;
    ::ll::TypedStorage<1, 1, ::PointLighting::PointLightShadowAtlasHysteresis>                    mAtlasHysteresis;
    ::ll::TypedStorage<4, 8, ::PointLighting::PointLightShadowProbeManager::AtlasPressureState>   mAtlasState;
    ::ll::TypedStorage<8, 136, ::mce::framebuilder::PointLightParameters>                         mLastParameters;
    ::ll::TypedStorage<8, 24, std::vector<AABB>>                                                  mBlockRegionChanges;
    ::ll::TypedStorage<8, 16, std::shared_ptr<dragon::atlas::IAtlasHandle>>                       mShadowAtlas;
    ::ll::TypedStorage<8, 40, ::PointLighting::PointLightShadowProbeManager::ProbeDebugStats>     mLastFrameStats;
    // NOLINTEND

public:
    // prevent constructor by default
    PointLightShadowProbeManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~PointLightShadowProbeManager() = default;

    virtual bool atCapacity() const;

    virtual bool canReserve(::BlockPos const&) const;

    virtual void reserve(::BlockPos const&, ::mce::PointLightParameters const&, float const, ::PointLighting::AnalyticLightResources&);

    virtual bool acquired(::BlockPos const&) const;

    virtual void advance(::BlockPos const&, ::PointLighting::AnalyticLightResources&, float);

    virtual void refresh(::BlockPos const&, ::PointLighting::AnalyticLightResources&);

    virtual void finalize(::BlockPos const&, ::PointLighting::AnalyticLightResources&);

    virtual void release(::BlockPos const&, ::PointLighting::AnalyticLightResources&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void
    _allocateProbeTile(::PointLighting::PointLightShadowProbe&, ::dragon::rendering::TextureCubeFace, ushort);

    MCNAPI void _invalidateProbeTile(::PointLighting::PointLightShadowProbe&, ::dragon::rendering::TextureCubeFace);

    MCNAPI bool _isProbeRendered(::PointLighting::PointLightShadowProbe const&) const;

    MCNAPI void _processProbes(
        ::mce::framebuilder::PointLightParameters const&,
        ::glm::vec<3, float, (glm::qualifier)0> const&,
        ::FrustumCuller const&,
        ::glm::vec<3, float, (glm::qualifier)0> const&
    );

    MCNAPI void _reconfigureAtlasIfNeeded(::mce::framebuilder::PointLightParameters const&);

    MCNAPI bool
    _resizeProbeFace(::PointLighting::PointLightShadowProbe&, ::dragon::rendering::TextureCubeFace, ushort, ulong);

    MCNAPI ::mce::framebuilder::ShadowAtlasFrameDescription
    getShadowFrameData(::mce::framebuilder::PointLightParameters const&);

    MCNAPI void onBlockChanged(
        ::BlockSource&,
        ::BlockPos const&,
        ::Block const&,
        ::Block const&,
        ::mce::framebuilder::PointLightParameters const&
    );

    MCNAPI std::vector<mce::framebuilder::ActiveShadowTileInfo>
           prepareActiveTiles(::glm::vec<3, float, (glm::qualifier)0> const&);

    MCNAPI void update(
        bool const,
        ::mce::framebuilder::PointLightParameters const&,
        ::glm::vec<3, float, (glm::qualifier)0> const&,
        ::FrustumCuller const&,
        ::glm::vec<3, float, (glm::qualifier)0> const&
    );
    // NOLINTEND
};

} // namespace PointLighting
