#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/HandleCache.h"
#include "mc/deps/script_core/lifetime_registry/scripting/ObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/ObjectHandleValue.h"
#include "mc/deps/script_core/lifetime_registry/scripting/internal/TypeCache.h"
#include "mc/deps/script_core/runtime/scripting/ContextId.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Scripting { class ILifetimeObjectListener; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class ILifetimeScopeListener; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { class IScriptRef; }
namespace Scripting { class LifetimeRegistryReference; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Scripting { struct ContextId; }
namespace Scripting { struct ObjectHandle; }
#endif // @header-generator platform
namespace Scripting::internal { struct BaseScriptComponent; }
// clang-format on

namespace Scripting {

class LifetimeRegistry {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, ::Scripting::ContextId>                                          mContextId;
    ::ll::TypedStorage<8, 8, ::Scripting::LifetimeRegistryReference&>                         mRegistryReference;
    ::ll::TypedStorage<8, 40, ::Scripting::internal::TypeCache>                               mTypeCache;
    ::ll::UntypedStorage<8, 256>                                                              registry;
    ::ll::TypedStorage<8, 16, ::Scripting::ObjectHandle>                                      removingEntity;
    ::ll::TypedStorage<8, 16, std::weak_ptr<Scripting::ILifetimeScopeListener>>               mScopeListener;
    ::ll::TypedStorage<8, 24, std::vector<std::weak_ptr<Scripting::ILifetimeObjectListener>>> mObjectListeners;
    ::ll::TypedStorage<8, 80, ::Scripting::HandleCache>                                       handleCache;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1>   mUnkcb6979;
    ::ll::UntypedStorage<8, 8>   mUnk217a0b;
    ::ll::UntypedStorage<8, 64>  mUnke1f331;
    ::ll::UntypedStorage<8, 304> mUnkdff59e;
    ::ll::UntypedStorage<8, 16>  mUnk8cf060;
    ::ll::UntypedStorage<8, 16>  mUnkc52c09;
    ::ll::UntypedStorage<8, 24>  mUnk90bb35;
    ::ll::UntypedStorage<8, 128> mUnk60fe14;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    LifetimeRegistry& operator=(LifetimeRegistry const&);
    LifetimeRegistry(LifetimeRegistry const&);
    LifetimeRegistry();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI LifetimeRegistry(::Scripting::ContextId, ::Scripting::LifetimeRegistryReference&);
#else // @header-generator platform
    MCNAPI LifetimeRegistry(::Scripting::ContextId contextId, ::Scripting::LifetimeRegistryReference& registryRef);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::ObjectHandle _createBaseObject(::Scripting::internal::BaseScriptComponent&&);
#else // @header-generator platform
    MCNAPI ::Scripting::ObjectHandle _createBaseObject(::Scripting::internal::BaseScriptComponent&& baseScriptComp);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _destroyObject(::Scripting::ObjectHandle, ::Scripting::internal::BaseScriptComponent&);
#else // @header-generator platform
    MCNAPI void
    _destroyObject(::Scripting::ObjectHandle handle, ::Scripting::internal::BaseScriptComponent& baseScriptComp);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _doTypesMatch(::Scripting::ObjectHandle, ::entt::meta_type const&);
#else // @header-generator platform
    MCNAPI bool _doTypesMatch(::Scripting::ObjectHandle handle, ::entt::meta_type const& expectedType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addObjectListener(std::weak_ptr<Scripting::ILifetimeObjectListener>);
#else // @header-generator platform
    MCNAPI void addReference(::Scripting::ObjectHandle handle);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addReference(::Scripting::ObjectHandle);
#else // @header-generator platform
    MCNAPI void destroyLifetimeScope(bool expectAllDead);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void destroyLifetimeScope(bool);
#else // @header-generator platform
    MCNAPI ::Scripting::IScriptRef* getScriptRef(::Scripting::ObjectHandle handle);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::HandleCache& getCache();
#else // @header-generator platform
    MCNAPI void removeObjectListener(::std::shared_ptr<::Scripting::ILifetimeObjectListener> strongListener);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint getReferenceCount(::Scripting::ObjectHandle);
#else // @header-generator platform
    MCNAPI bool removeReference(::Scripting::ObjectHandle handle);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::IScriptRef* getScriptRef(::Scripting::ObjectHandle);
#else // @header-generator platform
    MCNAPI ::entt::meta_any resolveAsAny(::Scripting::ObjectHandle handle);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void removeObjectListener(std::shared_ptr<Scripting::ILifetimeObjectListener>);
#else // @header-generator platform
    MCNAPI ::entt::meta_any resolveAsStrongTypedObjectHandle(::Scripting::ObjectHandle handle);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool removeReference(::Scripting::ObjectHandle);
#else // @header-generator platform
    MCNAPI ::entt::meta_any resolveAsTypedObjectHandle(::Scripting::ObjectHandle handle);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::entt::meta_any resolveAsAny(::Scripting::ObjectHandle);
#else // @header-generator platform
    MCNAPI ::entt::meta_any resolveAsWeakTypedObjectHandle(::Scripting::ObjectHandle handle);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::entt::meta_any resolveAsStrongTypedObjectHandle(::Scripting::ObjectHandle);
#else // @header-generator platform
    MCNAPI ::entt::meta_type const& resolvedType(::Scripting::ObjectHandle handle);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::entt::meta_any resolveAsTypedObjectHandle(::Scripting::ObjectHandle);
#else // @header-generator platform
    MCNAPI void setScriptRef(::Scripting::ObjectHandle handle, ::std::unique_ptr<::Scripting::IScriptRef>&& scriptRef);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::entt::meta_any resolveAsWeakTypedObjectHandle(::Scripting::ObjectHandle);

    MCNAPI ::entt::meta_type const& resolvedType(::Scripting::ObjectHandle);

    MCNAPI void setScopeListener(std::weak_ptr<Scripting::ILifetimeScopeListener>);

    MCNAPI void setScriptRef(::Scripting::ObjectHandle, std::unique_ptr<Scripting::IScriptRef>&&);

    MCNAPI bool valid(::Scripting::ObjectHandle const&);
#else // @header-generator platform
    MCNAPI bool valid(::Scripting::ObjectHandle const& handle);
#endif // @header-generator platform

    MCNAPI ~LifetimeRegistry();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Scripting::ContextId, ::Scripting::LifetimeRegistryReference&);
#else // @header-generator platform
    MCNAPI void* $ctor(::Scripting::ContextId contextId, ::Scripting::LifetimeRegistryReference& registryRef);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
