#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

namespace brstd::detail {

struct MutexShim {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> lock;
    ::ll::UntypedStorage<8, 64> unlock;
    // NOLINTEND
};

} // namespace brstd::detail
