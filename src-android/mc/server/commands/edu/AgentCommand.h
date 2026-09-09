#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandItem.h"
#include "mc/server/commands/CommandPosition.h"
#include "mc/world/actor/agent/agent_components/CollectionSpecification.h"
#include "mc/world/actor/agent/agent_components/Direction.h"

// auto generated forward declare list
// clang-format off
class Agent;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Player;
// clang-format on

class AgentCommand : public ::Command {
public:
    // AgentCommand inner types define
    enum class Mode : int {
        Attack         = 0,
        Collect        = 1,
        Create         = 2,
        Detect         = 3,
        DetectRedstone = 4,
        Drop           = 5,
        DropAll        = 6,
        GetItemCount   = 7,
        GetItemDetail  = 8,
        GetItemSpace   = 9,
        GetPosition    = 10,
        InspectData    = 11,
        Move           = 12,
        Place          = 13,
        SetItem        = 14,
        Till           = 15,
        TP             = 16,
        Transfer       = 17,
        Turn           = 18,
    };

    enum class FacingResult : int {
        HaveFacing = 0,
        NoFacing   = 1,
        Error      = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::AgentCommand::Mode>                       mMode;
    ::ll::TypedStorage<1, 1, ::AgentComponents::CollectionSpecification> mCollectMode;
    ::ll::TypedStorage<1, 1, ::AgentComponents::Direction>               mDirection;
    ::ll::TypedStorage<8, 8, ::CommandItem>                              mItem;
    ::ll::TypedStorage<4, 4, int>                                        mSlot;
    ::ll::TypedStorage<4, 4, int>                                        mDestination;
    ::ll::TypedStorage<4, 4, int>                                        mQuantity;
    ::ll::TypedStorage<4, 4, int>                                        mAux;
    ::ll::TypedStorage<4, 16, ::CommandPosition>                         mPos;
    ::ll::TypedStorage<4, 16, ::CommandPosition>                         mFacing;
    ::ll::TypedStorage<1, 1, bool>                                       mIsPosSet;
    ::ll::TypedStorage<4, 4, ::AgentCommand::FacingResult>               mHaveFacing;
    ::ll::TypedStorage<4, 4, float>                                      mYRot;
    ::ll::TypedStorage<1, 1, bool>                                       mIsYRotSet;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AgentCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void createAgent(::Player&, ::CommandOrigin const&, ::CommandOutput&) const;

    MCNAPI void reportSuccess(bool, ::CommandOutput&) const;
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
