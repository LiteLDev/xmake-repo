#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/vanilla_components/AABBShapeComponent.h"
#include "mc/deps/vanilla_components/ActorDataFlagComponent.h"
#include "mc/deps/vanilla_components/ActorTypeComponent.h"
#include "mc/deps/vanilla_components/MovementAbilitiesComponent.h"
#include "mc/entity/components/ActorGameTypeComponent.h"
#include "mc/entity/components/CanStandOnSnowFlagComponent.h"
#include "mc/entity/components/ExternalDataComponent.h"
#include "mc/entity/components/FallDistanceComponent.h"
#include "mc/entity/components/HasLightweightFamilyFlagComponent.h"
#include "mc/entity/components/PassengerComponent.h"
#include "mc/entity/components/VehicleComponent.h"
#include "mc/entity/utilities/GetCollisionShapeEntityProxy.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

class OwningGetCollisionShapeEntityProxy : public ::GetCollisionShapeEntityProxy<StrictExecutionContext<
                                               Filter<CanStandOnSnowFlagComponent, HasLightweightFamilyFlagComponent>,
                                               Read<
                                                   AABBShapeComponent,
                                                   MovementAbilitiesComponent,
                                                   ActorTypeComponent,
                                                   FallDistanceComponent,
                                                   PassengerComponent,
                                                   ActorGameTypeComponent,
                                                   ActorDataFlagComponent,
                                                   VehicleComponent>,
                                               Write<>,
                                               AddRemove<>,
                                               GlobalRead<ExternalDataComponent>,
                                               GlobalWrite<>,
                                               EntityFactoryT<>>> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mContext;
    // NOLINTEND

public:
    // prevent constructor by default
    OwningGetCollisionShapeEntityProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OwningGetCollisionShapeEntityProxy();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
