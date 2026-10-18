#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/binding_type/scripting/ModuleBindingBundle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IDependencyLoader; }
namespace Scripting { class IPrinter; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting {

struct RuntimeContextData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>    scope;
    ::ll::TypedStorage<8, 168, ::Scripting::ModuleBindingBundle> bindings;
    ::ll::TypedStorage<8, 8, ::Scripting::IDependencyLoader*>    loader;
    ::ll::TypedStorage<8, 8, ::Scripting::IPrinter*>             printer;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16>  mUnkafef5c;
    ::ll::UntypedStorage<8, 168> mUnkeff5cb;
    ::ll::UntypedStorage<8, 8>   mUnkb2aac1;
    ::ll::UntypedStorage<8, 8>   mUnk6633c4;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    RuntimeContextData& operator=(RuntimeContextData const&);
    RuntimeContextData(RuntimeContextData const&);
#endif // @header-generator platform
    RuntimeContextData();
};

} // namespace Scripting
