#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/shared_types/v1_21_100/camera/PlayerViewMode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/shared_types/v1_21_100/camera/PlayerViewMode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

class IVanillaCameraAPI {
public:
    // IVanillaCameraAPI inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct PortalData;
#endif // @header-generator platform
    struct DamageBobParameters;
    struct MovementBobParameters;
    struct VehicleRotationInformation;
    struct VehicleSeatCameraOptions;
#if defined(LL_PLAT_A) // @header-generator platform
    struct PortalData;
#else // @header-generator platform
#endif // @header-generator platform
    // clang-format on

    // IVanillaCameraAPI inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct DamageBobParameters {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mFractionalFramesSinceDeath;
        ::ll::TypedStorage<4, 4, float> mDamagedFromDirectionYawRadians;
        ::ll::TypedStorage<4, 4, float> mDamageCountdownRemaining;
        ::ll::TypedStorage<4, 4, float> mDamageBobStrength;
        // NOLINTEND
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct PortalData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mTime;
        ::ll::TypedStorage<4, 4, float> mRotation;
        ::ll::TypedStorage<4, 4, float> mIntensity;
        // NOLINTEND
    };
#else // @header-generator platform
    struct PortalData {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct MovementBobParameters {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 8, ::Vec2> mMovementDirectionEulerAnglesRadians;
        ::ll::TypedStorage<4, 4, float>  mMovementDistance;
        ::ll::TypedStorage<4, 4, float>  mBobFactor;
        // NOLINTEND
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct DamageBobParameters {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mFractionalFramesSinceDeath;
        ::ll::TypedStorage<4, 4, float> mDamagedFromDirectionYawRadians;
        ::ll::TypedStorage<4, 4, float> mDamageCountdownRemaining;
        ::ll::TypedStorage<4, 4, float> mDamageBobStrength;
        // NOLINTEND
    };
#else // @header-generator platform
    struct DamageBobParameters {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct VehicleRotationInformation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mCenterDirectionRadians;
        ::ll::TypedStorage<4, 4, float> mHalfAngleRadians;
        ::ll::TypedStorage<4, 4, float> mVehicleRotationRadians;
        // NOLINTEND
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct MovementBobParameters {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 8, ::Vec2> mMovementDirectionEulerAnglesRadians;
        ::ll::TypedStorage<4, 4, float>  mMovementDistance;
        ::ll::TypedStorage<4, 4, float>  mBobFactor;
        // NOLINTEND
    };
#else // @header-generator platform
    struct MovementBobParameters {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct VehicleSeatCameraOptions {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 8, std::optional<float>> mThirdPersonCameraDistanceOverride;
        ::ll::TypedStorage<4, 8, std::optional<float>> mCameraRelaxDistanceSmoothingOverride;
        // NOLINTEND
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct VehicleRotationInformation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mCenterDirectionRadians;
        ::ll::TypedStorage<4, 4, float> mHalfAngleRadians;
        ::ll::TypedStorage<4, 4, float> mVehicleRotationRadians;
        // NOLINTEND
    };
#else // @header-generator platform
    struct VehicleRotationInformation {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct PortalData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mTime;
        ::ll::TypedStorage<4, 4, float> mRotation;
        ::ll::TypedStorage<4, 4, float> mIntensity;
        // NOLINTEND
    };

    using PlayerViewMode = ::SharedTypes::v1_21_100::PlayerViewMode;

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IVanillaCameraAPI();

    virtual std::optional<IVanillaCameraAPI::DamageBobParameters> tryGetDamageBobParameters(::WeakRef<EntityContext> const, float) const = 0;

    virtual std::optional<IVanillaCameraAPI::MovementBobParameters> tryGetMovementBobParameters(::WeakRef<EntityContext> const, float) const = 0;

    virtual std::optional<IVanillaCameraAPI::VehicleRotationInformation> tryGetVehicleRotationInformation(::WeakRef<EntityContext> const) const = 0;

    virtual ::IVanillaCameraAPI::VehicleSeatCameraOptions getVehicleSeatCameraOptions(::WeakRef<EntityContext> const) const = 0;

    virtual std::optional<IVanillaCameraAPI::PortalData> tryGetPortalData() const = 0;

    virtual ::SharedTypes::v1_21_100::PlayerViewMode getPlayerViewPerspectiveOption() const = 0;

    virtual std::optional<bool> isPlayerSleeping() const = 0;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct VehicleSeatCameraOptions {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 8, ::std::optional<float>> mThirdPersonCameraDistanceOverride;
        ::ll::TypedStorage<4, 8, ::std::optional<float>> mCameraRelaxDistanceSmoothingOverride;
        // NOLINTEND
    };

    using PlayerViewMode = ::SharedTypes::v1_21_100::PlayerViewMode;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IVanillaCameraAPI() = default;

    virtual ::std::optional<::IVanillaCameraAPI::DamageBobParameters>
    tryGetDamageBobParameters(::WeakRef<::EntityContext> const actorRef, float frameInterpolation) const = 0;

    virtual ::std::optional<::IVanillaCameraAPI::MovementBobParameters>
    tryGetMovementBobParameters(::WeakRef<::EntityContext> const actorRef, float frameInterpolation) const = 0;

    virtual ::std::optional<::IVanillaCameraAPI::VehicleRotationInformation>
    tryGetVehicleRotationInformation(::WeakRef<::EntityContext> const actorId) const = 0;

    virtual ::IVanillaCameraAPI::VehicleSeatCameraOptions
    getVehicleSeatCameraOptions(::WeakRef<::EntityContext> const actorId) const = 0;

    virtual ::std::optional<::IVanillaCameraAPI::PortalData> tryGetPortalData() const = 0;

    virtual ::SharedTypes::v1_21_100::PlayerViewMode getPlayerViewPerspectiveOption() const = 0;

    virtual ::std::optional<bool> isPlayerSleeping() const = 0;
    // NOLINTEND
#else // @header-generator platform
    struct VehicleSeatCameraOptions {};
#endif // @header-generator platform
#endif // @header-generator platform
};
