#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/entity/components_json_legacy/EntitySubsensor.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class EntitySubsensor;
#endif // @header-generator platform
struct Tick;
// clang-format on

class EntitySensorComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                          mRelativeRange;
    ::ll::TypedStorage<1, 1, bool>                          mFindPlayersOnly;
    ::ll::TypedStorage<4, 24, ::AABB>                       mMaxBaseSearchArea;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>           mEventCondition;
    ::ll::TypedStorage<8, 24, std::vector<EntitySubsensor>> mSubsensors;
    ::ll::TypedStorage<1, 1, bool>                          mCanFireEventWithNoEntities;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                              mRelativeRange;
    ::ll::TypedStorage<1, 1, bool>                              mFindPlayersOnly;
    ::ll::TypedStorage<4, 24, ::AABB>                           mMaxBaseSearchArea;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>               mEventCondition;
    ::ll::TypedStorage<8, 24, ::std::vector<::EntitySubsensor>> mSubsensors;
    ::ll::TypedStorage<1, 1, bool>                              mCanFireEventWithNoEntities;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    EntitySensorComponent& operator=(EntitySensorComponent const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI EntitySensorComponent();

    MCNAPI ::EntitySensorComponent& operator=(::EntitySensorComponent&&);

    MCNAPI void tick(::ActorOwnerComponent&, ::Tick const&);

    MCNAPI ~EntitySensorComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void tick(::ActorOwnerComponent& actorOwnerComponent, ::Tick const& currentTick);
#endif // @header-generator platform
    // NOLINTEND
};
