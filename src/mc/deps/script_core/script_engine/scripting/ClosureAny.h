#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/ClosureType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/reflection/scripting/Privilege.h"
#include "mc/deps/script_core/script_engine/scripting/ScriptValue.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IObjectInspector; }
namespace Scripting { class IRuntime; }
namespace Scripting { class ResultAny; }
namespace Scripting { class WeakLifetimeScope; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Scripting { struct ClosureType; }
#endif // @header-generator platform
namespace Scripting { struct ContextId; }
// clang-format on

namespace Scripting {

class ClosureAny : public ::Scripting::ScriptValue {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 40>                              mClosure;
    ::ll::TypedStorage<8, 8, ::Scripting::IObjectInspector*> mObjectInspector;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 40> mUnke4d77a;
    ::ll::UntypedStorage<8, 8>  mUnk1d806b;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ClosureAny();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ClosureAny();
#else // @header-generator platform
    virtual ~ClosureAny() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ClosureAny();

    MCNAPI ClosureAny(::Scripting::ClosureAny const&);

    MCNAPI ClosureAny(::Scripting::ClosureAny&&);
#else // @header-generator platform
    MCNAPI ClosureAny(::Scripting::ClosureAny const& rhs);
#endif // @header-generator platform

    MCNAPI ClosureAny(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Scripting::IRuntime*,
        ::Scripting::ContextId,
        ::Scripting::WeakLifetimeScope,
        ::Scripting::StrongTypedObjectHandle<Scripting::ClosureType>,
        ::Scripting::IObjectInspector*
#else // @header-generator platform
        ::Scripting::IRuntime*                                         runtime,
        ::Scripting::ContextId                                         contextId,
        ::Scripting::WeakLifetimeScope                                 scope,
        ::Scripting::StrongTypedObjectHandle<::Scripting::ClosureType> handle,
        ::Scripting::IObjectInspector*                                 inspector
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::ResultAny
    _callGeneric(::entt::meta_any*, uint, ::entt::meta_type const&, std::optional<Scripting::Privilege>) const;
#else // @header-generator platform
    MCNAPI ::Scripting::ResultAny _callGeneric(
        ::entt::meta_any*                       args,
        uint                                    argc,
        ::entt::meta_type const&                expectedReturnType,
        ::std::optional<::Scripting::Privilege> privilege
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool compareTo(::Scripting::ClosureAny const&) const;
#else // @header-generator platform
    MCNAPI bool compareTo(::Scripting::ClosureAny const& rhs) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Scripting::TypedObjectHandle<Scripting::ClosureType>> getClosureHandle() const;
#else // @header-generator platform
    MCNAPI ::Scripting::ClosureAny& operator=(::Scripting::ClosureAny&& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::ClosureAny& operator=(::Scripting::ClosureAny const&);

    MCNAPI ::Scripting::ClosureAny& operator=(::Scripting::ClosureAny&&);
#else // @header-generator platform
    MCNAPI ::Scripting::ClosureAny& operator=(::Scripting::ClosureAny const& rhs);
#endif // @header-generator platform

    MCNAPI bool valid() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Scripting::ClosureAny const&);

    MCNAPI void* $ctor(::Scripting::ClosureAny&&);
#else // @header-generator platform
    MCNAPI void* $ctor(::Scripting::ClosureAny const& rhs);
#endif // @header-generator platform

    MCNAPI void* $ctor(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Scripting::IRuntime*,
        ::Scripting::ContextId,
        ::Scripting::WeakLifetimeScope,
        ::Scripting::StrongTypedObjectHandle<Scripting::ClosureType>,
        ::Scripting::IObjectInspector*
#else // @header-generator platform
        ::Scripting::IRuntime*                                         runtime,
        ::Scripting::ContextId                                         contextId,
        ::Scripting::WeakLifetimeScope                                 scope,
        ::Scripting::StrongTypedObjectHandle<::Scripting::ClosureType> handle,
        ::Scripting::IObjectInspector*                                 inspector
#endif // @header-generator platform
    );
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

} // namespace Scripting
