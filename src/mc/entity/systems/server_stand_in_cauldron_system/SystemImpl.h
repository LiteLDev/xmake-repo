#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated inclusion list
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"

#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#ifndef LL_GENERATED_ANDROID_BASE_STUB_SERVERSTANDINCAULDRONSYSTEM__IMPLBASE
#define LL_GENERATED_ANDROID_BASE_STUB_SERVERSTANDINCAULDRONSYSTEM__IMPLBASE
namespace ServerStandInCauldronSystem { class ImplBase {}; }
#endif
#else // @header-generator platform
class ActorOwnerComponent;
class StrictEntityContext;
struct UpdateWaterStateRequestComponent;
#endif // @header-generator platform
// clang-format on

namespace ServerStandInCauldronSystem {

#if defined(LL_PLAT_A) // @header-generator platform
class SystemImpl : public ::ServerStandInCauldronSystem::ImplBase {};
#else // @header-generator platform
class SystemImpl : public ::IStrictTickingSystem<::StrictExecutionContext<
                       ::Filter<::UpdateWaterStateRequestComponent>,
                       ::Read<::ActorOwnerComponent>,
                       ::Write<>,
                       ::AddRemove<>,
                       ::GlobalRead<>,
                       ::GlobalWrite<>,
                       ::EntityFactoryT<>>> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(
        ::StrictExecutionContext<
            ::Filter<::UpdateWaterStateRequestComponent>,
            ::Read<::ActorOwnerComponent>,
            ::Write<>,
            ::AddRemove<>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext
    ) /*override*/;

    virtual void singleTick(
        ::StrictExecutionContext<
            ::Filter<::UpdateWaterStateRequestComponent>,
            ::Read<::ActorOwnerComponent>,
            ::Write<>,
            ::AddRemove<>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext,
        ::StrictEntityContext&   entityContext
    ) /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _checkInsideCauldron(::ActorOwnerComponent& actorOwner);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(
        ::StrictExecutionContext<
            ::Filter<::UpdateWaterStateRequestComponent>,
            ::Read<::ActorOwnerComponent>,
            ::Write<>,
            ::AddRemove<>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext
    );

    MCAPI void $singleTick(
        ::StrictExecutionContext<
            ::Filter<::UpdateWaterStateRequestComponent>,
            ::Read<::ActorOwnerComponent>,
            ::Write<>,
            ::AddRemove<>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext,
        ::StrictEntityContext&   entityContext
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace ServerStandInCauldronSystem
