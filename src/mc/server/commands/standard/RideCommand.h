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
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    enum class RideRules : uchar {
        NoVehicleChange  = 0,
        ReassignVehicles = 1,
        SkipPassengers   = 2,
    };

    enum class TeleportRules : uchar {
        TeleportPassenger = 0,
        TeleportVehicle   = 1,
    };

#endif // @header-generator platform
    enum class VehicleAction : uchar {
        StartRiding     = 0,
        StopRiding      = 1,
        EvictPassengers = 2,
        SummonPassenger = 3,
        SummonVehicle   = 4,
    };

#if defined(LL_PLAT_A) // @header-generator platform
    enum class TeleportRules : uchar {
        TeleportPassenger = 0,
        TeleportVehicle   = 1,
    };

#else // @header-generator platform
#endif // @header-generator platform
    enum class VehicleFillType : uchar {
        UntilFull   = 0,
        IfGroupFits = 1,
    };

#if defined(LL_PLAT_A) // @header-generator platform
    enum class RideRules : uchar {
        NoVehicleChange  = 0,
        ReassignVehicles = 1,
        SkipPassengers   = 2,
    };

#else // @header-generator platform
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 200>                                 mTargets;
    ::ll::UntypedStorage<8, 200>                                 mVehicle;
#else // @header-generator platform
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Actor>>       mTargets;
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Actor>>       mVehicle;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, ::RideCommand::VehicleAction>       mAction;
    ::ll::TypedStorage<1, 1, ::RideCommand::TeleportRules>       mTeleportRules;
    ::ll::TypedStorage<1, 1, ::RideCommand::VehicleFillType>     mFillType;
    ::ll::TypedStorage<1, 1, ::RideCommand::RideRules>           mRideRules;
    ::ll::TypedStorage<8, 8, ::ActorDefinitionIdentifier const*> mActorId;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                       mEventName;
    ::ll::TypedStorage<8, 24, std::string>                       mActorName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                     mEventName;
    ::ll::TypedStorage<8, 32, ::std::string>                     mActorName;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                               mNameSet;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~RideCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
#else // @header-generator platform
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
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
