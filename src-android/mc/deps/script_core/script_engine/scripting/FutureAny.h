#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/FutureType.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/FutureStatus.h"
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

class FutureAny : public ::Scripting::ScriptValue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40>                              mFutureHandle;
    ::ll::TypedStorage<8, 8, ::Scripting::IObjectInspector*> mObjectInspector;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FutureAny();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FutureAny();

    MCNAPI FutureAny(::Scripting::FutureAny const&);

    MCNAPI FutureAny(::Scripting::FutureAny&&);

    MCNAPI FutureAny(
        ::Scripting::IRuntime*,
        ::Scripting::ContextId,
        ::Scripting::WeakLifetimeScope,
        ::Scripting::StrongTypedObjectHandle<Scripting::FutureType>,
        ::Scripting::IObjectInspector*
    );

    MCNAPI ::Scripting::ResultAny getResult() const;

    MCNAPI bool isPending() const;

    MCNAPI bool isRejected() const;

    MCNAPI bool isResolved() const;

    MCNAPI ::Scripting::FutureAny& operator=(::Scripting::FutureAny const&);

    MCNAPI ::Scripting::FutureAny& operator=(::Scripting::FutureAny&&);

    MCNAPI bool valid() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Scripting::FutureAny const&);

    MCNAPI void* $ctor(::Scripting::FutureAny&&);

    MCNAPI void* $ctor(
        ::Scripting::IRuntime*,
        ::Scripting::ContextId,
        ::Scripting::WeakLifetimeScope,
        ::Scripting::StrongTypedObjectHandle<Scripting::FutureType>,
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
