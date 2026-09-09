#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/quickjs/context/ParseContext.h"
#include "mc/deps/script_core/quickjs/context/ParseContextData.h"
#include "mc/deps/script_core/runtime/scripting/ContextId.h"
#include "mc/deps/script_core/runtime/scripting/RequiredPrivileges.h"
#include "mc/deps/script_core/script_engine/scripting/ContextConfig.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IPrinter; }
namespace Scripting { class LifetimeRegistry; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { struct AnyAndJSValue; }
namespace Scripting { struct FunctionBinding; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct ModuleDependency; }
namespace Scripting { struct TypeNameInfo; }
namespace Scripting::QuickJS { class ClassRegistry; }
namespace Scripting::QuickJS { class ObjectInspector; }
namespace Scripting::QuickJS { struct ResolvedTypes; }
namespace Scripting::Reflection { class IFunction; }
// clang-format on

namespace Scripting::QuickJS {

class ContextUserData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::Scripting::ContextId>                                  contextId;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>                         scope;
    ::ll::TypedStorage<8, 8, ::Scripting::QuickJS::ClassRegistry&>                    classReg;
    ::ll::TypedStorage<8, 8, ::Scripting::QuickJS::ResolvedTypes const&>              resolvedTypes;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::StrongObjectHandle>>             globalAndModuleObjects;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<Scripting::AnyAndJSValue>>> constants;
    ::ll::TypedStorage<8, 8, ::Scripting::ScriptObjectFactory&>                       mObjectFactory;
    ::ll::TypedStorage<8, 8, ::Scripting::QuickJS::ObjectInspector&>                  mObjectInspector;
    ::ll::TypedStorage<8, 8, ::Scripting::IPrinter*>                                  mPrinter;
    ::ll::TypedStorage<8, 8, std::vector<Scripting::ModuleBinding> const&>            mModules;
    ::ll::TypedStorage<8, 24, std::vector<const Scripting::ModuleBinding*>>           initializedModules;
    ::ll::TypedStorage<8, 240, ::Scripting::ContextConfig const>                      mContextConfig;
    ::ll::TypedStorage<1, 1, ::Scripting::RequiredPrivileges>                         mRequiredPrivileges;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::QuickJS::ParseContextData>>      mCurrentParseContextStack;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::string>>           mSourceDebugIds;
    // NOLINTEND

public:
    // prevent constructor by default
    ContextUserData& operator=(ContextUserData const&);
    ContextUserData(ContextUserData const&);
    ContextUserData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::QuickJS::ParseContextData const& peekParseContext() const;

    MCNAPI void popParseContext();

    MCNAPI void pushParseContext(
        ::Scripting::QuickJS::ParseContext,
        ::entt::meta_type const&,
        std::variant<std::string_view, uint>
    );

    MCNAPI void resetParseContextUntilVariant(bool);

    MCNAPI ~ContextUserData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting::QuickJS
