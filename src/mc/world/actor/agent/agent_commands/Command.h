#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/AgentActionType.h"
#include "mc/world/actor/agent/agent_components/Direction.h"

// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemStack;
#else // @header-generator platform
#endif // @header-generator platform
class Player;
class Vec3;
// clang-format on

namespace AgentCommands {

class Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Actor&>          mTarget;
    ::ll::TypedStorage<8, 8, ::Player&>         mCommander;
    ::ll::TypedStorage<4, 4, ::AgentActionType> mActionType;
    ::ll::TypedStorage<1, 1, bool>              mResult;
    ::ll::TypedStorage<1, 1, bool>              mIsQueryResult;
    // NOLINTEND

public:
    // prevent constructor by default
    Command& operator=(Command const&);
    Command(Command const&);
    Command();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~Command();
#else // @header-generator platform
    virtual ~Command() = default;
#endif // @header-generator platform

    virtual void execute();

    virtual bool isDone() = 0;

    virtual void tick();

    virtual void fireCommandDoneEvent();
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // member functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI ::Vec3 _getNextPosFromDirection(::AgentComponents::Direction dir);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $execute();
#else // @header-generator platform
    MCAPI void $execute();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick();
#else // @header-generator platform
    MCFOLD void $tick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fireCommandDoneEvent();
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $fireCommandDoneEvent();
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

} // namespace AgentCommands
