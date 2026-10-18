#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/runtime/scripting/ContextId.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IRuntime; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting {

class ScriptValue {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Scripting::IRuntime*>          mRuntime;
    ::ll::TypedStorage<1, 1, ::Scripting::ContextId>          mContextId;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk7e6933;
    ::ll::UntypedStorage<1, 1>  mUnk979b85;
    ::ll::UntypedStorage<8, 16> mUnk5510fe;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ScriptValue& operator=(ScriptValue const&);
    ScriptValue(ScriptValue const&);
    ScriptValue();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptValue();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptValue();

    MCNAPI ::Scripting::ContextId getContextId() const;

    MCNAPI ::Scripting::WeakLifetimeScope getWeakLifetimeScope() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ~ScriptValue() = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting
