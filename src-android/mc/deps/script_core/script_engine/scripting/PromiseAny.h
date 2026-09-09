#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/PromiseType.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/deps/script_core/script_engine/scripting/ScriptValue.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IRuntime; }
namespace Scripting { class ResultAny; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextId; }
// clang-format on

namespace Scripting {

class PromiseAny : public ::Scripting::ScriptValue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mPromiseHandle;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PromiseAny();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PromiseAny(::Scripting::PromiseAny const&);

    MCNAPI PromiseAny(::Scripting::PromiseAny&&);

    MCNAPI PromiseAny(
        ::Scripting::IRuntime*,
        ::Scripting::ContextId,
        ::Scripting::WeakLifetimeScope,
        ::Scripting::StrongTypedObjectHandle<Scripting::PromiseType> const&
    );

    MCNAPI std::optional<Scripting::TypedObjectHandle<Scripting::PromiseType>> getPromiseHandle() const;

    MCNAPI ::Scripting::PromiseAny& operator=(::Scripting::PromiseAny const&);

    MCNAPI ::Scripting::PromiseAny& operator=(::Scripting::PromiseAny&&);

    MCNAPI ::Scripting::ResultAny rejectGeneric(::entt::meta_any&) const;

    MCNAPI ::Scripting::ResultAny resolveGeneric(::entt::meta_any&) const;

    MCNAPI bool valid() const;
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
