#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
namespace brstd::detail { struct MutexShim; }
// clang-format on

namespace brstd::detail {

struct ConditionVariableShim {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 64> wait;
    ::ll::UntypedStorage<8, 64> notify_all;
    // NOLINTEND
};

} // namespace brstd::detail
