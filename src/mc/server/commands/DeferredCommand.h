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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<CommandContext>> mContext;
    ::ll::TypedStorage<1, 1, bool>                            mSuppressOutput;
    ::ll::UntypedStorage<1, 15>                               mIsRequest;
    ::ll::UntypedStorage<8, 48>                               mCallback;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CommandContext>> mContext;
    ::ll::TypedStorage<1, 1, bool>                                mSuppressOutput;
    ::ll::TypedStorage<1, 1, bool>                                mIsRequest;
    ::ll::TypedStorage<8, 64, ::std::function<void(::MCRESULT)>>  mCallback;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    DeferredCommand();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~DeferredCommand();
#else // @header-generator platform
    virtual ~DeferredCommand() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void execute(::MinecraftCommands&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void execute(::MinecraftCommands& commands) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $execute(::MinecraftCommands&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $execute(::MinecraftCommands& commands);
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
