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
    ::ll::TypedStorage<8, 8, ::BlockSource&>                          mSource;
    ::ll::TypedStorage<4, 4, int>                                     mRightDir;
    ::ll::TypedStorage<4, 4, int>                                     mLeftDir;
    ::ll::TypedStorage<4, 4, int>                                     mDepthDir;
    ::ll::TypedStorage<4, 12, ::BlockPos>                             mBottomLeft;
    ::ll::TypedStorage<4, 12, ::BlockPos>                             mOrigin;
    ::ll::TypedStorage<4, 4, int>                                     mBlockDirection;
    ::ll::TypedStorage<8, 24, std::vector<std::vector<const Block*>>> mPortalPattern;
    // NOLINTEND

public:
    // prevent constructor by default
    EndPortalShape& operator=(EndPortalShape const&);
    EndPortalShape(EndPortalShape const&);
    EndPortalShape();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EndPortalShape(::BlockSource&, ::BlockPos);

    MCNAPI bool isValid(::BlockSource&);

    MCNAPI ~EndPortalShape();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockSource&, ::BlockPos);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
