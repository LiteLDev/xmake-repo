#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptDataDrivenScreenClosedReason.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::DDUI { class DataStoreSyncServer; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace ScriptModuleMinecraftServerUI { class ScriptFormVisibilityError; }
namespace ScriptModuleMinecraftServerUI { class ScriptInvalidFormError; }
namespace ScriptModuleMinecraftServerUI { class ScriptPlayerLeftError; }
namespace ScriptModuleMinecraftServerUI { struct DataDrivenScreenCallbacks; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { class StrongObjectHandle; }
namespace Scripting { struct EngineError; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class ScriptForm : public ::Scripting::WeakHandleFromThis<ScriptModuleMinecraftServerUI::ScriptForm> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                                             mFormId;
    ::ll::UntypedStorage<8, 32>                                                                        mPlayer;
    ::ll::TypedStorage<8, 16, std::weak_ptr<ScriptModuleMinecraftServerUI::DataDrivenScreenCallbacks>> mShowingPromise;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptForm();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<
        void,
        ScriptModuleMinecraft::ScriptInvalidActorError,
        ScriptModuleMinecraftServerUI::ScriptFormVisibilityError,
        Scripting::EngineError>
    close();

    MCNAPI ::Scripting::Result<uint, Scripting::EngineError> generateId(::Scripting::DependencyLocator&);

    MCNAPI ::nonstd::expected<
        std::reference_wrapper<Bedrock::DDUI::DataStoreSyncServer>,
        ScriptModuleMinecraft::ScriptInvalidActorError>
    getPlayerDataStore(std::string const&);

    MCNAPI ::Scripting::Result<
        void,
        ScriptModuleMinecraft::ScriptInvalidActorError,
        ScriptModuleMinecraftServerUI::ScriptFormVisibilityError,
        Scripting::EngineError>
    show(
        std::optional<uint>,
        std::function<void(ScriptModuleMinecraftServerUI::ScriptDataDrivenScreenClosedReason)>,
        std::function<void(std::variant<
                           ScriptModuleMinecraftServerUI::ScriptPlayerLeftError,
                           ScriptModuleMinecraftServerUI::ScriptInvalidFormError,
                           Scripting::EngineError>)>,
        ::Scripting::StrongObjectHandle,
        ::Scripting::DependencyLocator&
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
