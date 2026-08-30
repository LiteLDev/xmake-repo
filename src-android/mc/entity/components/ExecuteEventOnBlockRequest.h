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
    ::ll::TypedStorage<8, 24, std::string>   mEvent;
    // NOLINTEND

public:
    // prevent constructor by default
    ExecuteEventOnBlockRequest& operator=(ExecuteEventOnBlockRequest const&);
    ExecuteEventOnBlockRequest();
};
