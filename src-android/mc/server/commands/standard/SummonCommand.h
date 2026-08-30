#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandPositionFloat.h"
#include "mc/server/commands/CommandSelector.h"
#include "mc/server/commands/RelativeFloat.h"
#include "mc/server/commands/ServerCommand.h"
#include "mc/util/rotation_command_utils/FacingResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Vec3;
struct ActorDefinitionIdentifier;
// clang-format on

class SummonCommand : public ::ServerCommand {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorDefinitionIdentifier const*>   mActorId;
    ::ll::TypedStorage<4, 16, ::CommandPositionFloat>              mPosition;
    ::ll::TypedStorage<8, 24, std::string>                         mEventName;
    ::ll::TypedStorage<8, 24, std::string>                         mActorName;
    ::ll::TypedStorage<1, 1, bool>                                 mNameSet;
    ::ll::TypedStorage<4, 8, ::RelativeFloat>                      mYRot;
    ::ll::TypedStorage<4, 8, ::RelativeFloat>                      mXRot;
    ::ll::TypedStorage<1, 1, bool>                                 mIsUsingRotation;
    ::ll::TypedStorage<1, 1, bool>                                 mFacingIsPosition;
    ::ll::TypedStorage<4, 4, ::RotationCommandUtils::FacingResult> mHaveFacing;
    ::ll::UntypedStorage<8, 200>                                   mFacingEntity;
    ::ll::TypedStorage<4, 16, ::CommandPositionFloat>              mFacingPos;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SummonCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;

    virtual void postExecute(::Actor&) const;
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

    MCNAPI void $postExecute(::Actor&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
