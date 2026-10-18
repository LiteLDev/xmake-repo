#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/GeneratorIteratorType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/script_engine/scripting/ScriptValue.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IObjectInspector; }
namespace Scripting { class IRuntime; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class ResultAny; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextId; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Scripting { struct GeneratorIteratorType; }
#endif // @header-generator platform
// clang-format on

namespace Scripting {

class GeneratorIteratorAny : public ::Scripting::ScriptValue {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 40>                              mGeneratorIteratorHandle;
    ::ll::TypedStorage<8, 8, ::Scripting::IObjectInspector*> mObjectInspector;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 40> mUnkbb8819;
    ::ll::UntypedStorage<8, 8>  mUnk6eb472;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    GeneratorIteratorAny& operator=(GeneratorIteratorAny const&);
    GeneratorIteratorAny(GeneratorIteratorAny const&);
    GeneratorIteratorAny();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~GeneratorIteratorAny();
#else // @header-generator platform
    virtual ~GeneratorIteratorAny() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GeneratorIteratorAny(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Scripting::IRuntime*,
        ::Scripting::ContextId,
        ::Scripting::WeakLifetimeScope,
        ::Scripting::StrongTypedObjectHandle<Scripting::GeneratorIteratorType> const&,
        ::Scripting::IObjectInspector*
#else // @header-generator platform
        ::Scripting::IRuntime*                                                          runtime,
        ::Scripting::ContextId                                                          contextId,
        ::Scripting::WeakLifetimeScope                                                  scope,
        ::Scripting::StrongTypedObjectHandle<::Scripting::GeneratorIteratorType> const& generatorIteratorHandle,
        ::Scripting::IObjectInspector*                                                  inspector
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::GeneratorIteratorAny& operator=(::Scripting::GeneratorIteratorAny&&);
#else // @header-generator platform
    MCNAPI ::Scripting::GeneratorIteratorAny& operator=(::Scripting::GeneratorIteratorAny&& rhs);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Scripting::IRuntime*,
        ::Scripting::ContextId,
        ::Scripting::WeakLifetimeScope,
        ::Scripting::StrongTypedObjectHandle<Scripting::GeneratorIteratorType> const&,
        ::Scripting::IObjectInspector*
#else // @header-generator platform
        ::Scripting::IRuntime*                                                          runtime,
        ::Scripting::ContextId                                                          contextId,
        ::Scripting::WeakLifetimeScope                                                  scope,
        ::Scripting::StrongTypedObjectHandle<::Scripting::GeneratorIteratorType> const& generatorIteratorHandle,
        ::Scripting::IObjectInspector*                                                  inspector
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting
