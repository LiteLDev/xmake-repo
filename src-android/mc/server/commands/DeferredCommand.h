#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/DeferredCommandBase.h"

// auto generated forward declare list
// clang-format off
class CommandContext;
class MinecraftCommands;
struct MCRESULT;
// clang-format on

class DeferredCommand : public ::DeferredCommandBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<CommandContext>> mContext;
    ::ll::TypedStorage<1, 1, bool>                            mSuppressOutput;
    ::ll::UntypedStorage<1, 15>                               mIsRequest;
    ::ll::UntypedStorage<8, 48>                               mCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    DeferredCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DeferredCommand();

    virtual void execute(::MinecraftCommands&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $execute(::MinecraftCommands&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
