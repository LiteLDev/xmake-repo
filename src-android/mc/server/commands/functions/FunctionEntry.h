#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/functions/FunctionQueueOrder.h"
#include "mc/server/commands/functions/FunctionState.h"
#include "mc/server/commands/functions/IFunctionEntry.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class FunctionManager;
// clang-format on

class FunctionEntry : public ::IFunctionEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<IFunctionEntry>>> mCommandList;
    ::ll::TypedStorage<1, 1, ::FunctionState>                               mState;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FunctionEntry();

    virtual void execute(::FunctionManager&, ::CommandOrigin const&, ::FunctionQueueOrder);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::FunctionState getErrorState() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $execute(::FunctionManager&, ::CommandOrigin const&, ::FunctionQueueOrder);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
