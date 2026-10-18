#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
#else // @header-generator platform
#endif // @header-generator platform
class BlockSource;
class Vec3;
// clang-format on

class ClockSpriteCalculator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>   mFrame;
    ::ll::TypedStorage<4, 4, float> mRot;
    ::ll::TypedStorage<4, 4, float> mRotA;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ClockSpriteCalculator();

    MCNAPI int getFrame() const;

    MCNAPI int update(::BlockSource const&, ::Vec3 const&, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI int update(::BlockSource const& region, ::Vec3 const& pos, bool instant);
#endif // @header-generator platform
    // NOLINTEND
};
