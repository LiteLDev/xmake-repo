#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Option;
// clang-format on

class ConstOptionIterator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<Option> const*> mIterator;
    // NOLINTEND

public:
    // prevent constructor by default
    ConstOptionIterator();
};
#else // @header-generator platform
class ConstOptionIterator {};
#endif // @header-generator platform
