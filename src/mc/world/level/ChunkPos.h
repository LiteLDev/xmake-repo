#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/level/BlockPos.h"
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
#else // @header-generator platform
#endif // @header-generator platform
// clang-format off
class BlockPos;
class Vec3;
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class ChunkPos {
#else // @header-generator platform
class alignas(uint64) ChunkPos : public ll::math::intN2<ChunkPos> {
#endif // @header-generator platform
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mField_81e930f2;
    // NOLINTEND
#else // @header-generator platform
    template <std::floating_point T0, std::floating_point T1>
    [[nodiscard]] constexpr ChunkPos(T0 x, T1 z)
    : intN2((static_cast<int>(std::floor(x)) >> 4), (static_cast<int>(std::floor(z)) >> 4)) {}
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    ChunkPos(ChunkPos const&);
#else // @header-generator platform
    using intN2::intN2;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ChunkPos(::Vec3 const&);
#else // @header-generator platform
    ChunkPos(BlockPos const& bp) {
        x = bp.x >> 4;
        z = bp.z >> 4;
    }
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockPos getMiddleBlockPosition(int) const;

    MCNAPI bool isWithinBounds(::ChunkPos const&, ::ChunkPos const&) const;

    MCNAPI ::Vec3 toBlockSpaceVec3(float) const;
    // NOLINTEND
#else // @header-generator platform
    ChunkPos(Vec3 const& pos) {
        x = static_cast<int>(floorf(pos.x)) >> 4;
        z = static_cast<int>(floorf(pos.z)) >> 4;
    }
#endif // @header-generator platform

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ChunkPos const& INVALID();
#else // @header-generator platform
    MCAPI static ::ChunkPos const& INVALID();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ChunkPos const& MAX();
#else // @header-generator platform
    MCAPI static ::ChunkPos const& MAX();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ChunkPos const& MIN();
#else // @header-generator platform
    MCAPI static ::ChunkPos const& MIN();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ChunkPos const& ONE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Vec3 const&);
#else // @header-generator platform
    MCAPI static ::ChunkPos const& ONE();
#endif // @header-generator platform
    // NOLINTEND
};
