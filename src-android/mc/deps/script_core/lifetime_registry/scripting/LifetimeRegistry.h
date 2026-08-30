#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/HandleCache.h"
#include "mc/deps/script_core/lifetime_registry/scripting/ObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/ObjectHandleValue.h"
#include "mc/deps/script_core/lifetime_registry/scripting/internal/TypeCache.h"
#include "mc/deps/script_core/runtime/scripting/ContextId.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ILifetimeObjectListener; }
namespace Scripting { class ILifetimeScopeListener; }
namespace Scripting { class IScriptRef; }
namespace Scripting { class LifetimeRegistryReference; }
namespace Scripting::internal { struct BaseScriptComponent; }
// clang-format on

namespace Scripting {

class LifetimeRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::Scripting::ContextId>                                          mContextId;
    ::ll::TypedStorage<8, 8, ::Scripting::LifetimeRegistryReference&>                         mRegistryReference;
    ::ll::TypedStorage<8, 40, ::Scripting::internal::TypeCache>                               mTypeCache;
    ::ll::UntypedStorage<8, 256>                                                              registry;
    ::ll::TypedStorage<8, 16, ::Scripting::ObjectHandle>                                      removingEntity;
    ::ll::TypedStorage<8, 16, std::weak_ptr<Scripting::ILifetimeScopeListener>>               mScopeListener;
    ::ll::TypedStorage<8, 24, std::vector<std::weak_ptr<Scripting::ILifetimeObjectListener>>> mObjectListeners;
    ::ll::TypedStorage<8, 80, ::Scripting::HandleCache>                                       handleCache;
    // NOLINTEND

public:
    // prevent constructor by default
    LifetimeRegistry& operator=(LifetimeRegistry const&);
    LifetimeRegistry(LifetimeRegistry const&);
    LifetimeRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LifetimeRegistry(::Scripting::ContextId, ::Scripting::LifetimeRegistryReference&);

    MCNAPI ::Scripting::ObjectHandle _createBaseObject(::Scripting::internal::BaseScriptComponent&&);

    MCNAPI void _destroyObject(::Scripting::ObjectHandle, ::Scripting::internal::BaseScriptComponent&);

    MCNAPI bool _doTypesMatch(::Scripting::ObjectHandle, ::entt::meta_type const&);

    MCNAPI void addObjectListener(std::weak_ptr<Scripting::ILifetimeObjectListener>);

    MCNAPI void addReference(::Scripting::ObjectHandle);

    MCNAPI void destroyLifetimeScope(bool);

    MCNAPI ::Scripting::HandleCache& getCache();

    MCNAPI uint getReferenceCount(::Scripting::ObjectHandle);

    MCNAPI ::Scripting::IScriptRef* getScriptRef(::Scripting::ObjectHandle);

    MCNAPI void removeObjectListener(std::shared_ptr<Scripting::ILifetimeObjectListener>);

    MCNAPI bool removeReference(::Scripting::ObjectHandle);

    MCNAPI ::entt::meta_any resolveAsAny(::Scripting::ObjectHandle);

    MCNAPI ::entt::meta_any resolveAsStrongTypedObjectHandle(::Scripting::ObjectHandle);

    MCNAPI ::entt::meta_any resolveAsTypedObjectHandle(::Scripting::ObjectHandle);

    MCNAPI ::entt::meta_any resolveAsWeakTypedObjectHandle(::Scripting::ObjectHandle);

    MCNAPI ::entt::meta_type const& resolvedType(::Scripting::ObjectHandle);

    MCNAPI void setScopeListener(std::weak_ptr<Scripting::ILifetimeScopeListener>);

    MCNAPI void setScriptRef(::Scripting::ObjectHandle, std::unique_ptr<Scripting::IScriptRef>&&);

    MCNAPI bool valid(::Scripting::ObjectHandle const&);

    MCNAPI ~LifetimeRegistry();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::ContextId, ::Scripting::LifetimeRegistryReference&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
