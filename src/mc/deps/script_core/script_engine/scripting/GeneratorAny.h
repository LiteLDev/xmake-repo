#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/GeneratorType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/script_engine/scripting/ScriptValue.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IRuntime; }
namespace Scripting { class ResultAny; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextId; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Scripting { struct GeneratorType; }
#endif // @header-generator platform
// clang-format on

namespace Scripting {

class GeneratorAny : public ::Scripting::ScriptValue {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 40> mGeneratorHandle;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 40> mUnk3dab5e;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    GeneratorAny(GeneratorAny const&);
    GeneratorAny();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~GeneratorAny();
#else // @header-generator platform
    virtual ~GeneratorAny() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI GeneratorAny(::Scripting::GeneratorAny const&);

    MCNAPI GeneratorAny(::Scripting::GeneratorAny&&);

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI GeneratorAny(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Scripting::IRuntime*,
        ::Scripting::ContextId,
        ::Scripting::WeakLifetimeScope,
        ::Scripting::StrongTypedObjectHandle<Scripting::GeneratorType> const&
#else // @header-generator platform
        ::Scripting::IRuntime*                                                  runtime,
        ::Scripting::ContextId                                                  contextId,
        ::Scripting::WeakLifetimeScope                                          scope,
        ::Scripting::StrongTypedObjectHandle<::Scripting::GeneratorType> const& generatorHandle
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::ResultAny nextGeneric(::entt::meta_any&, ::entt::meta_type const&) const;
#else // @header-generator platform
    MCNAPI ::Scripting::ResultAny
    nextGeneric(::entt::meta_any& argAny, ::entt::meta_type const& expectedReturnType) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::GeneratorAny& operator=(::Scripting::GeneratorAny const&);
#else // @header-generator platform
    MCNAPI ::Scripting::GeneratorAny& operator=(::Scripting::GeneratorAny&& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::GeneratorAny& operator=(::Scripting::GeneratorAny&&);
#else // @header-generator platform
    MCNAPI ::Scripting::GeneratorAny& operator=(::Scripting::GeneratorAny const& rhs);
#endif // @header-generator platform

    MCNAPI bool valid() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Scripting::GeneratorAny const&);

    MCNAPI void* $ctor(::Scripting::GeneratorAny&&);

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI void* $ctor(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Scripting::IRuntime*,
        ::Scripting::ContextId,
        ::Scripting::WeakLifetimeScope,
        ::Scripting::StrongTypedObjectHandle<Scripting::GeneratorType> const&
#else // @header-generator platform
        ::Scripting::IRuntime*                                                  runtime,
        ::Scripting::ContextId                                                  contextId,
        ::Scripting::WeakLifetimeScope                                          scope,
        ::Scripting::StrongTypedObjectHandle<::Scripting::GeneratorType> const& generatorHandle
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
