#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

struct StringConstraint {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 64, std::basic_regex<char, std::regex_traits<char>>> mRegex;
    ::ll::TypedStorage<8, 24, std::string>                                     mRegexStr;
    ::ll::TypedStorage<8, 8, ulong>                                            mMinSize;
#else // @header-generator platform
    ::ll::TypedStorage<8, 40, ::std::basic_regex<char, ::std::regex_traits<char>>> mRegex;
    ::ll::TypedStorage<8, 32, ::std::string>                                       mRegexStr;
    ::ll::TypedStorage<8, 8, uint64>                                               mMinSize;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    StringConstraint& operator=(StringConstraint const&);
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace cereal::internal
