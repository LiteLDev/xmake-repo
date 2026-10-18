#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct UIIndexInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                  index;
    ::ll::TypedStorage<8, 8, ::Json::Value const*> value;
    ::ll::TypedStorage<1, 1, bool>                 removed;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct UIIndexInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                  index;
    ::ll::TypedStorage<8, 8, ::Json::Value const*> value;
    ::ll::TypedStorage<1, 1, bool>                 removed;
    // NOLINTEND
};
#else // @header-generator platform
struct UIIndexInfo {};
#endif // @header-generator platform
#endif // @header-generator platform
