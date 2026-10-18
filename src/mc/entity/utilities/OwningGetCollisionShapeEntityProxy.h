#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#endif // @header-generator platform
#include "mc/deps/ecs/strict/Filter.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/Read.h"
#endif // @header-generator platform
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#include "mc/deps/ecs/strict/Write.h"
#endif // @header-generator platform
#include "mc/entity/utilities/GetCollisionShapeEntityProxy.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class EntityContext;
#else // @header-generator platform
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct ActorGameTypeComponent;
struct ActorTypeComponent;
struct CanStandOnSnowFlagComponent;
struct ExternalDataComponent;
struct FallDistanceComponent;
struct HasLightweightFamilyFlagComponent;
struct MovementAbilitiesComponent;
struct PassengerComponent;
struct VehicleComponent;
#endif // @header-generator platform
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
class OwningGetCollisionShapeEntityProxy
: public ::GetCollisionShapeEntityProxy<::StrictExecutionContext<
      ::Filter<::CanStandOnSnowFlagComponent, ::HasLightweightFamilyFlagComponent>,
      ::Read<
          ::AABBShapeComponent,
          ::MovementAbilitiesComponent,
          ::ActorTypeComponent,
          ::FallDistanceComponent,
          ::PassengerComponent,
          ::ActorGameTypeComponent,
          ::ActorDataFlagComponent,
          ::VehicleComponent>,
      ::Write<>,
      ::AddRemove<>,
      ::GlobalRead<::ExternalDataComponent>,
      ::GlobalWrite<>,
      ::EntityFactoryT<>>> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 8> mContext;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk30af3e;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    OwningGetCollisionShapeEntityProxy& operator=(OwningGetCollisionShapeEntityProxy const&);
    OwningGetCollisionShapeEntityProxy(OwningGetCollisionShapeEntityProxy const&);
#endif // @header-generator platform
    OwningGetCollisionShapeEntityProxy();
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
