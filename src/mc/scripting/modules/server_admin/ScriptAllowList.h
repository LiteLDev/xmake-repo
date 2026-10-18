#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class IScriptDedicatedServerUtils;
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleServerAdmin { class ScriptAllowListFileReloadError; }
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 32, std::optional<std::string>> mName;
        ::ll::TypedStorage<8, 32, std::optional<std::string>> mXuid;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 40> mUnkfead68;
        ::ll::UntypedStorage<8, 40> mUnk1467da;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        AllowListEntryData& operator=(AllowListEntryData const&);
        AllowListEntryData(AllowListEntryData const&);
        AllowListEntryData();
#endif // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI AllowListEntryData(::ScriptModuleServerAdmin::ScriptAllowList::AllowListEntryData const&);

        MCNAPI ::ScriptModuleServerAdmin::ScriptAllowList::AllowListEntryData&
        operator=(::ScriptModuleServerAdmin::ScriptAllowList::AllowListEntryData const&);

#else // @header-generator platform
#endif // @header-generator platform
        MCNAPI bool operator==(::ScriptModuleServerAdmin::ScriptAllowList::AllowListEntryData const&) const;
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
        // NOLINTEND
    };
#if defined(LL_PLAT_A) // @header-generator platform

    using AllowListModificationResult = ::Scripting::Result<
        void,
        ScriptModuleServerAdmin::ScriptAllowListModificationError,
        ScriptModuleMinecraft::ScriptInvalidActorError,
        Scripting::InvalidArgumentError>;

    using AllowListPlayerArgument = std::variant<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayer>,
        ScriptModuleServerAdmin::ScriptAllowList::AllowListEntryData>;
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::IScriptDedicatedServerUtils&> mServerUtils;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkba978c;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ScriptModuleServerAdmin::ScriptAllowListModificationError,
        ScriptModuleMinecraft::ScriptInvalidActorError,
        Scripting::InvalidArgumentError>
    add(std::variant<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayer>,
        ScriptModuleServerAdmin::ScriptAllowList::AllowListEntryData> const&);
#else // @header-generator platform
        ::ScriptModuleServerAdmin::ScriptAllowListModificationError,
        ::ScriptModuleMinecraft::ScriptInvalidActorError,
        ::Scripting::InvalidArgumentError>
    add(::std::variant<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>,
        ::ScriptModuleServerAdmin::ScriptAllowList::AllowListEntryData> const& playerData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<ScriptModuleServerAdmin::ScriptAllowList::AllowListEntryData> entries() const;
#else // @header-generator platform
    MCNAPI ::std::vector<::ScriptModuleServerAdmin::ScriptAllowList::AllowListEntryData> entries() const;
#endif // @header-generator platform

    MCNAPI ::Scripting::Result<
        void,
#if defined(LL_PLAT_A) // @header-generator platform
        ScriptModuleServerAdmin::ScriptAllowListModificationError,
        ScriptModuleMinecraft::ScriptInvalidActorError,
        Scripting::InvalidArgumentError>
#else // @header-generator platform
        ::ScriptModuleServerAdmin::ScriptAllowListModificationError,
        ::ScriptModuleMinecraft::ScriptInvalidActorError,
        ::Scripting::InvalidArgumentError>
#endif // @header-generator platform
    remove(
#if defined(LL_PLAT_A) // @header-generator platform
        std::variant<
            Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayer>,
            ScriptModuleServerAdmin::ScriptAllowList::AllowListEntryData> const&
#else // @header-generator platform
        ::std::variant<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>,
            ::ScriptModuleServerAdmin::ScriptAllowList::AllowListEntryData> const& playerData
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder&);
#else // @header-generator platform
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleServerAdmin
