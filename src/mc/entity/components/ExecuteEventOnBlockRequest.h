#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

struct ExecuteEventOnBlockRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const*> mBlock;
    ::ll::TypedStorage<4, 12, ::BlockPos>    mPos;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>   mEvent;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mEvent;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ExecuteEventOnBlockRequest& operator=(ExecuteEventOnBlockRequest const&);
    ExecuteEventOnBlockRequest();
#else // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCAPI ~ExecuteEventOnBlockRequest();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
#endif // @header-generator platform
};
