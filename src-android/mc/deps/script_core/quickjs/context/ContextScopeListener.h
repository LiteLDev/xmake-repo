#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/ILifetimeScopeListener.h"

// auto generated forward declare list
// clang-format off
struct JSContext;
struct JSValue;
namespace Scripting { class LifetimeRegistry; }
namespace Scripting::QuickJS { struct ResolvedTypes; }
// clang-format on

namespace Scripting::QuickJS {

class ContextScopeListener : public ::Scripting::ILifetimeScopeListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::JSContext*>                         mJsContext;
    ::ll::TypedStorage<8, 8, ::Scripting::QuickJS::ResolvedTypes&> mResolvedTypes;
    ::ll::UntypedStorage<8, 24>                                    mJSValuesToFree;
    // NOLINTEND

public:
    // prevent constructor by default
    ContextScopeListener& operator=(ContextScopeListener const&);
    ContextScopeListener(ContextScopeListener const&);
    ContextScopeListener();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContextScopeListener();

    virtual void onPreLifetimeScopeDestroy(::Scripting::LifetimeRegistry&);

    virtual void onPostLifetimeScopeDestroy(::Scripting::LifetimeRegistry&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onPreLifetimeScopeDestroy(::Scripting::LifetimeRegistry&);

    MCNAPI void $onPostLifetimeScopeDestroy(::Scripting::LifetimeRegistry&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting::QuickJS
