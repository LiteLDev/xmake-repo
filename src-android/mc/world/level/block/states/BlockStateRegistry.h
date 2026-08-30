#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
class BlockState;
// clang-format on

class BlockStateRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, const BlockState*>> mBlockStateMap;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BlockStateRegistry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
