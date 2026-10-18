#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct ModificationOperation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Json::Value*>       baseVal;
    ::ll::TypedStorage<8, 8, ::Json::Value const*> modificationOperation;
    ::ll::TypedStorage<8, 24, std::string>         controlNamePath;
    ::ll::TypedStorage<4, 4, int>                  treeLevel;
    // NOLINTEND

public:
    // prevent constructor by default
    ModificationOperation();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct ModificationOperation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Json::Value*>       baseVal;
    ::ll::TypedStorage<8, 8, ::Json::Value const*> modificationOperation;
    ::ll::TypedStorage<8, 32, ::std::string>       controlNamePath;
    ::ll::TypedStorage<4, 4, int>                  treeLevel;
    // NOLINTEND
};
#else // @header-generator platform
struct ModificationOperation {};
#endif // @header-generator platform
#endif // @header-generator platform
