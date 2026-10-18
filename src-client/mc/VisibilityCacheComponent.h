#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"

struct VisibilityCacheComponent {
public:
    // VisibilityCacheComponent inner types define
    using ActorSet = std::unordered_set<ActorUniqueID>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_set<ActorUniqueID>> mSeen;
    ::ll::TypedStorage<8, 40, std::unordered_set<ActorUniqueID>> mUnseen;
    // NOLINTEND

public:
    // prevent constructor by default
    VisibilityCacheComponent& operator=(VisibilityCacheComponent const&);
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
