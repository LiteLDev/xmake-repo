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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 64, std::basic_regex<char, std::regex_traits<char>>> mWildcardRegex;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 40> mUnk43804b;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    WildcardString& operator=(WildcardString const&);
    WildcardString(WildcardString const&);
#endif // @header-generator platform
    WildcardString();
};
