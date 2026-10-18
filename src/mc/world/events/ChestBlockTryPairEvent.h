#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
class BlockSourceHandle;
// clang-format on

struct ChestBlockTryPairEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::shared_ptr<BlockSourceHandle> const> mBlockSourceHandle;
    ::ll::TypedStorage<4, 12, ::Vec3 const>                             mBlockPos;
    ::ll::TypedStorage<4, 12, ::Vec3 const>                             mOtherBlockPos;
    // NOLINTEND

public:
    // prevent constructor by default
    ChestBlockTryPairEvent& operator=(ChestBlockTryPairEvent const&);
    ChestBlockTryPairEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ChestBlockTryPairEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::BlockSourceHandle> const> mBlockSourceHandle;
    ::ll::TypedStorage<4, 12, ::Vec3 const>                                 mBlockPos;
    ::ll::TypedStorage<4, 12, ::Vec3 const>                                 mOtherBlockPos;
#endif // @header-generator platform
    // NOLINTEND
};
