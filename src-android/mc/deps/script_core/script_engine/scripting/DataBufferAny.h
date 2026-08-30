#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/DataBufferHandleType.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/deps/script_core/script_engine/scripting/ScriptValue.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IObjectInspector; }
namespace Scripting { class IRuntime; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextId; }
// clang-format on

namespace Scripting {

class DataBufferAny : public ::Scripting::ScriptValue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Scripting::IObjectInspector*> mObjectInspector;
    ::ll::UntypedStorage<8, 40>                              mDataBufferHandle;
    ::ll::TypedStorage<8, 8, ulong>                          mByteLength;
    ::ll::TypedStorage<8, 8, ulong>                          mLength;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataBufferAny();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DataBufferAny(::Scripting::DataBufferAny const&);

    MCNAPI DataBufferAny(
        ::Scripting::IRuntime*,
        ::Scripting::ContextId,
        ::Scripting::WeakLifetimeScope,
        ::Scripting::IObjectInspector*,
        ::Scripting::StrongTypedObjectHandle<Scripting::DataBufferHandleType>
    );

    MCNAPI std::optional<Scripting::TypedObjectHandle<Scripting::DataBufferHandleType>> getDataBufferHandle() const;

    MCNAPI ::Scripting::DataBufferAny& operator=(::Scripting::DataBufferAny const&);

    MCNAPI ::Scripting::DataBufferAny& operator=(::Scripting::DataBufferAny&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::DataBufferAny const&);

    MCNAPI void* $ctor(
        ::Scripting::IRuntime*,
        ::Scripting::ContextId,
        ::Scripting::WeakLifetimeScope,
        ::Scripting::IObjectInspector*,
        ::Scripting::StrongTypedObjectHandle<Scripting::DataBufferHandleType>
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
