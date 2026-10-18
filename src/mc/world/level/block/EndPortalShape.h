#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockSource;
// clang-format on

class EndPortalShape {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::BlockSource&>                          mSource;
    ::ll::TypedStorage<4, 4, int>                                     mRightDir;
    ::ll::TypedStorage<4, 4, int>                                     mLeftDir;
    ::ll::TypedStorage<4, 4, int>                                     mDepthDir;
    ::ll::TypedStorage<4, 12, ::BlockPos>                             mBottomLeft;
    ::ll::TypedStorage<4, 12, ::BlockPos>                             mOrigin;
    ::ll::TypedStorage<4, 4, int>                                     mBlockDirection;
    ::ll::TypedStorage<8, 24, std::vector<std::vector<const Block*>>> mPortalPattern;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::BlockSource&>                                mSource;
    ::ll::TypedStorage<4, 4, int>                                           mRightDir;
    ::ll::TypedStorage<4, 4, int>                                           mLeftDir;
    ::ll::TypedStorage<4, 4, int>                                           mDepthDir;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                   mBottomLeft;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                   mOrigin;
    ::ll::TypedStorage<4, 4, int>                                           mBlockDirection;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::vector<::Block const*>>> mPortalPattern;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    EndPortalShape& operator=(EndPortalShape const&);
    EndPortalShape(EndPortalShape const&);
    EndPortalShape();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI EndPortalShape(::BlockSource&, ::BlockPos);
#else // @header-generator platform
    MCAPI EndPortalShape(::BlockSource& region, ::BlockPos pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isValid(::BlockSource&);

    MCNAPI ~EndPortalShape();
#else // @header-generator platform
    MCAPI bool isValid(::BlockSource& region);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::BlockSource&, ::BlockPos);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::BlockSource& region, ::BlockPos pos);
#endif // @header-generator platform
    // NOLINTEND
};
