#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/script_core/script_engine/scripting/Closure.h"
#include "mc/deps/script_core/script_engine/scripting/Promise.h"
#include "mc/scripting/modules/minecraft_ui/ImageData.h"
#include "mc/scripting/modules/minecraft_ui/ddui/CustomFormButtonData.h"
#include "mc/scripting/modules/minecraft_ui/ddui/DividerData.h"
#include "mc/scripting/modules/minecraft_ui/ddui/DropdownData.h"
#include "mc/scripting/modules/minecraft_ui/ddui/HeaderData.h"
#include "mc/scripting/modules/minecraft_ui/ddui/LabelData.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptDataDrivenScreenClosedReason.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableString.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableUIRawMessage.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptUIRawMessage.h"
#include "mc/scripting/modules/minecraft_ui/ddui/SliderData.h"
#include "mc/scripting/modules/minecraft_ui/ddui/SpacerData.h"
#include "mc/scripting/modules/minecraft_ui/ddui/TextFieldData.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ToggleData.h"

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
namespace ScriptModuleMinecraftServerUI { class ScriptInvalidObservableError; }
namespace ScriptModuleMinecraftServerUI { class ScriptObservableBoolean; }
namespace ScriptModuleMinecraftServerUI { class ScriptObservableDataStoreBinding; }
namespace ScriptModuleMinecraftServerUI { class ScriptObservableNumber; }
namespace ScriptModuleMinecraftServerUI { class ScriptPlayerLeftError; }
namespace ScriptModuleMinecraftServerUI { struct DropdownItemData; }
namespace ScriptModuleMinecraftServerUI { struct ScriptButtonOptions; }
namespace ScriptModuleMinecraftServerUI { struct ScriptDividerOptions; }
namespace ScriptModuleMinecraftServerUI { struct ScriptDropdownOptions; }
namespace ScriptModuleMinecraftServerUI { struct ScriptImageOptions; }
namespace ScriptModuleMinecraftServerUI { struct ScriptSliderOptions; }
namespace ScriptModuleMinecraftServerUI { struct ScriptSpacingOptions; }
namespace ScriptModuleMinecraftServerUI { struct ScriptTextFieldOptions; }
namespace ScriptModuleMinecraftServerUI { struct ScriptTextOptions; }
namespace ScriptModuleMinecraftServerUI { struct ScriptToggleOptions; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class ScriptCustomForm : public ::Scripting::WeakHandleFromThis<ScriptModuleMinecraftServerUI::ScriptCustomForm> {
public:
    // ScriptCustomForm inner types define
    using ShowReturnType = ::Scripting::Result<
        Scripting::Promise<
            ScriptModuleMinecraftServerUI::ScriptDataDrivenScreenClosedReason,
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
    ::ll::TypedStorage<8, 24, std::vector<std::variant<ScriptModuleMinecraftServerUI::SpacerData, ScriptModuleMinecraftServerUI::DividerData, ScriptModuleMinecraftServerUI::HeaderData, ScriptModuleMinecraftServerUI::LabelData, ScriptModuleMinecraftServerUI::ToggleData, ScriptModuleMinecraftServerUI::TextFieldData, ScriptModuleMinecraftServerUI::CustomFormButtonData, ScriptModuleMinecraftServerUI::SliderData, ScriptModuleMinecraftServerUI::DropdownData, ScriptModuleMinecraftServerUI::ImageData>>> mLayout;
    ::ll::TypedStorage<1, 1, bool> mCloseButtonVisible;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 520, std::optional<ScriptModuleMinecraftServerUI::CustomFormButtonData>> mCloseButtonData;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomForm& operator=(ScriptCustomForm const&);
    ScriptCustomForm(ScriptCustomForm const&);
    ScriptCustomForm();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptCustomForm(::ScriptModuleMinecraftServerUI::ScriptCustomForm&&);

    MCNAPI ::Scripting::Result<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraftServerUI::ScriptCustomForm>,
        ScriptModuleMinecraftServerUI::ScriptInvalidFormModificationError>
        header(
            std::variant<
                std::string,
                Scripting::StrongTypedObjectHandle<ScriptModuleMinecraftServerUI::ScriptObservableString>,
                Scripting::StrongTypedObjectHandle<ScriptModuleMinecraftServerUI::ScriptObservableUIRawMessage>,
                ScriptModuleMinecraftServerUI::ScriptUIRawMessage>,
            std::optional<ScriptModuleMinecraftServerUI::ScriptTextOptions>
        );

    MCNAPI ::Scripting::Result<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraftServerUI::ScriptCustomForm>,
        ScriptModuleMinecraftServerUI::ScriptInvalidFormModificationError>
        label(
            std::variant<
                std::string,
                Scripting::StrongTypedObjectHandle<ScriptModuleMinecraftServerUI::ScriptObservableString>,
                Scripting::StrongTypedObjectHandle<ScriptModuleMinecraftServerUI::ScriptObservableUIRawMessage>,
                ScriptModuleMinecraftServerUI::ScriptUIRawMessage>,
            std::optional<ScriptModuleMinecraftServerUI::ScriptTextOptions>
        );

    MCNAPI ::ScriptModuleMinecraftServerUI::ScriptCustomForm&
    operator=(::ScriptModuleMinecraftServerUI::ScriptCustomForm&&);

    MCNAPI ::Scripting::Result<
        Scripting::Promise<
            ScriptModuleMinecraftServerUI::ScriptDataDrivenScreenClosedReason,
            ScriptModuleMinecraftServerUI::ScriptPlayerLeftError,
            ScriptModuleMinecraftServerUI::ScriptInvalidFormError,
            Scripting::EngineError>,
        ScriptModuleMinecraft::ScriptInvalidActorError,
        ScriptModuleMinecraftServerUI::ScriptFormVisibilityError,
        Scripting::EngineError>
    show(::Scripting::DependencyLocator&, ::Scripting::ScriptObjectFactory&, ::Scripting::WeakLifetimeScope&);

    MCNAPI ~ScriptCustomForm();
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
    MCNAPI void* $ctor(::ScriptModuleMinecraftServerUI::ScriptCustomForm&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
