#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CurrentCmdVersion.h"
#include "mc/world/level/CommandOriginSystem.h"

// auto generated forward declare list
// clang-format off
class Command;
class CommandOrigin;
class FunctionManager;
class HashedString;
class MinecraftCommands;
class ResourcePackManager;
class ScriptStat;
class ScriptStatCollector;
// clang-format on

class CommandManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::MinecraftCommands&>                 mCommands;
    ::ll::TypedStorage<8, 8, std::unique_ptr<FunctionManager>>     mFunctionManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptStatCollector>> mScriptStatCollector;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandManager& operator=(CommandManager const&);
    CommandManager(CommandManager const&);
    CommandManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CommandManager(::MinecraftCommands&);

    MCNAPI std::optional<ScriptStat> _collectScriptStats(ulong, ulong, ulong);

    MCNAPI ::MinecraftCommands const& getCommands() const;

    MCNAPI ::MinecraftCommands& getCommands();

    MCNAPI ::FunctionManager& getFunctionManager();

    MCNAPI void initialize(std::unique_ptr<FunctionManager>);

    MCNAPI void loadFunctionManager(::ResourcePackManager&);

    MCNAPI void runCommand(::Command&, ::CommandOrigin&, ::CommandOriginSystem);

    MCNAPI void runCommand(::HashedString const&, ::CommandOrigin&, ::CommandOriginSystem, ::CurrentCmdVersion const);

    MCNAPI void tick();

    MCNAPI ~CommandManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::MinecraftCommands&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
