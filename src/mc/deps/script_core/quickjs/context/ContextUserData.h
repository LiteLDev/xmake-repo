#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/StrongObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/quickjs/context/ParseContext.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/quickjs/context/ParseContextData.h"
#include "mc/deps/script_core/runtime/scripting/ContextId.h"
#include "mc/deps/script_core/runtime/scripting/RequiredPrivileges.h"
#include "mc/deps/script_core/script_engine/scripting/ContextConfig.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
namespace Scripting::QuickJS { struct ParseContextData; }
#endif // @header-generator platform
// clang-format on

namespace Scripting::QuickJS {

class ContextUserData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1>   mUnk91edc7;
    ::ll::UntypedStorage<8, 16>  mUnk557dca;
    ::ll::UntypedStorage<8, 8>   mUnke0c273;
    ::ll::UntypedStorage<8, 8>   mUnk84bd74;
    ::ll::UntypedStorage<8, 24>  mUnk70d806;
    ::ll::UntypedStorage<8, 24>  mUnk90985f;
    ::ll::UntypedStorage<8, 8>   mUnka60b23;
    ::ll::UntypedStorage<8, 8>   mUnk92f52a;
    ::ll::UntypedStorage<8, 8>   mUnkfbe467;
    ::ll::UntypedStorage<8, 8>   mUnkd5fe0f;
    ::ll::UntypedStorage<8, 24>  mUnk2b6a04;
    ::ll::UntypedStorage<8, 288> mUnka21b69;
    ::ll::UntypedStorage<1, 1>   mUnk863b7e;
    ::ll::UntypedStorage<8, 24>  mUnk771848;
    ::ll::UntypedStorage<8, 64>  mUnk3f377c;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::Scripting::QuickJS::ParseContext,
        ::entt::meta_type const&,
        std::variant<std::string_view, uint>
#else // @header-generator platform
        ::Scripting::QuickJS::ParseContext       context,
        ::entt::meta_type const&                 type,
        ::std::variant<::std::string_view, uint> arg
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void resetParseContextUntilVariant(bool);

    MCNAPI ~ContextUserData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void resetParseContextUntilVariant(bool removeVariant);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Scripting::QuickJS
