#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace UI::Resources {

#if defined(LL_PLAT_A) // @header-generator platform
struct ControlPropertyNames {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::string> const> controlTextures;
    ::ll::TypedStorage<8, 24, std::vector<std::string> const> controlProperties;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct ControlPropertyNames {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string> const> controlTextures;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string> const> controlProperties;
    // NOLINTEND
};
#else // @header-generator platform
struct ControlPropertyNames {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace UI::Resources
