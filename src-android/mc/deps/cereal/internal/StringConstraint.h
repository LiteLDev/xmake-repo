#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

struct StringConstraint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, std::basic_regex<char, std::regex_traits<char>>> mRegex;
    ::ll::TypedStorage<8, 24, std::string>                                     mRegexStr;
    ::ll::TypedStorage<8, 8, ulong>                                            mMinSize;
    // NOLINTEND

public:
    // prevent constructor by default
    StringConstraint& operator=(StringConstraint const&);
};

} // namespace cereal::internal
