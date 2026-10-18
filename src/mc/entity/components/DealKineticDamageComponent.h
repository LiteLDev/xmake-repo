#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/KineticDamageSettings.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/legacy/ActorUniqueID.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/brstd/flat_map.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
struct ActorUniqueID;
// clang-format on
#endif // @header-generator platform

struct DealKineticDamageComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 84, ::KineticDamageSettings> mSettings;
    ::ll::TypedStorage<4, 4, uint>                     mTicks;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48>                        mHitEntities;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        48,
        ::brstd::flat_map<
            ::ActorUniqueID,
            uint,
            ::std::less<::ActorUniqueID>,
            ::std::vector<::ActorUniqueID>,
            ::std::vector<uint>>>
        mHitEntities;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    DealKineticDamageComponent& operator=(DealKineticDamageComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
