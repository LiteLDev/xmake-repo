#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
class DedicatedWSServerCommand {};
#else // @header-generator platform
// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandMessage.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class IMinecraftApp;
// clang-format on

class DedicatedWSServerCommand : public ::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::CommandMessage> mServer;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::IMinecraftApp*& mApp();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::CommandOrigin const& origin, ::CommandOutput& output) const;
    // NOLINTEND
};
#endif // @header-generator platform
#endif // @header-generator platform
