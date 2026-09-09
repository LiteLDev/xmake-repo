#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/atlas/AtlasTileHandle.h"
#include "mc/external/render_dragon/rendering/TextureCubeFace.h"

// auto generated forward declare list
// clang-format off
namespace dragon::atlas { struct TileRenderConfig; }
namespace dragon::rendering { struct Camera; }
// clang-format on

namespace PointLighting {

class PointLightShadowProbe {
public:
    // PointLightShadowProbe inner types declare
    // clang-format off
    struct FaceState;
    // clang-format on

    // PointLightShadowProbe inner types define
    struct FaceState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::dragon::atlas::AtlasTileHandle> mActiveTileHandle;
        ::ll::TypedStorage<2, 2, ushort>                            mActiveDimension;
        ::ll::TypedStorage<8, 32, ::dragon::atlas::AtlasTileHandle> mPendingTileHandle;
        ::ll::TypedStorage<2, 2, ushort>                            mPendingDimension;
        ::ll::TypedStorage<8, 8, ulong>                             mLastGrownMs;
        ::ll::TypedStorage<8, 8, ulong>                             mLastShrinkMs;
        ::ll::TypedStorage<8, 8, ulong>                             mLastInvalidateMs;
        ::ll::TypedStorage<8, 8, ulong>                             mLastBudgetSkipMs;
        ::ll::TypedStorage<8, 8, ulong>                             mFailureCount;
        // NOLINTEND

    public:
        // prevent constructor by default
        FaceState& operator=(FaceState const&);
        FaceState(FaceState const&);
        FaceState();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>>                         mLightWorldPosition;
    ::ll::TypedStorage<1, 1, uchar>                                                            mVanillaBrightness;
    ::ll::TypedStorage<8, 720, std::array<PointLighting::PointLightShadowProbe::FaceState, 6>> mFaceStates;
    ::ll::TypedStorage<8, 8, ulong>                                                            mLastAccessedMs;
    ::ll::TypedStorage<1, 1, bool>                                                             mIsVisibleThisFrame;
    ::ll::TypedStorage<1, 1, bool>                                                             mIsFreshProbe;
    // NOLINTEND

public:
    // prevent constructor by default
    PointLightShadowProbe();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::dragon::rendering::Camera createTileCamera(
        ::glm::vec<3, float, (glm::qualifier)0> const&,
        ::glm::vec<3, float, (glm::qualifier)0> const&,
        ::dragon::rendering::TextureCubeFace,
        ushort,
        float,
        float
    );
    // NOLINTEND
};

} // namespace PointLighting
