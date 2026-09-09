#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/shared_types/v1_21_100/camera/PlayerViewMode.h"
#include "mc/deps/vanilla_camera/IVanillaCameraAPI.h"

// auto generated forward declare list
// clang-format off
class Actor;
class EntityContext;
class IClientInstance;
class Mob;
// clang-format on

class VanillaCameraAPI : public ::IVanillaCameraAPI {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IClientInstance&>         mClientInstance;
    ::ll::TypedStorage<4, 8, std::optional<float> const> mLegacySneakOffset;
    // NOLINTEND

public:
    // prevent constructor by default
    VanillaCameraAPI& operator=(VanillaCameraAPI const&);
    VanillaCameraAPI(VanillaCameraAPI const&);
    VanillaCameraAPI();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~VanillaCameraAPI();

    virtual std::optional<IVanillaCameraAPI::DamageBobParameters> tryGetDamageBobParameters(::WeakRef<EntityContext> const, float) const;

    virtual std::optional<IVanillaCameraAPI::MovementBobParameters> tryGetMovementBobParameters(::WeakRef<EntityContext> const, float) const;

    virtual std::optional<IVanillaCameraAPI::VehicleRotationInformation> tryGetVehicleRotationInformation(::WeakRef<EntityContext> const) const;

    virtual ::IVanillaCameraAPI::VehicleSeatCameraOptions getVehicleSeatCameraOptions(::WeakRef<EntityContext> const) const;

    virtual std::optional<IVanillaCameraAPI::PortalData> tryGetPortalData() const;

    virtual ::SharedTypes::v1_21_100::PlayerViewMode getPlayerViewPerspectiveOption() const;

    virtual std::optional<bool> isPlayerSleeping() const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit VanillaCameraAPI(::IClientInstance&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IClientInstance&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::optional<IVanillaCameraAPI::DamageBobParameters>
           $tryGetDamageBobParameters(::WeakRef<EntityContext> const, float) const;

    MCNAPI std::optional<IVanillaCameraAPI::MovementBobParameters>
           $tryGetMovementBobParameters(::WeakRef<EntityContext> const, float) const;

    MCNAPI std::optional<IVanillaCameraAPI::VehicleRotationInformation>
           $tryGetVehicleRotationInformation(::WeakRef<EntityContext> const) const;

    MCNAPI ::IVanillaCameraAPI::VehicleSeatCameraOptions
    $getVehicleSeatCameraOptions(::WeakRef<EntityContext> const) const;

    MCNAPI std::optional<IVanillaCameraAPI::PortalData> $tryGetPortalData() const;

    MCNAPI ::SharedTypes::v1_21_100::PlayerViewMode $getPlayerViewPerspectiveOption() const;

    MCNAPI std::optional<bool> $isPlayerSleeping() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
