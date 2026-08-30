#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandSelector.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
struct ActorDefinitionIdentifier;
// clang-format on

class RideCommand : public ::Command {
public:
    // RideCommand inner types define
    enum class VehicleAction : uchar {
        StartRiding     = 0,
        StopRiding      = 1,
        EvictPassengers = 2,
        SummonPassenger = 3,
        SummonVehicle   = 4,
    };

    enum class TeleportRules : uchar {
        TeleportPassenger = 0,
        TeleportVehicle   = 1,
    };

    enum class VehicleFillType : uchar {
        UntilFull   = 0,
        IfGroupFits = 1,
    };

    enum class RideRules : uchar {
        NoVehicleChange  = 0,
        ReassignVehicles = 1,
        SkipPassengers   = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 200>                                 mTargets;
    ::ll::UntypedStorage<8, 200>                                 mVehicle;
    ::ll::TypedStorage<1, 1, ::RideCommand::VehicleAction>       mAction;
    ::ll::TypedStorage<1, 1, ::RideCommand::TeleportRules>       mTeleportRules;
    ::ll::TypedStorage<1, 1, ::RideCommand::VehicleFillType>     mFillType;
    ::ll::TypedStorage<1, 1, ::RideCommand::RideRules>           mRideRules;
    ::ll::TypedStorage<8, 8, ::ActorDefinitionIdentifier const*> mActorId;
    ::ll::TypedStorage<8, 24, std::string>                       mEventName;
    ::ll::TypedStorage<8, 24, std::string>                       mActorName;
    ::ll::TypedStorage<1, 1, bool>                               mNameSet;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RideCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
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
