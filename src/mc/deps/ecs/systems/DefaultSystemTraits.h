#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ComponentInfo;
#if defined(LL_PLAT_A) // @header-generator platform
struct Dependencies;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

struct DefaultSystemTraits {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::vector<ComponentInfo> generateDetailedComponentInfo();
#else // @header-generator platform
    MCNAPI static ::std::vector<::ComponentInfo> generateDetailedComponentInfo();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string generateName(std::string_view);
#else // @header-generator platform
    MCNAPI static ::std::string generateName(::std::string_view name);
#endif // @header-generator platform
    // NOLINTEND
};
