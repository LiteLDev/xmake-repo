#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/ClosureType.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/deps/script_core/reflection/scripting/Privilege.h"
#include "mc/deps/script_core/script_engine/scripting/ScriptValue.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IObjectInspector; }
namespace Scripting { class IRuntime; }
namespace Scripting { class ResultAny; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextId; }
// clang-format on

namespace Scripting {

class ClosureAny : public ::Scripting::ScriptValue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40>                              mClosure;
    ::ll::TypedStorage<8, 8, ::Scripting::IObjectInspector*> mObjectInspector;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClosureAny();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ClosureAny();

    MCNAPI ClosureAny(::Scripting::ClosureAny const&);

    MCNAPI ClosureAny(::Scripting::ClosureAny&&);

    MCNAPI ClosureAny(
        ::Scripting::IRuntime*,
        ::Scripting::ContextId,
        ::Scripting::WeakLifetimeScope,
        ::Scripting::StrongTypedObjectHandle<Scripting::ClosureType>,
        ::Scripting::IObjectInspector*
    );

    MCNAPI ::Scripting::ResultAny
    _callGeneric(::entt::meta_any*, uint, ::entt::meta_type const&, std::optional<Scripting::Privilege>) const;

    MCNAPI bool compareTo(::Scripting::ClosureAny const&) const;

    MCNAPI std::optional<Scripting::TypedObjectHandle<Scripting::ClosureType>> getClosureHandle() const;

    MCNAPI ::Scripting::ClosureAny& operator=(::Scripting::ClosureAny const&);

    MCNAPI ::Scripting::ClosureAny& operator=(::Scripting::ClosureAny&&);

    MCNAPI bool valid() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Scripting::ClosureAny const&);

    MCNAPI void* $ctor(::Scripting::ClosureAny&&);

    MCNAPI void* $ctor(
        ::Scripting::IRuntime*,
        ::Scripting::ContextId,
        ::Scripting::WeakLifetimeScope,
        ::Scripting::StrongTypedObjectHandle<Scripting::ClosureType>,
        ::Scripting::IObjectInspector*
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
