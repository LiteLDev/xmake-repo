#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class BlockSourceHandle;
// clang-format on

struct PressurePlatePopEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::shared_ptr<BlockSourceHandle> const> mBlockSourceHandle;
    ::ll::TypedStorage<4, 12, ::BlockPos const>                         mPressurePlateBlockPos;
    ::ll::TypedStorage<4, 4, int const>                                 mPreviousRedstonePower;
    ::ll::TypedStorage<4, 4, int const>                                 mRedstonePower;
    // NOLINTEND

public:
    // prevent constructor by default
    PressurePlatePopEvent& operator=(PressurePlatePopEvent const&);
    PressurePlatePopEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PressurePlatePopEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::BlockSourceHandle> const> mBlockSourceHandle;
    ::ll::TypedStorage<4, 12, ::BlockPos const>                             mPressurePlateBlockPos;
    ::ll::TypedStorage<4, 4, int const>                                     mPreviousRedstonePower;
    ::ll::TypedStorage<4, 4, int const>                                     mRedstonePower;
#endif // @header-generator platform
    // NOLINTEND
};
