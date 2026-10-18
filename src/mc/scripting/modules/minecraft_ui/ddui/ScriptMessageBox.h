#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/script_core/script_engine/scripting/Promise.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableCallback.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableString.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableUIRawMessage.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptUIRawMessage.h"
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
namespace ScriptModuleMinecraftServerUI { class ScriptObservableDataStoreBinding; }
#else // @header-generator platform
namespace ScriptModuleMinecraftServerUI { class ScriptObservableString; }
namespace ScriptModuleMinecraftServerUI { class ScriptObservableUIRawMessage; }
#endif // @header-generator platform
namespace ScriptModuleMinecraftServerUI { class ScriptPlayerLeftError; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace ScriptModuleMinecraftServerUI { class ScriptUIRawMessage; }
#endif // @header-generator platform
namespace ScriptModuleMinecraftServerUI { struct ScriptMessageBoxResult; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
class ScriptMessageBox : public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraftServerUI::ScriptMessageBox> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>   mUnkc31ed8;
    ::ll::UntypedStorage<8, 32>  mUnk447b66;
    ::ll::UntypedStorage<8, 216> mUnk852f39;
    ::ll::UntypedStorage<8, 216> mUnkcd09d9;
    ::ll::UntypedStorage<8, 216> mUnk1bac06;
    ::ll::UntypedStorage<8, 224> mUnkf5b621;
    ::ll::UntypedStorage<8, 216> mUnk2b471c;
    ::ll::UntypedStorage<8, 224> mUnk58ff6d;
    ::ll::UntypedStorage<8, 40>  mUnk28f02e;
    ::ll::UntypedStorage<8, 40>  mUnkfaca99;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMessageBox& operator=(ScriptMessageBox const&);
    ScriptMessageBox(ScriptMessageBox const&);
    ScriptMessageBox();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptMessageBox(::ScriptModuleMinecraftServerUI::ScriptMessageBox&&);
#else // @header-generator platform
    MCNAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptMessageBox>,
        ::ScriptModuleMinecraftServerUI::ScriptInvalidFormModificationError>
    button1(
        ::std::variant<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptObservableString>,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptObservableUIRawMessage>,
            ::ScriptModuleMinecraftServerUI::ScriptUIRawMessage>  body,
        ::std::optional<::std::variant<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptObservableString>,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptObservableUIRawMessage>,
            ::ScriptModuleMinecraftServerUI::ScriptUIRawMessage>> tooltip
    );
#endif // @header-generator platform

    MCNAPI ::Scripting::Result<
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptMessageBox>,
        ::ScriptModuleMinecraftServerUI::ScriptInvalidFormModificationError>
    button2(
        ::std::variant<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptObservableString>,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptObservableUIRawMessage>,
            ::ScriptModuleMinecraftServerUI::ScriptUIRawMessage>  body,
        ::std::optional<::std::variant<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptObservableString>,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptObservableUIRawMessage>,
            ::ScriptModuleMinecraftServerUI::ScriptUIRawMessage>> tooltip
    );
#endif // @header-generator platform

    MCNAPI ::Scripting::Result<
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        ::Scripting::Promise<
            ::ScriptModuleMinecraftServerUI::ScriptMessageBoxResult,
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
    MCNAPI void* $ctor(::ScriptModuleMinecraftServerUI::ScriptMessageBox&&);
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
