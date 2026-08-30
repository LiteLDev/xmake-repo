#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/GeneratorType.h"
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

class GeneratorAny : public ::Scripting::ScriptValue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mGeneratorHandle;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GeneratorAny();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GeneratorAny(::Scripting::GeneratorAny const&);

    MCNAPI GeneratorAny(::Scripting::GeneratorAny&&);

    MCNAPI GeneratorAny(
        ::Scripting::IRuntime*,
        ::Scripting::ContextId,
        ::Scripting::WeakLifetimeScope,
        ::Scripting::StrongTypedObjectHandle<Scripting::GeneratorType> const&
    );

    MCNAPI ::Scripting::ResultAny nextGeneric(::entt::meta_any&, ::entt::meta_type const&) const;

    MCNAPI ::Scripting::GeneratorAny& operator=(::Scripting::GeneratorAny const&);

    MCNAPI ::Scripting::GeneratorAny& operator=(::Scripting::GeneratorAny&&);

    MCNAPI bool valid() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::GeneratorAny const&);

    MCNAPI void* $ctor(::Scripting::GeneratorAny&&);

    MCNAPI void* $ctor(
        ::Scripting::IRuntime*,
        ::Scripting::ContextId,
        ::Scripting::WeakLifetimeScope,
        ::Scripting::StrongTypedObjectHandle<Scripting::GeneratorType> const&
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
