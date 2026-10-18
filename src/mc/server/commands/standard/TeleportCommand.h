#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/math/Vec3.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandPositionFloat.h"
#include "mc/server/commands/CommandSelector.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/server/commands/CommandSelectorResults.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/server/commands/RelativeFloat.h"
#include "mc/util/rotation_command_utils/FacingResult.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/util/rotation_command_utils/RotationData.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/level/dimension/DimensionType.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
class CommandArea;
#else // @header-generator platform
class Actor;
#endif // @header-generator platform
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class TeleportTarget;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class Vec3;
struct DimensionType;
namespace RotationCommandUtils { class RotationData; }
#endif // @header-generator platform
// clang-format on

class TeleportCommand : public ::Command {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // TeleportCommand inner types declare
    // clang-format off
    struct mApplyTeleport;
    // clang-format on

    // TeleportCommand inner types define
    struct mApplyTeleport {};

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48>                                    mApplyTeleport;
    ::ll::UntypedStorage<8, 200>                                   mTargets;
    ::ll::UntypedStorage<8, 200>                                   mDestinationEntity;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<void(
            ::Actor&,
            ::Vec3,
            ::Vec3*,
            ::DimensionType,
            ::std::optional<::RotationCommandUtils::RotationData> const&,
            int
        )>>
                                                                   mApplyTeleport;
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Actor>>         mTargets;
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Actor>>         mDestinationEntity;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 16, ::CommandPositionFloat>              mDestinationPos;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 200>                                   mFacingEntity;
#else // @header-generator platform
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Actor>>         mFacingEntity;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 16, ::CommandPositionFloat>              mFacingPos;
    ::ll::TypedStorage<4, 8, ::RelativeFloat>                      mYRot;
    ::ll::TypedStorage<4, 8, ::RelativeFloat>                      mXRot;
    ::ll::TypedStorage<4, 4, ::RotationCommandUtils::FacingResult> mHaveFacing;
    ::ll::TypedStorage<1, 1, bool>                                 mDestinationIsPosition;
    ::ll::TypedStorage<1, 1, bool>                                 mIsUsingRotation;
    ::ll::TypedStorage<1, 1, bool>                                 mFacingIsPosition;
    ::ll::TypedStorage<1, 1, bool>                                 mCheckForBlocks;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~TeleportCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
#else // @header-generator platform
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void applyTarget(::Actor&, ::TeleportTarget, bool);
#else // @header-generator platform
    MCAPI static void applyTarget(::Actor& victim, ::TeleportTarget target, bool keepVelocity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TeleportTarget computeTarget(
        ::Actor&,
        ::Vec3,
        ::Vec3*,
        ::DimensionType,
        std::optional<RotationCommandUtils::RotationData> const&,
        int
#else // @header-generator platform
    MCAPI static ::TeleportTarget computeTarget(
        ::Actor&                                                     victim,
        ::Vec3                                                       destination,
        ::Vec3*                                                      facePosition,
        ::DimensionType                                              destinationDimension,
        ::std::optional<::RotationCommandUtils::RotationData> const& rotationData,
        int                                                          commandVersion
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void setup(::CommandRegistry&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static void setup(::CommandRegistry& registry);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $execute(::CommandOrigin const& origin, ::CommandOutput& output) const;
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
