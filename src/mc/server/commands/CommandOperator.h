#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandOperator : uchar {
    Invalid      = 0,
    Equals       = 1,
    PlusEquals   = 2,
    MinusEquals  = 3,
    TimesEquals  = 4,
    DivideEquals = 5,
    ModEquals    = 6,
    MinEquals    = 7,
    MaxEquals    = 8,
    Swap         = 9,
};
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::CommandOperator>();
// clang-format on
#endif // @header-generator platform
