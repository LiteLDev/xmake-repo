#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class Mirror : uchar {
    None = 0,
    X    = 1,
    Z    = 2,
#if defined(LL_PLAT_A) // @header-generator platform
    XZ   = 3,
#else // @header-generator platform
    Xz   = 3,
#endif // @header-generator platform
};
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::Mirror>();
// clang-format on
#endif // @header-generator platform
