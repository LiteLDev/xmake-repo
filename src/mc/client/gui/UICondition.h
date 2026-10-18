#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct UICondition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>         controlName;
    ::ll::TypedStorage<8, 8, ::Json::Value const*> condition;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct UICondition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>       controlName;
    ::ll::TypedStorage<8, 8, ::Json::Value const*> condition;
    // NOLINTEND
};
#else // @header-generator platform
struct UICondition {};
#endif // @header-generator platform
#endif // @header-generator platform
