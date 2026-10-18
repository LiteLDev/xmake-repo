#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptDataDrivenScreenClosedReason.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::DDUI { class DataStoreSyncServer; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptPlayer; }
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace ScriptModuleMinecraftServerUI { class ScriptFormVisibilityError; }
namespace ScriptModuleMinecraftServerUI { class ScriptInvalidFormError; }
namespace ScriptModuleMinecraftServerUI { class ScriptPlayerLeftError; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraftServerUI { struct DataDrivenScreenCallbacks; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { class DependencyLocator; }
namespace Scripting { class StrongObjectHandle; }
namespace Scripting { struct EngineError; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

#if defined(LL_PLAT_A) // @header-generator platform
class ScriptForm : public ::Scripting::WeakHandleFromThis<ScriptModuleMinecraftServerUI::ScriptForm> {
#else // @header-generator platform
class ScriptForm : public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraftServerUI::ScriptForm> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                                             mFormId;
    ::ll::UntypedStorage<8, 32>                                                                        mPlayer;
    ::ll::TypedStorage<8, 16, std::weak_ptr<ScriptModuleMinecraftServerUI::DataDrivenScreenCallbacks>> mShowingPromise;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnka9a2c6;
    ::ll::UntypedStorage<8, 32> mUnkaf34d0;
    ::ll::UntypedStorage<8, 16> mUnkf09cb3;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptForm& operator=(ScriptForm const&);
    ScriptForm(ScriptForm const&);
#endif // @header-generator platform
    ScriptForm();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<
        void,
#if defined(LL_PLAT_A) // @header-generator platform
        ScriptModuleMinecraft::ScriptInvalidActorError,
        ScriptModuleMinecraftServerUI::ScriptFormVisibilityError,
        Scripting::EngineError>
#else // @header-generator platform
        ::ScriptModuleMinecraft::ScriptInvalidActorError,
        ::ScriptModuleMinecraftServerUI::ScriptFormVisibilityError,
        ::Scripting::EngineError>
#endif // @header-generator platform
    close();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<uint, Scripting::EngineError> generateId(::Scripting::DependencyLocator&);
#else // @header-generator platform
    MCNAPI ::Scripting::Result<uint, ::Scripting::EngineError> generateId(::Scripting::DependencyLocator& locator);
#endif // @header-generator platform

    MCNAPI ::nonstd::expected<
#if defined(LL_PLAT_A) // @header-generator platform
        std::reference_wrapper<Bedrock::DDUI::DataStoreSyncServer>,
        ScriptModuleMinecraft::ScriptInvalidActorError>
    getPlayerDataStore(std::string const&);
#else // @header-generator platform
        ::std::reference_wrapper<::Bedrock::DDUI::DataStoreSyncServer>,
        ::ScriptModuleMinecraft::ScriptInvalidActorError>
    getPlayerDataStore(::std::string const& funcName);
#endif // @header-generator platform

    MCNAPI ::Scripting::Result<
        void,
#if defined(LL_PLAT_A) // @header-generator platform
        ScriptModuleMinecraft::ScriptInvalidActorError,
        ScriptModuleMinecraftServerUI::ScriptFormVisibilityError,
        Scripting::EngineError>
#else // @header-generator platform
        ::ScriptModuleMinecraft::ScriptInvalidActorError,
        ::ScriptModuleMinecraftServerUI::ScriptFormVisibilityError,
        ::Scripting::EngineError>
#endif // @header-generator platform
    show(
#if defined(LL_PLAT_A) // @header-generator platform
        std::optional<uint>,
        std::function<void(ScriptModuleMinecraftServerUI::ScriptDataDrivenScreenClosedReason)>,
        std::function<void(std::variant<
                           ScriptModuleMinecraftServerUI::ScriptPlayerLeftError,
                           ScriptModuleMinecraftServerUI::ScriptInvalidFormError,
                           Scripting::EngineError>)>,
        ::Scripting::StrongObjectHandle,
        ::Scripting::DependencyLocator&
#else // @header-generator platform
        ::std::optional<uint>                                                                      instanceId,
        ::std::function<void(::ScriptModuleMinecraftServerUI::ScriptDataDrivenScreenClosedReason)> resolve,
        ::std::function<void(::std::variant<
                             ::ScriptModuleMinecraftServerUI::ScriptPlayerLeftError,
                             ::ScriptModuleMinecraftServerUI::ScriptInvalidFormError,
                             ::Scripting::EngineError>)>                                           reject,
        ::Scripting::StrongObjectHandle                                                            owningFormHandle,
        ::Scripting::DependencyLocator&                                                            locator
#endif // @header-generator platform
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
