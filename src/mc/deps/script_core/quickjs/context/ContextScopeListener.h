#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/ILifetimeScopeListener.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
struct JSContext;
struct JSValue;
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { class LifetimeRegistry; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting::QuickJS { struct ResolvedTypes; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace Scripting::QuickJS {

class ContextScopeListener : public ::Scripting::ILifetimeScopeListener {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::JSContext*>                         mJsContext;
    ::ll::TypedStorage<8, 8, ::Scripting::QuickJS::ResolvedTypes&> mResolvedTypes;
    ::ll::UntypedStorage<8, 24>                                    mJSValuesToFree;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk1aace1;
    ::ll::UntypedStorage<8, 8>  mUnkad91a9;
    ::ll::UntypedStorage<8, 24> mUnk910ca8;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ContextScopeListener& operator=(ContextScopeListener const&);
    ContextScopeListener(ContextScopeListener const&);
    ContextScopeListener();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ContextScopeListener();
#else // @header-generator platform
    virtual ~ContextScopeListener() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPreLifetimeScopeDestroy(::Scripting::LifetimeRegistry&);
#else // @header-generator platform
    virtual void onPreLifetimeScopeDestroy(::Scripting::LifetimeRegistry& registry) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPostLifetimeScopeDestroy(::Scripting::LifetimeRegistry&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void onPostLifetimeScopeDestroy(::Scripting::LifetimeRegistry&) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onPreLifetimeScopeDestroy(::Scripting::LifetimeRegistry&);
#else // @header-generator platform
    MCNAPI void $onPreLifetimeScopeDestroy(::Scripting::LifetimeRegistry& registry);
#endif // @header-generator platform

    MCNAPI void $onPostLifetimeScopeDestroy(::Scripting::LifetimeRegistry&);
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Scripting::QuickJS
