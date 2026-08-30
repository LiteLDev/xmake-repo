#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandPositionFloat.h"
#include "mc/server/commands/CommandSelector.h"
#include "mc/server/commands/CommandSelectorResults.h"
#include "mc/server/commands/RelativeFloat.h"
#include "mc/util/rotation_command_utils/FacingResult.h"
#include "mc/util/rotation_command_utils/RotationData.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class CommandArea;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class TeleportTarget;
// clang-format on

class TeleportCommand : public ::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>                                    mApplyTeleport;
    ::ll::UntypedStorage<8, 200>                                   mTargets;
    ::ll::UntypedStorage<8, 200>                                   mDestinationEntity;
    ::ll::TypedStorage<4, 16, ::CommandPositionFloat>              mDestinationPos;
    ::ll::UntypedStorage<8, 200>                                   mFacingEntity;
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
    virtual ~TeleportCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void applyTarget(::Actor&, ::TeleportTarget, bool);

    MCNAPI static ::TeleportTarget computeTarget(
        ::Actor&,
        ::Vec3,
        ::Vec3*,
        ::DimensionType,
        std::optional<RotationCommandUtils::RotationData> const&,
        int
    );

    MCNAPI static void setup(::CommandRegistry&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
