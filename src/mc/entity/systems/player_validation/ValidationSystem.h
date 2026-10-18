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
#include "mc/deps/vanilla_components/PlayerComponent.h"
#include "mc/deps/vanilla_components/StateVectorComponent.h"
#include "mc/entity/components/ActorOwnerComponent.h"
#else // @header-generator platform
#include "mc/deps/ecs/strict/Write.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
struct PlayerComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on
#endif // @header-generator platform

namespace PlayerValidation {

#if defined(LL_PLAT_A) // @header-generator platform
struct ValidationSystem : public ::IStrictTickingSystem<StrictExecutionContext<
                              Filter<PlayerComponent>,
                              Read<StateVectorComponent>,
                              Write<ActorOwnerComponent>,
                              AddRemove<>,
                              GlobalRead<>,
                              GlobalWrite<>,
                              EntityFactoryT<>>> {
#else // @header-generator platform
struct ValidationSystem : public ::IStrictTickingSystem<::StrictExecutionContext<
                              ::Filter<::PlayerComponent>,
                              ::Read<::StateVectorComponent>,
                              ::Write<::ActorOwnerComponent>,
                              ::AddRemove<>,
                              ::GlobalRead<>,
                              ::GlobalWrite<>,
                              ::EntityFactoryT<>>> {
public:
    // ValidationSystem inner types define
    using Base = ::IStrictTickingSystem<::StrictExecutionContext<
        ::Filter<::PlayerComponent>,
        ::Read<::StateVectorComponent>,
        ::Write<::ActorOwnerComponent>,
        ::AddRemove<>,
        ::GlobalRead<>,
        ::GlobalWrite<>,
        ::EntityFactoryT<>>>;

#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string const> mMessage;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string const> mMessage;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(
        ::StrictExecutionContext<
            ::Filter<::PlayerComponent>,
            ::Read<::StateVectorComponent>,
            ::Write<::ActorOwnerComponent>,
            ::AddRemove<>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context
    ) /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystem(::std::string&& message);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(
        ::StrictExecutionContext<
            ::Filter<::PlayerComponent>,
            ::Read<::StateVectorComponent>,
            ::Write<::ActorOwnerComponent>,
            ::AddRemove<>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context
    );


#endif // @header-generator platform
    // NOLINTEND
};

} // namespace PlayerValidation
