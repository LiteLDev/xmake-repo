#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct CodeScreenEditorButton;
// clang-format on

struct UriData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> uri;
    ::ll::TypedStorage<1, 1, bool>         hasHomeButton;
    // NOLINTEND

public:
    // prevent constructor by default
    UriData& operator=(UriData const&);
    UriData(UriData const&);
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct UriData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> uri;
    ::ll::TypedStorage<1, 1, bool>           hasHomeButton;
    // NOLINTEND
};
#else // @header-generator platform
struct UriData {};
#endif // @header-generator platform
#endif // @header-generator platform
