#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OverloadSyntaxInformation {
public:
    // OverloadSyntaxInformation inner types define
    using CursorPos = uint;

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> text;
    ::ll::TypedStorage<4, 4, uint>         start;
    ::ll::TypedStorage<4, 4, uint>         length;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> text;
    ::ll::TypedStorage<4, 4, uint>           start;
    ::ll::TypedStorage<4, 4, uint>           length;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    OverloadSyntaxInformation& operator=(OverloadSyntaxInformation const&);
    OverloadSyntaxInformation(OverloadSyntaxInformation const&);
    OverloadSyntaxInformation();
#else // @header-generator platform
#endif // @header-generator platform
};
