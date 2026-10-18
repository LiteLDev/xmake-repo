#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityId;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class EntityOptionalOwnerRef {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 32> mOwnedEntity;
    ::ll::UntypedStorage<1, 24> mWeakEntity;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk1833e5;
    ::ll::UntypedStorage<8, 24> mUnk276e9c;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    EntityOptionalOwnerRef& operator=(EntityOptionalOwnerRef const&);
    EntityOptionalOwnerRef(EntityOptionalOwnerRef const&);
    EntityOptionalOwnerRef();
#endif // @header-generator platform
};
