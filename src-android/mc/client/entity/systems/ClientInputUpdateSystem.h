#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

class ClientInputUpdateSystem {
public:
    // ClientInputUpdateSystem inner types define
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
};
