#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/script_core/script_engine/scripting/ClosureGeneric.h"
#include "mc/scripting/modules/minecraft/ScriptServerStateMonitor.h"
#include "mc/scripting/modules/minecraft/commands/ScriptCustomCommandInterface.h"
#include "mc/scripting/modules/minecraft/commands/ScriptCustomCommandResult.h"

// auto generated forward declare list
// clang-format off
class CommandRegistry;
struct CommandFlag;
struct ServerScriptManagerEvents;
namespace ScriptModuleMinecraft { class CommandClosureStorage; }
namespace ScriptModuleMinecraft { struct ScriptCustomCommandError; }
namespace ScriptModuleMinecraft { struct ScriptNamespaceNameError; }
namespace Scripting { struct EngineError; }
// clang-format on

namespace ScriptModuleMinecraft {

class CustomCommandRegistry : public ::ScriptModuleMinecraft::ScriptServerStateMonitor {
public:
    // CustomCommandRegistry inner types declare
    // clang-format off
    struct PendingRegistrations;
    // clang-format on

    // CustomCommandRegistry inner types define
    struct PendingRegistrations {
    public:
        // PendingRegistrations inner types declare
        // clang-format off
        struct CommandData;
        // clang-format on

        // PendingRegistrations inner types define
        struct CommandData {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<8, 32, std::optional<std::string>>                             mAliasOpt;
            ::ll::TypedStorage<8, 120, ::ScriptModuleMinecraft::ScriptCustomCommandInterface> mCommandInterface;
            ::ll::UntypedStorage<8, 104>                                                      mClosure;
            // NOLINTEND

        public:
            // prevent constructor by default
            CommandData& operator=(CommandData const&);
            CommandData(CommandData const&);
            CommandData();

        public:
            // member functions
            // NOLINTBEGIN
            MCNAPI ~CommandData();
            // NOLINTEND

        public:
            // destructor thunk
            // NOLINTBEGIN
            MCNAPI void $dtor();
            // NOLINTEND
        };

        using EnumNameValuesMap = std::unordered_map<std::string, std::vector<std::string>>;

        using CommandMap = std::
            unordered_map<std::string, ScriptModuleMinecraft::CustomCommandRegistry::PendingRegistrations::CommandData>;

    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 24, std::string> mNamespace;
        ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::vector<std::string>>> mEnums;
        ::ll::TypedStorage<8, 40, std::unordered_map<std::string, ScriptModuleMinecraft::CustomCommandRegistry::PendingRegistrations::CommandData>> mCommands;
        // clang-format on
        // NOLINTEND

    public:
        // prevent constructor by default
        PendingRegistrations& operator=(PendingRegistrations const&);
        PendingRegistrations(PendingRegistrations const&);
        PendingRegistrations();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~PendingRegistrations();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::CommandRegistry&> mCommandRegistry;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, ScriptModuleMinecraft::CustomCommandRegistry::PendingRegistrations>> mPendingRegistrationsByPack;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::shared_ptr<ScriptModuleMinecraft::CommandClosureStorage>>> mRegisteredClosures;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<std::string>>> mEnumNameStorage;
    ::ll::TypedStorage<8, 40, std::unordered_set<std::string>> mClaimedAliases;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    CustomCommandRegistry& operator=(CustomCommandRegistry const&);
    CustomCommandRegistry(CustomCommandRegistry const&);
    CustomCommandRegistry();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CustomCommandRegistry();

    virtual void _onScriptInitializationComplete();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CustomCommandRegistry(::ServerScriptManagerEvents&, ::CommandRegistry&);

    MCNAPI std::optional<ScriptModuleMinecraft::ScriptCustomCommandError> _checkNamespaceConsistency(
        ::ScriptModuleMinecraft::CustomCommandRegistry::PendingRegistrations const&,
        std::string_view const
    ) const;

    MCNAPI ::ScriptModuleMinecraft::CustomCommandRegistry::PendingRegistrations&
    _getOrCreatePendingRegistrationsForPack(std::string const&, std::string_view const);

    MCNAPI std::optional<std::string> _tryClaimAlias(std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ServerScriptManagerEvents&, ::CommandRegistry&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_onScriptInitializationComplete();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
