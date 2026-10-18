#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/runtime/scripting/Result.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/script_engine/scripting/ClosureGeneric.h"
#include "mc/scripting/modules/minecraft/ScriptServerStateMonitor.h"
#include "mc/scripting/modules/minecraft/commands/ScriptCustomCommandInterface.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft/commands/ScriptCustomCommandResult.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class CommandRegistry;
#if defined(LL_PLAT_A) // @header-generator platform
struct CommandFlag;
#else // @header-generator platform
#endif // @header-generator platform
struct ServerScriptManagerEvents;
namespace ScriptModuleMinecraft { class CommandClosureStorage; }
namespace ScriptModuleMinecraft { struct ScriptCustomCommandError; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptNamespaceNameError; }
namespace Scripting { struct EngineError; }
#else // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptCustomCommandResult; }
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
            ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                         mAliasOpt;
            ::ll::TypedStorage<8, 136, ::ScriptModuleMinecraft::ScriptCustomCommandInterface> mCommandInterface;
            ::ll::TypedStorage<
                8,
                104,
                ::Scripting::ClosureGeneric<::std::optional<::ScriptModuleMinecraft::ScriptCustomCommandResult>>>
                mClosure;
#endif // @header-generator platform
            // NOLINTEND
        };

#if defined(LL_PLAT_A) // @header-generator platform
        using EnumNameValuesMap = std::unordered_map<std::string, std::vector<std::string>>;
#else // @header-generator platform
        using CommandMap = ::std::unordered_map<
            ::std::string,
            ::ScriptModuleMinecraft::CustomCommandRegistry::PendingRegistrations::CommandData>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        using CommandMap = std::
            unordered_map<std::string, ScriptModuleMinecraft::CustomCommandRegistry::PendingRegistrations::CommandData>;
#else // @header-generator platform
        using EnumNameValuesMap = ::std::unordered_map<::std::string, ::std::vector<::std::string>>;

        using EnumValues = ::std::vector<::std::string>;
#endif // @header-generator platform

    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format off
        ::ll::TypedStorage<8, 24, std::string> mNamespace;
        ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::vector<std::string>>> mEnums;
        ::ll::TypedStorage<8, 40, std::unordered_map<std::string, ScriptModuleMinecraft::CustomCommandRegistry::PendingRegistrations::CommandData>> mCommands;
        // clang-format on
#else // @header-generator platform
        ::ll::TypedStorage<8, 32, ::std::string>                                                     mNamespace;
        ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::vector<::std::string>>> mEnums;
        ::ll::TypedStorage<
            8,
            64,
            ::std::unordered_map<
                ::std::string,
                ::ScriptModuleMinecraft::CustomCommandRegistry::PendingRegistrations::CommandData>>
            mCommands;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        PendingRegistrations& operator=(PendingRegistrations const&);
        PendingRegistrations(PendingRegistrations const&);
        PendingRegistrations();
#else // @header-generator platform
#endif // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ~PendingRegistrations();
#else // @header-generator platform
        MCAPI ~PendingRegistrations();
#endif // @header-generator platform
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $dtor();
#else // @header-generator platform
        MCAPI void $dtor();
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    ::ll::TypedStorage<8, 8, ::CommandRegistry&> mCommandRegistry;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, ScriptModuleMinecraft::CustomCommandRegistry::PendingRegistrations>> mPendingRegistrationsByPack;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::shared_ptr<ScriptModuleMinecraft::CommandClosureStorage>>> mRegisteredClosures;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<std::string>>> mEnumNameStorage;
    ::ll::TypedStorage<8, 40, std::unordered_set<std::string>> mClaimedAliases;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::std::string, ::ScriptModuleMinecraft::CustomCommandRegistry::PendingRegistrations>>
        mPendingRegistrationsByPack;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::std::string, ::std::shared_ptr<::ScriptModuleMinecraft::CommandClosureStorage>>>
                                                                               mRegisteredClosures;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::std::string>>> mEnumNameStorage;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::std::string>>             mClaimedAliases;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    CustomCommandRegistry& operator=(CustomCommandRegistry const&);
    CustomCommandRegistry(CustomCommandRegistry const&);
    CustomCommandRegistry();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~CustomCommandRegistry();
#else // @header-generator platform
    virtual ~CustomCommandRegistry() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onScriptInitializationComplete();
#else // @header-generator platform
    virtual void _onScriptInitializationComplete() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI CustomCommandRegistry(::ServerScriptManagerEvents&, ::CommandRegistry&);
#else // @header-generator platform
    MCAPI CustomCommandRegistry(::ServerScriptManagerEvents& events, ::CommandRegistry& commandRegistry);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<ScriptModuleMinecraft::ScriptCustomCommandError> _checkNamespaceConsistency(
        ::ScriptModuleMinecraft::CustomCommandRegistry::PendingRegistrations const&,
        std::string_view const
#else // @header-generator platform
    MCAPI ::std::optional<::ScriptModuleMinecraft::ScriptCustomCommandError> _checkNamespaceConsistency(
        ::ScriptModuleMinecraft::CustomCommandRegistry::PendingRegistrations const& registrations,
        ::std::string_view const                                                    newNamespace
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScriptModuleMinecraft::CustomCommandRegistry::PendingRegistrations&
    _getOrCreatePendingRegistrationsForPack(std::string const&, std::string_view const);

    MCNAPI std::optional<std::string> _tryClaimAlias(std::string const&);
#else // @header-generator platform
    MCAPI ::ScriptModuleMinecraft::CustomCommandRegistry::PendingRegistrations&
    _getOrCreatePendingRegistrationsForPack(::std::string const& packUUID, ::std::string_view const newNamespace);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ServerScriptManagerEvents&, ::CommandRegistry&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::ServerScriptManagerEvents& events, ::CommandRegistry& commandRegistry);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_onScriptInitializationComplete();
#else // @header-generator platform
    MCAPI void $_onScriptInitializationComplete();


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
