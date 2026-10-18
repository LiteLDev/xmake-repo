#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
#include "mc/entity/enums/ClientInputLockCategory.h"

struct ClientInputLockLastComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<2, 2> mActiveCategories;
#else // @header-generator platform
    ::ll::TypedStorage<2, 2, ::Bedrock::EnumSet<::ClientInputLockCategory, 13>> mActiveCategories;
#endif // @header-generator platform
    // NOLINTEND
};
