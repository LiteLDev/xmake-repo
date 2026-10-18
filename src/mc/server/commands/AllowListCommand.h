#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
class AllowListCommand {
#else // @header-generator platform
// auto generated inclusion list
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
class AllowListFile;
class CommandOrigin;
class CommandOutput;
// clang-format on

class AllowListCommand : public ::Command {
#endif // @header-generator platform
public:
    // AllowListCommand inner types define
#if defined(LL_PLAT_C) // @header-generator platform
    enum class Action : int {};
#else // @header-generator platform
    enum class Action : int {
        List       = 0,
        On         = 1,
        Off        = 2,
        AddName    = 3,
        RemoveName = 4,
        Reload     = 5,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::AllowListCommand::Action> mAction;
    ::ll::TypedStorage<8, 32, ::std::string>             mName;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::AllowListFile*& mAllowListFile();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::CommandOrigin const& origin, ::CommandOutput& output) const;
    // NOLINTEND
#endif // @header-generator platform
};
#endif // @header-generator platform
