#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class GetCollisionShapeInterface;
class IConstBlockSource;
class StrictEntityContext;
class Vec2;
struct AABBShapeComponent;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct ActorRotationComponent;
struct ClientInputLockComponent;
struct ExternalDataComponent;
struct MobEffectsComponent;
struct MoveInputComponent;
struct MovementAbilitiesComponent;
struct MovementAttributesComponent;
struct PassengerComponent;
struct RawMoveInputComponent;
struct ShouldStopEmotingRequestComponent;
struct SneakingComponent;
struct StateVectorComponent;
struct SubBBsComponent;
struct TickingSystemWithInfo;
struct VanillaClientGameplayComponent;
struct WasInWaterFlagComponent;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct ClientInputLockComponent;
struct MobEffectsComponent;
struct MoveInputComponent;
struct MovementAbilitiesComponent;
struct PassengerComponent;
struct RawMoveInputComponent;
struct ShouldStopEmotingRequestComponent;
struct SneakingComponent;
struct VanillaClientGameplayComponent;
struct WasInWaterFlagComponent;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
class ClientInputUpdateSystem {
public:
    // ClientInputUpdateSystem inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class LookDirection : uchar {
        Up    = 1,
        Down  = 0,
        Left  = 4,
        Right = 5,
        Count = 4,
    };

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static uchar _getLookBitmask(::ClientInputUpdateSystem::LookDirection);

    MCNAPI static uchar
        _getLookBitmask(::ClientInputUpdateSystem::LookDirection, ::ClientInputUpdateSystem::LookDirection);

    MCNAPI static ::TickingSystemWithInfo create();

    MCNAPI static void extractRawHIDInput(
        ::MovementAbilitiesComponent const&,
        ::MoveInputComponent const&,
        ::ActorDataFlagComponent const&,
        ::RawMoveInputComponent&,
        ::Optional<const SneakingComponent>,
        ::Optional<const WasInWaterFlagComponent>
    );

    MCNAPI static void inputHandlerUpdatePlayerState(
        ::MovementAbilitiesComponent const&,
        ::MobEffectsComponent const&,
        ::ActorDataFlagComponent const&,
        ::ActorOwnerComponent&,
        ::MoveInputComponent&,
        ::Optional<const PassengerComponent>,
        ::Optional<const WasInWaterFlagComponent>
    );

    MCNAPI static void updateStopEmotingRequest(
        ::StrictEntityContext const&,
        ::RawMoveInputComponent const&,
        ::ActorDataFlagComponent&,
        ::ActorDataDirtyFlagsComponent&,
        ::ClientInputLockComponent&,
        ::VanillaClientGameplayComponent&,
        ::EntityModifier<ShouldStopEmotingRequestComponent>&
    );
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class LookDirection : schar {
        Up    = 1,
        Down  = 0,
        Left  = 4,
        Right = 5,
        Count = 4,
    };

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void extractRawHIDInput(
        ::MovementAbilitiesComponent const&         abilities,
        ::MoveInputComponent const&                 moveInput,
        ::ActorDataFlagComponent const&             synchedActorData,
        ::RawMoveInputComponent&                    rawMoveInput,
        ::Optional<::SneakingComponent const>       sneaking,
        ::Optional<::WasInWaterFlagComponent const> isInWater
    );

    MCAPI static void inputHandlerUpdatePlayerState(
        ::MovementAbilitiesComponent const&         abilities,
        ::MobEffectsComponent const&                mobEffects,
        ::ActorDataFlagComponent const&             synchedActorData,
        ::ActorOwnerComponent&                      actorOwner,
        ::MoveInputComponent&                       moveInput,
        ::Optional<::PassengerComponent const>      isRiding,
        ::Optional<::WasInWaterFlagComponent const> isInWater
    );

    MCAPI static void updateStopEmotingRequest(
        ::StrictEntityContext const&                           entity,
        ::RawMoveInputComponent const&                         rawMoveInput,
        ::ActorDataFlagComponent&                              actorDataFlag,
        ::ActorDataDirtyFlagsComponent&                        actorDataDirtyFlags,
        ::ClientInputLockComponent&                            clientInputLock,
        ::VanillaClientGameplayComponent&                      vanillaClientGameplay,
        ::EntityModifier<::ShouldStopEmotingRequestComponent>& modifier
    );
    // NOLINTEND
#else // @header-generator platform
    enum class LookDirection : schar {};
#endif // @header-generator platform
#endif // @header-generator platform
};
