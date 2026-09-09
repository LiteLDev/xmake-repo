#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/script_core/script_engine/scripting/Promise.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableCallback.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableString.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableUIRawMessage.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptUIRawMessage.h"

// auto generated forward declare list
// clang-format off
class IGameplayUserManagerConnector;
class ServerPlayer;
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace ScriptModuleMinecraftServerUI { class ScriptForm; }
namespace ScriptModuleMinecraftServerUI { class ScriptFormVisibilityError; }
namespace ScriptModuleMinecraftServerUI { class ScriptInvalidFormError; }
namespace ScriptModuleMinecraftServerUI { class ScriptInvalidFormModificationError; }
namespace ScriptModuleMinecraftServerUI { class ScriptObservableDataStoreBinding; }
namespace ScriptModuleMinecraftServerUI { class ScriptPlayerLeftError; }
namespace ScriptModuleMinecraftServerUI { struct ScriptMessageBoxResult; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class ScriptMessageBox : public ::Scripting::WeakHandleFromThis<ScriptModuleMinecraftServerUI::ScriptMessageBox> {
public:
    // ScriptMessageBox inner types define
    using ShowReturnType = ::Scripting::Result<
        Scripting::Promise<
            ScriptModuleMinecraftServerUI::ScriptMessageBoxResult,
            ScriptModuleMinecraftServerUI::ScriptPlayerLeftError,
            ScriptModuleMinecraftServerUI::ScriptInvalidFormError,
            Scripting::EngineError>,
        ScriptModuleMinecraft::ScriptInvalidActorError,
        ScriptModuleMinecraftServerUI::ScriptFormVisibilityError,
        Scripting::EngineError>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleMinecraftServerUI::ScriptObservableDataStoreBinding>> mObservableDataStoreBinding;
    ::ll::UntypedStorage<8, 32> mForm;
    ::ll::UntypedStorage<8, 192> mTitle;
    ::ll::UntypedStorage<8, 192> mBodyText;
    ::ll::UntypedStorage<8, 192> mButton1Text;
    ::ll::UntypedStorage<8, 200> mButton1Tooltip;
    ::ll::UntypedStorage<8, 192> mButton2Text;
    ::ll::UntypedStorage<8, 200> mButton2Tooltip;
    ::ll::UntypedStorage<8, 40> mButton1Click;
    ::ll::UntypedStorage<8, 40> mButton2Click;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMessageBox& operator=(ScriptMessageBox const&);
    ScriptMessageBox(ScriptMessageBox const&);
    ScriptMessageBox();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptMessageBox(::ScriptModuleMinecraftServerUI::ScriptMessageBox&&);

    MCNAPI ::Scripting::Result<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraftServerUI::ScriptMessageBox>,
        ScriptModuleMinecraftServerUI::ScriptInvalidFormModificationError>
        button1(
            std::variant<
                std::string,
                Scripting::StrongTypedObjectHandle<ScriptModuleMinecraftServerUI::ScriptObservableString>,
                Scripting::StrongTypedObjectHandle<ScriptModuleMinecraftServerUI::ScriptObservableUIRawMessage>,
                ScriptModuleMinecraftServerUI::ScriptUIRawMessage>,
            std::optional<std::variant<
                std::string,
                Scripting::StrongTypedObjectHandle<ScriptModuleMinecraftServerUI::ScriptObservableString>,
                Scripting::StrongTypedObjectHandle<ScriptModuleMinecraftServerUI::ScriptObservableUIRawMessage>,
                ScriptModuleMinecraftServerUI::ScriptUIRawMessage>>
        );

    MCNAPI ::Scripting::Result<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraftServerUI::ScriptMessageBox>,
        ScriptModuleMinecraftServerUI::ScriptInvalidFormModificationError>
        button2(
            std::variant<
                std::string,
                Scripting::StrongTypedObjectHandle<ScriptModuleMinecraftServerUI::ScriptObservableString>,
                Scripting::StrongTypedObjectHandle<ScriptModuleMinecraftServerUI::ScriptObservableUIRawMessage>,
                ScriptModuleMinecraftServerUI::ScriptUIRawMessage>,
            std::optional<std::variant<
                std::string,
                Scripting::StrongTypedObjectHandle<ScriptModuleMinecraftServerUI::ScriptObservableString>,
                Scripting::StrongTypedObjectHandle<ScriptModuleMinecraftServerUI::ScriptObservableUIRawMessage>,
                ScriptModuleMinecraftServerUI::ScriptUIRawMessage>>
        );

    MCNAPI ::ScriptModuleMinecraftServerUI::ScriptMessageBox&
    operator=(::ScriptModuleMinecraftServerUI::ScriptMessageBox&&);

    MCNAPI ::Scripting::Result<
        Scripting::Promise<
            ScriptModuleMinecraftServerUI::ScriptMessageBoxResult,
            ScriptModuleMinecraftServerUI::ScriptPlayerLeftError,
            ScriptModuleMinecraftServerUI::ScriptInvalidFormError,
            Scripting::EngineError>,
        ScriptModuleMinecraft::ScriptInvalidActorError,
        ScriptModuleMinecraftServerUI::ScriptFormVisibilityError,
        Scripting::EngineError>
    show(::Scripting::DependencyLocator&, ::Scripting::ScriptObjectFactory&, ::Scripting::WeakLifetimeScope&);

    MCNAPI ~ScriptMessageBox();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind(::IGameplayUserManagerConnector&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const* const& FORM_ID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraftServerUI::ScriptMessageBox&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
