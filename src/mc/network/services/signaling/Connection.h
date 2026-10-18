#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Connection {
// functions
// NOLINTBEGIN
MCNAPI void bindDisconnectionFailReason(::cereal::ReflectionCtx& ctx);
// NOLINTEND

} // namespace Connection
#endif // @header-generator platform
