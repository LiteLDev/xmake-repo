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
#endif // @header-generator platform
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/ecs/strict/Read.h"
#endif // @header-generator platform
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/vanilla_components/WitherBossFlagComponent.h"
#include "mc/entity/components/ActorTickedComponent.h"
#include "mc/entity/components/OverlayAlphaComponent.h"
#include "mc/entity/components/ShieldFlickerComponent.h"
#include "mc/entity/components/SwellComponent.h"
#include "mc/entity/components/SynchedActorDataComponent.h"
#include "mc/entity/components/death/DeathTickingComponent.h"
#include "mc/entity/components/death/TickDeathNeededComponent.h"
#else // @header-generator platform
#include "mc/deps/ecs/strict/Write.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ActorTickedComponent;
struct DeathTickingComponent;
struct OverlayAlphaComponent;
struct ShieldFlickerComponent;
struct SwellComponent;
struct SynchedActorDataComponent;
struct TickDeathNeededComponent;
struct WitherBossFlagComponent;
#endif // @header-generator platform
// clang-format on

struct ClientWitherBossTickDeathSystemImpl
#if defined(LL_PLAT_A) // @header-generator platform
: public ::IStrictTickingSystem<StrictExecutionContext<
      Filter<ActorTickedComponent, TickDeathNeededComponent, WitherBossFlagComponent>,
      Read<DeathTickingComponent>,
      Write<OverlayAlphaComponent, ShieldFlickerComponent, SwellComponent, SynchedActorDataComponent>,
      AddRemove<>,
      GlobalRead<>,
      GlobalWrite<>,
      EntityFactoryT<>>> {
#else // @header-generator platform
: public ::IStrictTickingSystem<::StrictExecutionContext<
      ::Filter<::ActorTickedComponent, ::TickDeathNeededComponent, ::WitherBossFlagComponent>,
      ::Read<::DeathTickingComponent>,
      ::Write<::OverlayAlphaComponent, ::ShieldFlickerComponent, ::SwellComponent, ::SynchedActorDataComponent>,
      ::AddRemove<>,
      ::GlobalRead<>,
      ::GlobalWrite<>,
      ::EntityFactoryT<>>> {
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ClientWitherBossTickDeathSystemImpl();

    virtual void tick(::StrictExecutionContext<Filter<ActorTickedComponent, TickDeathNeededComponent, WitherBossFlagComponent>, Read<DeathTickingComponent>, Write<OverlayAlphaComponent, ShieldFlickerComponent, SwellComponent, SynchedActorDataComponent>, AddRemove<>, GlobalRead<>, GlobalWrite<>, EntityFactoryT<>>&);
    // clang-format on
#else // @header-generator platform
    virtual void tick(
        ::StrictExecutionContext<
            ::Filter<::ActorTickedComponent, ::TickDeathNeededComponent, ::WitherBossFlagComponent>,
            ::Read<::DeathTickingComponent>,
            ::Write<::OverlayAlphaComponent, ::ShieldFlickerComponent, ::SwellComponent, ::SynchedActorDataComponent>,
            ::AddRemove<>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context
    ) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _tick(
#else // @header-generator platform
    MCAPI static void _tick(
#endif // @header-generator platform
        ::StrictEntityContext const&,
#if defined(LL_PLAT_A) // @header-generator platform
        ::DeathTickingComponent const&,
        ::OverlayAlphaComponent&,
        ::ShieldFlickerComponent&,
        ::SwellComponent&,
        ::SynchedActorDataComponent&
#else // @header-generator platform
        ::DeathTickingComponent const& deathTicking,
        ::OverlayAlphaComponent&       overlayAlpha,
        ::ShieldFlickerComponent&      shieldFlicker,
        ::SwellComponent&              swell,
        ::SynchedActorDataComponent&   synchedActorData
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick(
#else // @header-generator platform
    MCAPI void $tick(
#endif // @header-generator platform
        ::StrictExecutionContext<
#if defined(LL_PLAT_A) // @header-generator platform
            Filter<ActorTickedComponent, TickDeathNeededComponent, WitherBossFlagComponent>,
            Read<DeathTickingComponent>,
            Write<OverlayAlphaComponent, ShieldFlickerComponent, SwellComponent, SynchedActorDataComponent>,
            AddRemove<>,
            GlobalRead<>,
            GlobalWrite<>,
            EntityFactoryT<>>&
#else // @header-generator platform
            ::Filter<::ActorTickedComponent, ::TickDeathNeededComponent, ::WitherBossFlagComponent>,
            ::Read<::DeathTickingComponent>,
            ::Write<::OverlayAlphaComponent, ::ShieldFlickerComponent, ::SwellComponent, ::SynchedActorDataComponent>,
            ::AddRemove<>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
