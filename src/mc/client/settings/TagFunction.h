#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Settings::FactoryUtil {

#if defined(LL_PLAT_A) // @header-generator platform
struct TagFunction {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct TagFunction {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::std::string> execute(::std::string const& tag);
    // NOLINTEND
};
#else // @header-generator platform
struct TagFunction {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace Settings::FactoryUtil
