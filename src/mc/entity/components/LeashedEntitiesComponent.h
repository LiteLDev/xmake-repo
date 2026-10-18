#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/legacy/ActorUniqueID.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/brstd/flat_set.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
struct ActorUniqueID;
// clang-format on
#endif // @header-generator platform

struct LeashedEntitiesComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mLeashedEntities;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        24,
        ::brstd::flat_set<::ActorUniqueID, ::std::less<::ActorUniqueID>, ::std::vector<::ActorUniqueID>>>
        mLeashedEntities;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    LeashedEntitiesComponent& operator=(LeashedEntitiesComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
