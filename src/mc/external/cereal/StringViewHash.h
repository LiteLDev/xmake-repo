#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::util::internal {

#if defined(LL_PLAT_A) // @header-generator platform
struct StringViewHash : public ::std::hash<std::string_view> {};
#else // @header-generator platform
struct StringViewHash : public ::std::hash<::std::string_view> {
public:
    // StringViewHash inner types define
    using is_transparent = void;
};
#endif // @header-generator platform

} // namespace cereal::util::internal
