#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/KineticDamageSettings.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/platform/brstd/flat_map.h"

struct DealKineticDamageComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 84, ::KineticDamageSettings> mSettings;
    ::ll::TypedStorage<4, 4, uint>                     mTicks;
    ::ll::UntypedStorage<8, 48>                        mHitEntities;
    // NOLINTEND

public:
    // prevent constructor by default
    DealKineticDamageComponent& operator=(DealKineticDamageComponent const&);
};
