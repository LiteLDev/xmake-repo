#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/server/commands/AutoCompleteOption.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
struct AutoCompleteOption;
// clang-format on
#endif // @header-generator platform

struct AutoCompleteInformation {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<AutoCompleteOption>> possibilities;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::AutoCompleteOption>> possibilities;
#endif // @header-generator platform
    // NOLINTEND
};
