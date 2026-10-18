#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class BlockPos;
class ChunkPos;
// clang-format on

class SubChunkPos {
#else // @header-generator platform
class SubChunkPos : public ll::math::intN3<SubChunkPos> {
#endif // @header-generator platform
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> x;
    ::ll::TypedStorage<4, 4, int> y;
    ::ll::TypedStorage<4, 4, int> z;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SubChunkPos(::BlockPos const&);

    MCNAPI ulong hashCode() const;

    MCNAPI explicit operator BlockPos() const;

    MCNAPI explicit operator ChunkPos() const;
    // NOLINTEND
#else // @header-generator platform
    using intN3::intN3;
#endif // @header-generator platform

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SubChunkPos const& MAX();
#else // @header-generator platform
    MCAPI static ::SubChunkPos const& MAX();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SubChunkPos const& MIN();
#else // @header-generator platform
    MCAPI static ::SubChunkPos const& MIN();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SubChunkPos const& ONE();
#else // @header-generator platform
    MCAPI static ::SubChunkPos const& ONE();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SubChunkPos const& ZERO();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const&);
#else // @header-generator platform
    MCAPI static ::SubChunkPos const& ZERO();
#endif // @header-generator platform
    // NOLINTEND
};
