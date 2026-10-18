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
#if defined(LL_PLAT_A) // @header-generator platform
class Agent;
#else // @header-generator platform
#endif // @header-generator platform
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Player;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace AgentCommands { class Command; }
#endif // @header-generator platform
// clang-format on

class AgentCommand : public ::Command {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // AgentCommand inner types declare
    // clang-format off
    struct CommandInfo;
    // clang-format on

#endif // @header-generator platform
    // AgentCommand inner types define
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    enum class FacingResult : int {
        HaveFacing = 0,
        NoFacing   = 1,
        Error      = 2,
    };

#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        TP             = 16,
#else // @header-generator platform
        Tp             = 16,
#endif // @header-generator platform
        Transfer       = 17,
        Turn           = 18,
    };

#if defined(LL_PLAT_A) // @header-generator platform
    enum class FacingResult : int {
        HaveFacing = 0,
        NoFacing   = 1,
        Error      = 2,
    };
#else // @header-generator platform
    struct CommandInfo {};

    using AgentCommandFunction = ::std::function<::std::unique_ptr<::AgentCommands::Command>(::Player&)>;

    using AgentCommandReturnType = ::std::unique_ptr<::AgentCommands::Command>;
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~AgentCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
#else // @header-generator platform
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void createAgent(::Player&, ::CommandOrigin const&, ::CommandOutput&) const;
#else // @header-generator platform
    MCAPI void createAgent(::Player& player, ::CommandOrigin const& origin, ::CommandOutput& output) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void reportSuccess(bool, ::CommandOutput&) const;
#else // @header-generator platform
    MCAPI void reportSuccess(bool success, ::CommandOutput& output) const;
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
