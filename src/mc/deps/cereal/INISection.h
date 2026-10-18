#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/cereal/INIProperty.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { class INIProperty; }
// clang-format on
#endif // @header-generator platform

namespace cereal {

struct INISection {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                          name;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, cereal::INIProperty>> properties;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                                              name;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::cereal::INIProperty>> properties;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace cereal
