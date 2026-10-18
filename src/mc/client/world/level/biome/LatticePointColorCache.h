#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/level/biome/LatticePoint.h"
#include "mc/deps/core/math/Color.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/TintMethod.h"

class LatticePointColorCache {
public:
    // LatticePointColorCache inner types define
    using GetLatticeDataCallback = std::function<int(const BlockPos&)>;

    using GetTintCallback = std::function<mce::Color(const BlockPos&, int, TintMethod)>;

    using DistancePair = std::pair<ulong, float>;

    using SortData = std::pair<int, float>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 19208, ::LatticePoint[343]> mPoints;
    ::ll::TypedStorage<4, 12, ::BlockPos>             mCenterPoint;
    ::ll::TypedStorage<1, 1, bool>                    mIsCached;
    ::ll::TypedStorage<4, 16, ::mce::Color const>     mDefaultColor;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~LatticePointColorCache() = default;

    virtual ::mce::Color sampleColor(::TintMethod, ::BlockPos const&, std::function<mce::Color (const BlockPos&, int, TintMethod)>) const;

    virtual int _getLatticeData(::BlockPos const&) const;

    virtual ::mce::Color _getTint(::BlockPos const&, int, ::TintMethod) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _buildLatticeWeights(::LatticePoint&, std::function<int(const BlockPos&)> const&) const;

    MCNAPI void buildLatticePoints(::BlockPos const&, std::function<int(const BlockPos&)>);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::mce::Color
    $sampleColor(::TintMethod, ::BlockPos const&, std::function<mce::Color(const BlockPos&, int, TintMethod)>) const;
    // NOLINTEND
};
#else // @header-generator platform
class LatticePointColorCache {};
#endif // @header-generator platform
