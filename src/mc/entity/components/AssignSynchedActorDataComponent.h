#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/actor/SynchedActorData.h"
#else // @header-generator platform
#endif // @header-generator platform

struct AssignSynchedActorDataComponent {
public:
    // AssignSynchedActorDataComponent inner types declare
    // clang-format off
    struct Args;
    // clang-format on

    // AssignSynchedActorDataComponent inner types define
    struct Args {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 24>                     mItems;
        ::ll::TypedStorage<8, 16, std::optional<ulong>> mTargetFrame;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 24> mUnk53a7d2;
        ::ll::UntypedStorage<8, 16> mUnke7a314;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        Args& operator=(Args const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        Args(Args const&);
#endif // @header-generator platform
        Args();
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<AssignSynchedActorDataComponent::Args>> mValuesToAssign;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::AssignSynchedActorDataComponent::Args>> mValuesToAssign;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    AssignSynchedActorDataComponent& operator=(AssignSynchedActorDataComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
