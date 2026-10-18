#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/BlockSelector.h"

// auto generated forward declare list
// clang-format off
class Block;
class Random;
// clang-format on

class SmoothStoneSelector : public ::BlockSelector {
public:
    // SmoothStoneSelector inner types declare
    // clang-format off
    struct LocalRegistry;
    // clang-format on

    // SmoothStoneSelector inner types define
    struct LocalRegistry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Block const*> mStoneBrick;
        ::ll::TypedStorage<8, 8, ::Block const*> mInfestedStoneBrick;
        ::ll::TypedStorage<8, 8, ::Block const*> mAirBlock;
        ::ll::TypedStorage<8, 8, ::Block const*> mCrackedStoneBrick;
        ::ll::TypedStorage<8, 8, ::Block const*> mMossyStoneBrick;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::SmoothStoneSelector::LocalRegistry> mLocalRegistry;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    SmoothStoneSelector();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SmoothStoneSelector();

    virtual ::Block const& next(::Random&, int, int, int, bool) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::Block const& next(::Random& random, int, int, int, bool isEdge) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const& $next(::Random&, int, int, int, bool) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::Block const& $next(::Random& random, int, int, int, bool isEdge) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
