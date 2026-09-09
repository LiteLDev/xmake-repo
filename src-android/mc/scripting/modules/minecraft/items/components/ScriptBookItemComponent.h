#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft/items/components/ScriptItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { struct ScriptBookError; }
namespace ScriptModuleMinecraft { struct ScriptBookPageContentError; }
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace ScriptModuleMinecraft { struct ScriptInvalidItemStackError; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBookItemComponent : public ::ScriptModuleMinecraft::ScriptItemComponent {
public:
    // ScriptBookItemComponent inner types define
    using ContentType = std::variant<
        std::string,
        ScriptModuleMinecraft::ScriptRawMessageInterface,
        std::vector<std::variant<std::string, ScriptModuleMinecraft::ScriptRawMessageInterface>>>;

public:
    // prevent constructor by default
    ScriptBookItemComponent& operator=(ScriptBookItemComponent const&);
    ScriptBookItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptBookItemComponent();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<std::optional<std::string>, ScriptModuleMinecraft::ScriptInvalidItemStackError>
    _getAuthor() const;

    MCNAPI ::Scripting::
        Result<std::vector<std::optional<std::string>>, ScriptModuleMinecraft::ScriptInvalidItemStackError>
        _getContents() const;

    MCNAPI ::Scripting::Result<int, ScriptModuleMinecraft::ScriptInvalidItemStackError> _getPageCount() const;

    MCNAPI ::Scripting::Result<
        std::vector<std::optional<ScriptModuleMinecraft::ScriptRawMessageInterface>>,
        ScriptModuleMinecraft::ScriptInvalidItemStackError>
    _getRawContents() const;

    MCNAPI ::Scripting::Result<std::optional<std::string>, ScriptModuleMinecraft::ScriptInvalidItemStackError>
    _getTitle() const;

    MCNAPI ::Scripting::Result<
        void,
        ScriptModuleMinecraft::ScriptInvalidItemStackError,
        ScriptModuleMinecraft::ScriptBookError,
        ScriptModuleMinecraft::ScriptBookPageContentError>
    _insertPage(
        int,
        std::variant<
            std::string,
            ScriptModuleMinecraft::ScriptRawMessageInterface,
            std::vector<std::variant<std::string, ScriptModuleMinecraft::ScriptRawMessageInterface>>>
    );

    MCNAPI ::Scripting::Result<bool, ScriptModuleMinecraft::ScriptInvalidItemStackError> _isSigned() const;

    MCNAPI ::Scripting::Result<
        void,
        ScriptModuleMinecraft::ScriptInvalidItemStackError,
        ScriptModuleMinecraft::ScriptBookError,
        ScriptModuleMinecraft::ScriptBookPageContentError>
    _setPageContent(
        int,
        std::variant<
            std::string,
            ScriptModuleMinecraft::ScriptRawMessageInterface,
            std::vector<std::variant<std::string, ScriptModuleMinecraft::ScriptRawMessageInterface>>>
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
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

} // namespace ScriptModuleMinecraft
