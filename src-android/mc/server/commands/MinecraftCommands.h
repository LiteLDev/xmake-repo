#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/server/commands/CommandOutputType.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/CurrentCmdVersion.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class ActorFactory;
class BaseGameVersion;
class CameraPresets;
class Command;
class CommandContext;
class CommandOrigin;
class CommandOutput;
class CommandOutputSender;
class CommandRegistry;
class DeferredCommandBase;
class DeferredScriptCommand;
class Experiments;
class ICommandsContextProvider;
class ItemRegistryRef;
class Level;
class Packet;
class Recipes;
struct MCRESULT;
struct MinecraftCommandsArguments;
namespace br::worldgen { class StructureRegistry; }
// clang-format on

class MinecraftCommands {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ICommandsContextProvider&>                                 mContextProvider;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CommandRegistry>>                            mRegistry;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CommandOutputSender>>                        mOutputSender;
    ::ll::UntypedStorage<1, 16>                                                           mOpPermissionLevel;
    ::ll::UntypedStorage<8, 48>                                                           mChatPermissionsCallback;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, std::unique_ptr<Command>>> mCompiledCommandMap;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<DeferredCommandBase>>>          mDeferredCommands;
    ::ll::UntypedStorage<8, 16>                                                           mDeferredScriptCommandCount;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftCommands& operator=(MinecraftCommands const&);
    MinecraftCommands(MinecraftCommands const&);
    MinecraftCommands();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftCommands();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MinecraftCommands(::MinecraftCommandsArguments&&);

    MCNAPI ::Command* compileCommand(
        ::HashedString const&,
        ::CommandOrigin&,
        ::CurrentCmdVersion const,
        std::function<void(const std::string&)>
    );

    MCNAPI void enqueueDeferredCommand(std::unique_ptr<CommandContext>, bool, bool, std::function<void(MCRESULT)>);

    MCNAPI void enqueueDeferredCompiledCommand(::gsl::not_null<Command*>, std::unique_ptr<CommandOrigin>);

    MCNAPI bool enqueueDeferredScriptCommand(std::unique_ptr<DeferredScriptCommand>);

    MCNAPI ::MCRESULT executeCommand(::CommandContext&, bool) const;

    MCNAPI ::CommandOutputSender& getOutputSender() const;

    MCNAPI ::CommandRegistry const& getRegistry() const;

    MCNAPI ::CommandRegistry& getRegistry();

    MCNAPI void handleOutput(::CommandOrigin const&, ::CommandOutput const&) const;

    MCNAPI void initCoreEnums(
        ::ItemRegistryRef const,
        ::Level const&,
        ::ActorFactory const&,
        ::Experiments const&,
        ::BaseGameVersion const&
    );

    MCNAPI void initCoreEnumsServer(::ActorDefinitionGroup const&, ::CameraPresets const&, ::Recipes const&);

    MCNAPI void registerChatPermissionsCallback(std::function<bool()>);

    MCNAPI ::MCRESULT requestCommandExecution(::CommandContext&, bool);

    MCNAPI ::MCRESULT requestCommandExecution(std::unique_ptr<CommandOrigin>, std::string const&, int, bool);

    MCNAPI void runCommand(::Command&, ::CommandOrigin&);

    MCNAPI void runCommand(::HashedString const&, ::CommandOrigin&, ::CurrentCmdVersion const);

    MCNAPI void setOutputSender(std::unique_ptr<CommandOutputSender>);

    MCNAPI void setRegistryNetworkUpdateCallback(std::function<void(const Packet&)>) const;

    MCNAPI void tick();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::CommandOutputType getOutputType(::CommandOrigin const&);

    MCNAPI static void registerSharedClientServerEnums(::CommandRegistry&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::MinecraftCommandsArguments&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
