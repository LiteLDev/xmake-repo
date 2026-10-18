#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
class EditorAllowListCommand {
#else // @header-generator platform
// auto generated inclusion list
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class EditorAllowList;
// clang-format on

class EditorAllowListCommand : public ::Command {
#endif // @header-generator platform
public:
    // EditorAllowListCommand inner types define
#if defined(LL_PLAT_C) // @header-generator platform
    enum class Action : int {};
#else // @header-generator platform
    enum class Action : int {
        Reload = 0,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::EditorAllowListCommand::Action> mAction;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const&, ::CommandOutput& output) const /*override*/;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::EditorAllowList*& mEditorAllowList();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::CommandOrigin const&, ::CommandOutput& output) const;
    // NOLINTEND
#endif // @header-generator platform
};
#endif // @header-generator platform
