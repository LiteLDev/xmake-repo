#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/functions/FunctionQueueOrder.h"
#include "mc/server/commands/functions/IFunctionEntry.h"

// auto generated forward declare list
// clang-format off
class Command;
class CommandOrigin;
class FunctionManager;
// clang-format on

class CommandFunctionEntry : public ::IFunctionEntry {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<Command>> mCommand;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Command>> mCommand;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~CommandFunctionEntry();
#else // @header-generator platform
    virtual ~CommandFunctionEntry() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void execute(::FunctionManager&, ::CommandOrigin const&, ::FunctionQueueOrder);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void
    execute(::FunctionManager& functionManager, ::CommandOrigin const& origin, ::FunctionQueueOrder order) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $execute(::FunctionManager&, ::CommandOrigin const&, ::FunctionQueueOrder);
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $execute(::FunctionManager& functionManager, ::CommandOrigin const& origin, ::FunctionQueueOrder order);
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
