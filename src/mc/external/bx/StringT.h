#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/external/bx/StringView.h"
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
// The legacy bx::StringT workaround is Windows-only. The exact Android bx
// dependency is unavailable, so Android users are represented through precise
// storage fallbacks and forward declarations instead of a conflicting stub.
#else // @header-generator platform
namespace bx {

// StringT is actually a template class, this is a workaround.
class StringT : StringView {};

} // namespace bx
#endif // @header-generator platform
