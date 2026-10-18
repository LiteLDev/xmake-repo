#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/runtime/scripting/ContextId.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IObjectFactory; }
namespace Scripting { class IObjectInspector; }
namespace Scripting { class IRuntime; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting {

class ScriptObjectFactory {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Scripting::IRuntime&>                     mRuntime;
    ::ll::TypedStorage<8, 8, ::Scripting::IObjectInspector&>             mInspector;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Scripting::IObjectFactory>> mFactory;
    ::ll::TypedStorage<1, 1, ::Scripting::ContextId>                     mContextId;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>            mScope;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnke9046f;
    ::ll::UntypedStorage<8, 8>  mUnk56883d;
    ::ll::UntypedStorage<8, 8>  mUnk671e9d;
    ::ll::UntypedStorage<1, 1>  mUnkce6804;
    ::ll::UntypedStorage<8, 16> mUnk1387ba;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptObjectFactory& operator=(ScriptObjectFactory const&);
    ScriptObjectFactory(ScriptObjectFactory const&);
#endif // @header-generator platform
    ScriptObjectFactory();
};

} // namespace Scripting
