#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/runtime/scripting/Result.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/script_engine/scripting/Closure.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/script_engine/scripting/Promise.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft_ui/ImageData.h"
#include "mc/scripting/modules/minecraft_ui/ddui/CustomFormButtonData.h"
#include "mc/scripting/modules/minecraft_ui/ddui/DividerData.h"
#include "mc/scripting/modules/minecraft_ui/ddui/DropdownData.h"
#include "mc/scripting/modules/minecraft_ui/ddui/HeaderData.h"
#include "mc/scripting/modules/minecraft_ui/ddui/LabelData.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptDataDrivenScreenClosedReason.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableString.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableUIRawMessage.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptUIRawMessage.h"
#include "mc/scripting/modules/minecraft_ui/ddui/SliderData.h"
#include "mc/scripting/modules/minecraft_ui/ddui/SpacerData.h"
#include "mc/scripting/modules/minecraft_ui/ddui/TextFieldData.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ToggleData.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class IGameplayUserManagerConnector;
#if defined(LL_PLAT_A) // @header-generator platform
class ServerPlayer;
namespace ScriptModuleMinecraft { class ScriptPlayer; }
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraftServerUI { class ScriptForm; }
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraftServerUI { class ScriptFormVisibilityError; }
namespace ScriptModuleMinecraftServerUI { class ScriptInvalidFormError; }
namespace ScriptModuleMinecraftServerUI { class ScriptInvalidFormModificationError; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraftServerUI { class ScriptInvalidObservableError; }
namespace ScriptModuleMinecraftServerUI { class ScriptObservableBoolean; }
namespace ScriptModuleMinecraftServerUI { class ScriptObservableDataStoreBinding; }
namespace ScriptModuleMinecraftServerUI { class ScriptObservableNumber; }
#else // @header-generator platform
namespace ScriptModuleMinecraftServerUI { class ScriptObservableString; }
namespace ScriptModuleMinecraftServerUI { class ScriptObservableUIRawMessage; }
#endif // @header-generator platform
namespace ScriptModuleMinecraftServerUI { class ScriptPlayerLeftError; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraftServerUI { struct DropdownItemData; }
namespace ScriptModuleMinecraftServerUI { struct ScriptButtonOptions; }
namespace ScriptModuleMinecraftServerUI { struct ScriptDividerOptions; }
namespace ScriptModuleMinecraftServerUI { struct ScriptDropdownOptions; }
namespace ScriptModuleMinecraftServerUI { struct ScriptImageOptions; }
namespace ScriptModuleMinecraftServerUI { struct ScriptSliderOptions; }
namespace ScriptModuleMinecraftServerUI { struct ScriptSpacingOptions; }
namespace ScriptModuleMinecraftServerUI { struct ScriptTextFieldOptions; }
#else // @header-generator platform
namespace ScriptModuleMinecraftServerUI { class ScriptUIRawMessage; }
#endif // @header-generator platform
namespace ScriptModuleMinecraftServerUI { struct ScriptTextOptions; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraftServerUI { struct ScriptToggleOptions; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { class DependencyLocator; }
namespace Scripting { class ScriptObjectFactory; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
#endif // @header-generator platform
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
class ScriptCustomForm : public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraftServerUI::ScriptCustomForm> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleMinecraftServerUI::ScriptObservableDataStoreBinding>> mObservableDataStoreBinding;
    ::ll::UntypedStorage<8, 32> mForm;
    ::ll::UntypedStorage<8, 192> mTitle;
    ::ll::TypedStorage<8, 24, std::vector<std::variant<ScriptModuleMinecraftServerUI::SpacerData, ScriptModuleMinecraftServerUI::DividerData, ScriptModuleMinecraftServerUI::HeaderData, ScriptModuleMinecraftServerUI::LabelData, ScriptModuleMinecraftServerUI::ToggleData, ScriptModuleMinecraftServerUI::TextFieldData, ScriptModuleMinecraftServerUI::CustomFormButtonData, ScriptModuleMinecraftServerUI::SliderData, ScriptModuleMinecraftServerUI::DropdownData, ScriptModuleMinecraftServerUI::ImageData>>> mLayout;
    ::ll::TypedStorage<1, 1, bool> mCloseButtonVisible;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 520, std::optional<ScriptModuleMinecraftServerUI::CustomFormButtonData>> mCloseButtonData;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>   mUnk79d155;
    ::ll::UntypedStorage<8, 32>  mUnka5eaf1;
    ::ll::UntypedStorage<8, 216> mUnkbf8dda;
    ::ll::UntypedStorage<8, 24>  mUnke4c798;
    ::ll::UntypedStorage<1, 1>   mUnk656f06;
    ::ll::UntypedStorage<8, 16>  mUnk15455b;
    ::ll::UntypedStorage<8, 568> mUnk292132;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomForm& operator=(ScriptCustomForm const&);
    ScriptCustomForm(ScriptCustomForm const&);
    ScriptCustomForm();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptCustomForm(::ScriptModuleMinecraftServerUI::ScriptCustomForm&&);
#else // @header-generator platform
    MCNAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptCustomForm>,
        ::ScriptModuleMinecraftServerUI::ScriptInvalidFormModificationError>
    header(
        ::std::variant<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptObservableString>,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptObservableUIRawMessage>,
            ::ScriptModuleMinecraftServerUI::ScriptUIRawMessage>            text,
        ::std::optional<::ScriptModuleMinecraftServerUI::ScriptTextOptions> options
    );
#endif // @header-generator platform

    MCNAPI ::Scripting::Result<
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptCustomForm>,
        ::ScriptModuleMinecraftServerUI::ScriptInvalidFormModificationError>
    label(
        ::std::variant<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptObservableString>,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptObservableUIRawMessage>,
            ::ScriptModuleMinecraftServerUI::ScriptUIRawMessage>            text,
        ::std::optional<::ScriptModuleMinecraftServerUI::ScriptTextOptions> options
    );
#endif // @header-generator platform

    MCNAPI ::Scripting::Result<
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        ::Scripting::Promise<
            ::ScriptModuleMinecraftServerUI::ScriptDataDrivenScreenClosedReason,
            ::ScriptModuleMinecraftServerUI::ScriptPlayerLeftError,
            ::ScriptModuleMinecraftServerUI::ScriptInvalidFormError,
            ::Scripting::EngineError>,
        ::ScriptModuleMinecraft::ScriptInvalidActorError,
        ::ScriptModuleMinecraftServerUI::ScriptFormVisibilityError,
        ::Scripting::EngineError>
    show(
        ::Scripting::DependencyLocator&   locator,
        ::Scripting::ScriptObjectFactory& factory,
        ::Scripting::WeakLifetimeScope&   scope
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind(::IGameplayUserManagerConnector&);
#else // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind(::IGameplayUserManagerConnector& userManagerConnector);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const* const& FORM_ID();
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace ScriptModuleMinecraftServerUI
