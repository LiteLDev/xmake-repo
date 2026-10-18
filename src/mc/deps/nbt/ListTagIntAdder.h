#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ListTag;
// clang-format on

class ListTagIntAdder {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<ListTag>> mTag;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ListTag>> mTag;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ListTagIntAdder& operator()(int);
#else // @header-generator platform
    MCNAPI ::ListTagIntAdder& operator()(int i);
#endif // @header-generator platform
    // NOLINTEND
};
