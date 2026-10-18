#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/edu_screen_helpers/TemplateType.h"

// auto generated forward declare list
// clang-format off
struct WorldTemplateInfo;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/edu_screen_helpers/TemplateType.h"

// auto generated forward declare list
// clang-format off
struct WorldTemplateInfo;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace EDUScreenHelpers {

#if defined(LL_PLAT_A) // @header-generator platform
class TemplateWrapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::EDUScreenHelpers::TemplateType> mType;
    ::ll::TypedStorage<8, 8, ::WorldTemplateInfo const*>       mLocalInfo;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class TemplateWrapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::EDUScreenHelpers::TemplateType> mType;
    ::ll::TypedStorage<8, 8, ::WorldTemplateInfo const*>       mLocalInfo;
    // NOLINTEND
};
#else // @header-generator platform
class TemplateWrapper {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace EDUScreenHelpers
