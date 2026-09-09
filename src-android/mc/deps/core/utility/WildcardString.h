#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WildcardString {
public:
    // WildcardString inner types define
    enum class Case : int {
        Sensitive   = 0,
        Insensitive = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, std::basic_regex<char, std::regex_traits<char>>> mWildcardRegex;
    // NOLINTEND

public:
    // prevent constructor by default
    WildcardString();
};
