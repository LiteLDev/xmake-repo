#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_type/scripting/GlobalBinding.h"
#include "mc/deps/script_core/binding_type/scripting/ModuleBinding.h"
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/deps/script_core/quickjs/runtime/ResolvedTypes.h"
#include "mc/deps/script_core/runtime/scripting/ContextId.h"
#include "mc/deps/script_core/runtime/scripting/FutureStatus.h"

// auto generated forward declare list
// clang-format off
struct JSContext;
struct JSModuleDef;
struct JSRuntime;
struct JSValue;
namespace Scripting { class IDependencyLoader; }
namespace Scripting { class IPrinter; }
namespace Scripting { class ResultAny; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct AnyAndJSValue; }
namespace Scripting { struct BaseError; }
namespace Scripting { struct ClosureType; }
namespace Scripting { struct ConstantFactory; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct FunctionBinding; }
namespace Scripting { struct FutureType; }
namespace Scripting { struct IteratorBinding; }
namespace Scripting { struct ModuleBindingBundle; }
namespace Scripting { struct ObjectFactory; }
namespace Scripting { struct PromiseType; }
namespace Scripting { struct PropertyBinding; }
namespace Scripting { struct TypeNameInfo; }
namespace Scripting::QuickJS { class ClassRegistry; }
namespace Scripting::QuickJS { class ContextScopeListener; }
namespace Scripting::QuickJS { class ContextUserData; }
namespace Scripting::QuickJS { class ObjectInspector; }
namespace Scripting::QuickJS { class RegisteredClass; }
namespace Scripting::QuickJS { class RegisteredError; }
// clang-format on

namespace Scripting::QuickJS {

class ContextObject {
public:
    // ContextObject inner types declare
    // clang-format off
    struct UnhandledPromiseRejectionEntry;
    // clang-format on

    // ContextObject inner types define
    enum class ImportAllowedResult : int {
        Success          = 0,
        FailRestricted   = 1,
        FailStaticImport = 2,
    };

    struct UnhandledPromiseRejectionEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 64, ::entt::meta_any> rejection;
        ::ll::TypedStorage<1, 1, bool>              isHandled;
        // NOLINTEND

    public:
        // prevent constructor by default
        UnhandledPromiseRejectionEntry& operator=(UnhandledPromiseRejectionEntry const&);
        UnhandledPromiseRejectionEntry(UnhandledPromiseRejectionEntry const&);
        UnhandledPromiseRejectionEntry();
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, ::Scripting::ContextId> mContextId;
    ::ll::TypedStorage<8, 8, ::JSContext*> mJsContext;
    ::ll::TypedStorage<8, 816, ::Scripting::QuickJS::ResolvedTypes> mResolvedTypes;
    ::ll::TypedStorage<8, 144, ::Scripting::GlobalBinding> mGlobalBindings;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::ModuleBinding>> mModuleBindings;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Scripting::ScriptObjectFactory>> mObjectFactory;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Scripting::QuickJS::ObjectInspector>> mObjectInspector;
    ::ll::TypedStorage<8, 8, ::Scripting::IPrinter*> mPrinter;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Scripting::QuickJS::ClassRegistry>> mClassRegistry;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Scripting::QuickJS::ContextUserData>> mContextUserData;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Scripting::QuickJS::ContextScopeListener>> mScopeListener;
    ::ll::TypedStorage<8, 40, std::unordered_map<void*, Scripting::QuickJS::ContextObject::UnhandledPromiseRejectionEntry>> mUnhandledPromiseRejections;
    ::ll::TypedStorage<8, 8, ::Scripting::IDependencyLoader*> mLoader;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ContextObject();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _resolvePromise(::JSValue, ::entt::meta_any&);

    MCNAPI ::Scripting::ResultAny
    call(::Scripting::TypedObjectHandle<Scripting::ClosureType>, ::entt::meta_any*, uint, ::entt::meta_type const&);

    MCNAPI void processUnhandledPromiseRejection();

    MCNAPI ~ContextObject();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _bindClass(
        ::JSContext*,
        ::JSModuleDef*,
        ::Scripting::QuickJS::ContextUserData&,
        ::Scripting::QuickJS::RegisteredClass&
    );

    MCNAPI static void _bindError(::JSContext*, ::JSModuleDef*, ::Scripting::QuickJS::RegisteredError&);

    MCNAPI static std::unique_ptr<Scripting::AnyAndJSValue> _createConstant(
        ::JSContext*,
        ::Scripting::QuickJS::ContextUserData&,
        ::JSValue,
        ::Scripting::ConstantFactory const&
    );

    MCNAPI static std::unique_ptr<Scripting::AnyAndJSValue> _createEnumReverseConstant(
        ::JSContext*,
        ::Scripting::QuickJS::ContextUserData&,
        ::JSValue,
        ::Scripting::EnumBinding const&,
        ::Scripting::ConstantFactory const&
    );

    MCNAPI static void
    _createFunction(::JSContext*, ::JSValue, ::Scripting::FunctionBinding const&, ::JSValue, std::string const&);

    MCNAPI static void
    _createProperty(::JSContext*, ::JSValue, ::Scripting::PropertyBinding const&, std::string const&);

    MCNAPI static int _moduleInitializer(::JSContext*, ::JSModuleDef*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting::QuickJS
