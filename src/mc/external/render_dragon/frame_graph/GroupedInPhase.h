#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::framegraph::dependency {

#if defined(LL_PLAT_A) // @header-generator platform
struct GroupedInPhase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::HashedString> name;
    // NOLINTEND
};
#else // @header-generator platform
struct GroupedInPhase {};
#endif // @header-generator platform

} // namespace dragon::framegraph::dependency
