#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/DeferredCommandBase.h"

// auto generated forward declare list
// clang-format off
class Command;
class CommandOrigin;
class MinecraftCommands;
// clang-format on

class DeferredCompiledCommand : public ::DeferredCommandBase {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<Command*>>      mCompiledCommand;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CommandOrigin>> mOrigin;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::Command*>>        mCompiledCommand;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CommandOrigin>> mOrigin;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    DeferredCompiledCommand();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~DeferredCompiledCommand();
#else // @header-generator platform
    virtual ~DeferredCompiledCommand() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void execute(::MinecraftCommands&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void execute(::MinecraftCommands&) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $execute(::MinecraftCommands&);
#else // @header-generator platform
    MCAPI void $execute(::MinecraftCommands&);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
