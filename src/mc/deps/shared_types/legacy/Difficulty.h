#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Legacy {

enum class Difficulty : int {
    Peaceful = 0,
    Easy     = 1,
    Normal   = 2,
    Hard     = 3,
    Count    = 4,
    Unknown  = 5,
};

}
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::SharedTypes::Legacy::Difficulty>();
// clang-format on
#endif // @header-generator platform
