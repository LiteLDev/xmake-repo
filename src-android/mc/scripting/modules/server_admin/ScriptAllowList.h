#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"

// auto generated forward declare list
// clang-format off
class IScriptDedicatedServerUtils;
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace ScriptModuleServerAdmin { class ScriptAllowListFileReloadError; }
namespace ScriptModuleServerAdmin { class ScriptAllowListModificationError; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace ScriptModuleServerAdmin {

class ScriptAllowList {
public:
    // ScriptAllowList inner types declare
    // clang-format off
    struct AllowListEntryData;
    // clang-format on

    // ScriptAllowList inner types define
    struct AllowListEntryData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, std::optional<std::string>> mName;
        ::ll::TypedStorage<8, 32, std::optional<std::string>> mXuid;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI AllowListEntryData(::ScriptModuleServerAdmin::ScriptAllowList::AllowListEntryData const&);

        MCNAPI ::ScriptModuleServerAdmin::ScriptAllowList::AllowListEntryData&
        operator=(::ScriptModuleServerAdmin::ScriptAllowList::AllowListEntryData const&);

        MCNAPI bool operator==(::ScriptModuleServerAdmin::ScriptAllowList::AllowListEntryData const&) const;

        MCNAPI ~AllowListEntryData();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::ScriptModuleServerAdmin::ScriptAllowList::AllowListEntryData const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using AllowListModificationResult = ::Scripting::Result<
        void,
        ScriptModuleServerAdmin::ScriptAllowListModificationError,
        ScriptModuleMinecraft::ScriptInvalidActorError,
        Scripting::InvalidArgumentError>;

    using AllowListPlayerArgument = std::variant<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayer>,
        ScriptModuleServerAdmin::ScriptAllowList::AllowListEntryData>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IScriptDedicatedServerUtils&> mServerUtils;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAllowList& operator=(ScriptAllowList const&);
    ScriptAllowList(ScriptAllowList const&);
    ScriptAllowList();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<
        void,
        ScriptModuleServerAdmin::ScriptAllowListModificationError,
        ScriptModuleMinecraft::ScriptInvalidActorError,
        Scripting::InvalidArgumentError>
    add(std::variant<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayer>,
        ScriptModuleServerAdmin::ScriptAllowList::AllowListEntryData> const&);

    MCNAPI std::vector<ScriptModuleServerAdmin::ScriptAllowList::AllowListEntryData> entries() const;

    MCNAPI ::Scripting::Result<
        void,
        ScriptModuleServerAdmin::ScriptAllowListModificationError,
        ScriptModuleMinecraft::ScriptInvalidActorError,
        Scripting::InvalidArgumentError>
    remove(
        std::variant<
            Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayer>,
            ScriptModuleServerAdmin::ScriptAllowList::AllowListEntryData> const&
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder&);
    // NOLINTEND
};

} // namespace ScriptModuleServerAdmin
