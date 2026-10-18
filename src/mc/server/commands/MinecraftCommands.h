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
#if defined(LL_PLAT_A) // @header-generator platform
class DeferredScriptCommand;
#else // @header-generator platform
#endif // @header-generator platform
class Experiments;
class ICommandsContextProvider;
class ItemRegistryRef;
class Level;
class Packet;
class Recipes;
struct MCRESULT;
struct MinecraftCommandsArguments;
#if defined(LL_PLAT_A) // @header-generator platform
namespace br::worldgen { class StructureRegistry; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class MinecraftCommands {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ICommandsContextProvider&>                                 mContextProvider;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CommandRegistry>>                            mRegistry;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CommandOutputSender>>                        mOutputSender;
    ::ll::UntypedStorage<1, 16>                                                           mOpPermissionLevel;
    ::ll::UntypedStorage<8, 48>                                                           mChatPermissionsCallback;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, std::unique_ptr<Command>>> mCompiledCommandMap;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<DeferredCommandBase>>>          mDeferredCommands;
    ::ll::UntypedStorage<8, 16>                                                           mDeferredScriptCommandCount;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ICommandsContextProvider&>              mContextProvider;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CommandRegistry>>     mRegistry;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CommandOutputSender>> mOutputSender;
    ::ll::TypedStorage<1, 1, ::CommandPermissionLevel>                 mOpPermissionLevel;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                 mChatPermissionsCallback;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::std::unique_ptr<::Command>>> mCompiledCommandMap;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::DeferredCommandBase>>>            mDeferredCommands;
    ::ll::TypedStorage<8, 8, uint64> mDeferredScriptCommandCount;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftCommands& operator=(MinecraftCommands const&);
    MinecraftCommands(MinecraftCommands const&);
    MinecraftCommands();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~MinecraftCommands();
#else // @header-generator platform
    virtual ~MinecraftCommands() = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit MinecraftCommands(::MinecraftCommandsArguments&&);
#else // @header-generator platform
    MCAPI explicit MinecraftCommands(::MinecraftCommandsArguments&& args);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Command* compileCommand(
        ::HashedString const&,
        ::CommandOrigin&,
        ::CurrentCmdVersion const,
        std::function<void(const std::string&)>
#else // @header-generator platform
    MCAPI ::Command* compileCommand(
        ::HashedString const&                       commandStr,
        ::CommandOrigin&                            origin,
        ::CurrentCmdVersion                         commandVersion,
        ::std::function<void(::std::string const&)> onParserError
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void enqueueDeferredCommand(
        ::std::unique_ptr<::CommandContext> context,
        bool                                suppressOutput,
        bool                                isRequest,
        ::std::function<void(::MCRESULT)>   callback
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initCoreEnumsServer(::ActorDefinitionGroup const&, ::CameraPresets const&, ::Recipes const&);
#else // @header-generator platform
    MCAPI void
    enqueueDeferredCompiledCommand(::gsl::not_null<::Command*> command, ::std::unique_ptr<::CommandOrigin> origin);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void registerChatPermissionsCallback(std::function<bool()>);
#else // @header-generator platform
    MCAPI ::MCRESULT executeCommand(::CommandContext& context, bool suppressOutput) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::MCRESULT requestCommandExecution(::CommandContext&, bool);
#else // @header-generator platform
    MCAPI void handleOutput(::CommandOrigin const& origin, ::CommandOutput const& output) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::MCRESULT requestCommandExecution(std::unique_ptr<CommandOrigin>, std::string const&, int, bool);
#else // @header-generator platform
    MCAPI void initCoreEnums(
        ::ItemRegistryRef        itemRegistry,
        ::Level const&           level,
        ::ActorFactory const&    actorFactory,
        ::Experiments const&     experiments,
        ::BaseGameVersion const& worldBaseGameVersion
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void runCommand(::Command&, ::CommandOrigin&);
#else // @header-generator platform
    MCAPI void initCoreEnumsServer(
        ::ActorDefinitionGroup const& actorDefinitionGroup,
        ::CameraPresets const&        cameraPresets,
        ::Recipes const&              recipes
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void runCommand(::HashedString const&, ::CommandOrigin&, ::CurrentCmdVersion const);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void registerChatPermissionsCallback(::std::function<bool()> callback);

    MCAPI ::MCRESULT requestCommandExecution(::CommandContext& context, bool suppressOutput);

    MCAPI ::MCRESULT requestCommandExecution(
        ::std::unique_ptr<::CommandOrigin> origin,
        ::std::string const&               commandLine,
        int                                version,
        bool                               suppressOutput
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setOutputSender(std::unique_ptr<CommandOutputSender>);
#else // @header-generator platform
    MCAPI void
    runCommand(::HashedString const& commandStr, ::CommandOrigin& origin, ::CurrentCmdVersion commandVersion);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setRegistryNetworkUpdateCallback(std::function<void(const Packet&)>) const;
#else // @header-generator platform
    MCAPI void setRegistryNetworkUpdateCallback(::std::function<void(::Packet const&)> callback) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void tick();
#else // @header-generator platform
    MCAPI void tick();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::CommandOutputType getOutputType(::CommandOrigin const&);
#else // @header-generator platform
    MCAPI static ::CommandOutputType getOutputType(::CommandOrigin const& origin);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void registerSharedClientServerEnums(::CommandRegistry&);
#else // @header-generator platform
    MCAPI static void registerSharedClientServerEnums(::CommandRegistry& registry);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::MinecraftCommandsArguments&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::MinecraftCommandsArguments&& args);
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
