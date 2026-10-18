#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandBlockName.h"
#include "mc/server/commands/CommandPosition.h"
#include "mc/server/commands/CommandPositionFloat.h"
#include "mc/server/commands/CommandSelector.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
#if defined(LL_PLAT_A) // @header-generator platform
struct ExecuteCommandPositionData;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ExecuteCommand : public ::Command {
public:
    // ExecuteCommand inner types define
    enum class Mode : int {
        Execute = 0,
        Detect  = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 200>                       mTargets;
    ::ll::TypedStorage<4, 16, ::CommandPositionFloat>  mPosition;
    ::ll::TypedStorage<4, 16, ::CommandPosition>       mDetectPosition;
    ::ll::TypedStorage<8, 8, ::CommandBlockName>       mBlock;
    ::ll::TypedStorage<4, 4, int>                      mBlockData;
    ::ll::TypedStorage<4, 4, ::ExecuteCommand::Mode>   mMode;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Command>> mCommand;
#else // @header-generator platform
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Actor>> mTargets;
    ::ll::TypedStorage<4, 16, ::CommandPositionFloat>      mPosition;
    ::ll::TypedStorage<4, 16, ::CommandPosition>           mDetectPosition;
    ::ll::TypedStorage<8, 8, ::CommandBlockName>           mBlock;
    ::ll::TypedStorage<4, 4, int>                          mBlockData;
    ::ll::TypedStorage<4, 4, ::ExecuteCommand::Mode>       mMode;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Command>> mCommand;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ExecuteCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
#else // @header-generator platform
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void setup(::CommandRegistry&, bool, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static void setup(::CommandRegistry& registry, bool isLegacyActive, int newExecuteStartVersion);
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
