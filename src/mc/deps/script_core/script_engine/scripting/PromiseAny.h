#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/PromiseType.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/script_engine/scripting/ScriptValue.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class IRuntime; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { class ResultAny; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextId; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace Scripting {

class PromiseAny : public ::Scripting::ScriptValue {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 40> mPromiseHandle;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 40> mUnkc023ba;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    PromiseAny(PromiseAny const&);
    PromiseAny();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~PromiseAny();
#else // @header-generator platform
    virtual ~PromiseAny() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PromiseAny(::Scripting::PromiseAny const&);
#else // @header-generator platform
    MCNAPI ::Scripting::PromiseAny& operator=(::Scripting::PromiseAny&& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PromiseAny(::Scripting::PromiseAny&&);
#else // @header-generator platform
    MCNAPI ::Scripting::PromiseAny& operator=(::Scripting::PromiseAny const& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PromiseAny(
        ::Scripting::IRuntime*,
        ::Scripting::ContextId,
        ::Scripting::WeakLifetimeScope,
        ::Scripting::StrongTypedObjectHandle<Scripting::PromiseType> const&
    );
#else // @header-generator platform
    MCNAPI ::Scripting::ResultAny rejectGeneric(::entt::meta_any& any) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Scripting::TypedObjectHandle<Scripting::PromiseType>> getPromiseHandle() const;

    MCNAPI ::Scripting::PromiseAny& operator=(::Scripting::PromiseAny const&);

    MCNAPI ::Scripting::PromiseAny& operator=(::Scripting::PromiseAny&&);

    MCNAPI ::Scripting::ResultAny rejectGeneric(::entt::meta_any&) const;

    MCNAPI ::Scripting::ResultAny resolveGeneric(::entt::meta_any&) const;
#else // @header-generator platform
    MCNAPI ::Scripting::ResultAny resolveGeneric(::entt::meta_any& any) const;
#endif // @header-generator platform

    MCNAPI bool valid() const;
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::PromiseAny const&);

    MCNAPI void* $ctor(::Scripting::PromiseAny&&);

    MCNAPI void* $ctor(
        ::Scripting::IRuntime*,
        ::Scripting::ContextId,
        ::Scripting::WeakLifetimeScope,
        ::Scripting::StrongTypedObjectHandle<Scripting::PromiseType> const&
    );
#else // @header-generator platform
#endif // @header-generator platform
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
