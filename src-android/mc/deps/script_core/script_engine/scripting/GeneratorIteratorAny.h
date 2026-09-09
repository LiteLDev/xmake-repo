#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/GeneratorIteratorType.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
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

class GeneratorIteratorAny : public ::Scripting::ScriptValue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40>                              mGeneratorIteratorHandle;
    ::ll::TypedStorage<8, 8, ::Scripting::IObjectInspector*> mObjectInspector;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GeneratorIteratorAny();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GeneratorIteratorAny(
        ::Scripting::IRuntime*,
        ::Scripting::ContextId,
        ::Scripting::WeakLifetimeScope,
        ::Scripting::StrongTypedObjectHandle<Scripting::GeneratorIteratorType> const&,
        ::Scripting::IObjectInspector*
    );

    MCNAPI ::Scripting::GeneratorIteratorAny& operator=(::Scripting::GeneratorIteratorAny&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Scripting::IRuntime*,
        ::Scripting::ContextId,
        ::Scripting::WeakLifetimeScope,
        ::Scripting::StrongTypedObjectHandle<Scripting::GeneratorIteratorType> const&,
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
