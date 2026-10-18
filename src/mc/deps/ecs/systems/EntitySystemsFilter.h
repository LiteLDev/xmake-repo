#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/typeid_t.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
struct SystemCategory;
// clang-format on

#endif // @header-generator platform
struct EntitySystemsFilter {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<2, 2> mIncludeType;
#else // @header-generator platform
    ::ll::TypedStorage<2, 2, ::Bedrock::typeid_t<::SystemCategory>> mIncludeType;
#endif // @header-generator platform
    // NOLINTEND
};
