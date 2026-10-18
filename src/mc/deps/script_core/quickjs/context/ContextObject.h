#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/binding_type/scripting/GlobalBinding.h"
#include "mc/deps/script_core/binding_type/scripting/ModuleBinding.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/quickjs/runtime/ResolvedTypes.h"
#include "mc/deps/script_core/runtime/scripting/ContextId.h"
#include "mc/deps/script_core/runtime/scripting/FutureStatus.h"
#else // @header-generator platform
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { struct BaseError; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct ClosureType; }
namespace Scripting { struct ConstantFactory; }
namespace Scripting { struct ContextConfig; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Scripting { struct ContextId; }
#endif // @header-generator platform
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct FunctionBinding; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { struct FutureType; }
namespace Scripting { struct IteratorBinding; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct ModuleBindingBundle; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { struct ObjectFactory; }
namespace Scripting { struct PromiseType; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct PropertyBinding; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { struct TypeNameInfo; }
namespace Scripting::QuickJS { class ClassRegistry; }
namespace Scripting::QuickJS { class ContextScopeListener; }
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 64, ::entt::meta_any> rejection;
        ::ll::TypedStorage<1, 1, bool>              isHandled;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 64> mUnkc8e476;
        ::ll::UntypedStorage<1, 1>  mUnkcaed09;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1>   mUnk21a88e;
    ::ll::UntypedStorage<8, 8>   mUnka4780b;
    ::ll::UntypedStorage<8, 816> mUnka99eed;
    ::ll::UntypedStorage<8, 144> mUnk3d7cec;
    ::ll::UntypedStorage<8, 24>  mUnk5457d8;
    ::ll::UntypedStorage<8, 8>   mUnkd8b07a;
    ::ll::UntypedStorage<8, 8>   mUnk4cff01;
    ::ll::UntypedStorage<8, 8>   mUnk8cc61a;
    ::ll::UntypedStorage<8, 8>   mUnk270325;
    ::ll::UntypedStorage<8, 8>   mUnk71fb76;
    ::ll::UntypedStorage<8, 16>  mUnk182a63;
    ::ll::UntypedStorage<8, 64>  mUnkd84617;
    ::ll::UntypedStorage<8, 8>   mUnkfbf45f;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ContextObject& operator=(ContextObject const&);
    ContextObject(ContextObject const&);
#endif // @header-generator platform
    ContextObject();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _resolvePromise(::JSValue, ::entt::meta_any&);
#else // @header-generator platform
    MCNAPI ContextObject(
        ::Scripting::ContextId                                     contextId,
        ::JSContext*                                               jsContext,
        ::Scripting::WeakLifetimeScope                             scope,
        ::Scripting::ModuleBindingBundle&&                         bindings,
        ::std::unique_ptr<::Scripting::ScriptObjectFactory>&&      factory,
        ::std::unique_ptr<::Scripting::QuickJS::ObjectInspector>&& inspector,
        ::Scripting::IPrinter*                                     printer,
        ::Scripting::IDependencyLoader*                            loader,
        ::JSRuntime*,
        ::Scripting::ContextConfig const& contextConfig
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::ResultAny
    call(::Scripting::TypedObjectHandle<Scripting::ClosureType>, ::entt::meta_any*, uint, ::entt::meta_type const&);
#else // @header-generator platform
    MCNAPI void _resolvePromise(::JSValue jsResolutionFunc, ::entt::meta_any& arg);

    MCNAPI ::Scripting::ResultAny call(
        ::Scripting::TypedObjectHandle<::Scripting::ClosureType> closureHandle,
        ::entt::meta_any*                                        args,
        uint                                                     argc,
        ::entt::meta_type const&                                 expectedReturnType
    );

    MCNAPI ::Scripting::QuickJS::ContextObject::ImportAllowedResult
    checkModuleImportAllowed(::std::string const& baseName, ::std::string const& moduleName, bool dynamicImport) const;
#endif // @header-generator platform

    MCNAPI void processUnhandledPromiseRejection();
#if defined(LL_PLAT_A) // @header-generator platform

    MCNAPI ~ContextObject();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _bindClass(
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        ::JSContext*                           ctx,
        ::JSModuleDef*                         jsModuleDef,
        ::Scripting::QuickJS::ContextUserData& contextData,
        ::Scripting::QuickJS::RegisteredClass& registeredClass
#endif // @header-generator platform
    );

    MCNAPI static void
#if defined(LL_PLAT_A) // @header-generator platform
    _createFunction(::JSContext*, ::JSValue, ::Scripting::FunctionBinding const&, ::JSValue, std::string const&);
#else // @header-generator platform
    _bindError(::JSContext* ctx, ::JSModuleDef* moduleDef, ::Scripting::QuickJS::RegisteredError& registeredError);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    _createProperty(::JSContext*, ::JSValue, ::Scripting::PropertyBinding const&, std::string const&);
#else // @header-generator platform
    MCNAPI static ::std::unique_ptr<::Scripting::AnyAndJSValue> _createConstant(
        ::JSContext*                           ctx,
        ::Scripting::QuickJS::ContextUserData& contextData,
        ::JSValue                              target,
        ::Scripting::ConstantFactory const&    constantCreator
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int _moduleInitializer(::JSContext*, ::JSModuleDef*);
#else // @header-generator platform
    MCNAPI static ::JSValue _createConstructor(
        ::JSContext*         ctx,
        ::JSModuleDef*       jsModuleDef,
        ::JSValue            jsValue,
        ::std::string const& name,
        uint                 jsClassId
    );

    MCNAPI static ::std::unique_ptr<::Scripting::AnyAndJSValue> _createEnumReverseConstant(
        ::JSContext*                           ctx,
        ::Scripting::QuickJS::ContextUserData& contextData,
        ::JSValue                              enumObj,
        ::Scripting::EnumBinding const&        enumBinding,
        ::Scripting::ConstantFactory const&    constantBinding
    );

    MCNAPI static void _createFunction(
        ::JSContext*                        ctx,
        ::JSValue                           jsValue,
        ::Scripting::FunctionBinding const& functionBinding,
        ::JSValue                           jsCtorVal,
        ::std::string const&                className
    );

    MCNAPI static void _createProperty(
        ::JSContext*                        ctx,
        ::JSValue                           jsPrototype,
        ::Scripting::PropertyBinding const& propertyBinding,
        ::std::string const&                className
    );

    MCNAPI static int _moduleInitializer(::JSContext* ctx, ::JSModuleDef* jsModuleDef);
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(
        ::Scripting::ContextId                                     contextId,
        ::JSContext*                                               jsContext,
        ::Scripting::WeakLifetimeScope                             scope,
        ::Scripting::ModuleBindingBundle&&                         bindings,
        ::std::unique_ptr<::Scripting::ScriptObjectFactory>&&      factory,
        ::std::unique_ptr<::Scripting::QuickJS::ObjectInspector>&& inspector,
        ::Scripting::IPrinter*                                     printer,
        ::Scripting::IDependencyLoader*                            loader,
        ::JSRuntime*,
        ::Scripting::ContextConfig const& contextConfig
    );
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Scripting::QuickJS
