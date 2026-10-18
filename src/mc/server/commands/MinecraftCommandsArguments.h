#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CommandRegistry;
class ICommandsContextProvider;
// clang-format on

struct MinecraftCommandsArguments {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ICommandsContextProvider&>        mContext;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CommandRegistry>&&> mRegistry;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ICommandsContextProvider&>            mContext;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CommandRegistry>&&> mRegistry;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftCommandsArguments& operator=(MinecraftCommandsArguments const&);
    MinecraftCommandsArguments(MinecraftCommandsArguments const&);
    MinecraftCommandsArguments();
};
