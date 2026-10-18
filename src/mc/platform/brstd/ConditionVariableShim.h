#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
namespace brstd::detail { struct MutexShim; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace brstd::detail {

struct ConditionVariableShim {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 64> wait;
    ::ll::UntypedStorage<8, 64> notify_all;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 64> mUnke6ff9f;
    ::ll::UntypedStorage<8, 64> mUnk60372a;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ConditionVariableShim& operator=(ConditionVariableShim const&);
    ConditionVariableShim(ConditionVariableShim const&);
    ConditionVariableShim();
#endif // @header-generator platform
};

} // namespace brstd::detail
