#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace UI::Resources {

#if defined(LL_PLAT_A) // @header-generator platform
struct ResolvedPropertyData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> name;
    ::ll::TypedStorage<8, 24, std::string> value;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct ResolvedPropertyData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> name;
    ::ll::TypedStorage<8, 32, ::std::string> value;
    // NOLINTEND
};
#else // @header-generator platform
struct ResolvedPropertyData {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace UI::Resources
