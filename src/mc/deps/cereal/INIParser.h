#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/cereal/INISection.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct INISection; }
// clang-format on
#endif // @header-generator platform

namespace cereal {

class INIParser {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, cereal::INISection>> mParsedData;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::cereal::INISection>> mParsedData;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace cereal
