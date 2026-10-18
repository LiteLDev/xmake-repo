#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/server/commands/CurrentCmdVersion.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/CommandOriginSystem.h"

// auto generated forward declare list
// clang-format off
class Command;
class CommandOrigin;
class FunctionManager;
#if defined(LL_PLAT_A) // @header-generator platform
class HashedString;
#else // @header-generator platform
#endif // @header-generator platform
class MinecraftCommands;
#if defined(LL_PLAT_A) // @header-generator platform
class ResourcePackManager;
#else // @header-generator platform
#endif // @header-generator platform
class ScriptStat;
class ScriptStatCollector;
// clang-format on

class CommandManager {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::MinecraftCommands&>                 mCommands;
    ::ll::TypedStorage<8, 8, std::unique_ptr<FunctionManager>>     mFunctionManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptStatCollector>> mScriptStatCollector;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::MinecraftCommands&>                     mCommands;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::FunctionManager>>     mFunctionManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptStatCollector>> mScriptStatCollector;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    CommandManager& operator=(CommandManager const&);
    CommandManager(CommandManager const&);
    CommandManager();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit CommandManager(::MinecraftCommands&);
#else // @header-generator platform
    MCAPI ::std::optional<::ScriptStat>
    _collectScriptStats(uint64 currentTick, uint64 lastCollectedTick, uint64 collectionFrequency);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<ScriptStat> _collectScriptStats(ulong, ulong, ulong);
#else // @header-generator platform
    MCAPI void initialize(::std::unique_ptr<::FunctionManager> functionManager);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void runCommand(::Command& command, ::CommandOrigin& origin, ::CommandOriginSystem originSystem);
#endif // @header-generator platform
    // NOLINTEND
};
