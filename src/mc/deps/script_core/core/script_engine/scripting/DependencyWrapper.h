#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/script_engine/scripting/ModuleDependency.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting {

struct DependencyWrapper {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 72, ::Scripting::ModuleDependency> deps;
    ::ll::TypedStorage<1, 1, bool>                           explicitRequest;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 80> mUnkc05c1d;
    ::ll::UntypedStorage<1, 1>  mUnk8a6a49;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    DependencyWrapper& operator=(DependencyWrapper const&);
    DependencyWrapper(DependencyWrapper const&);
    DependencyWrapper();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DependencyWrapper();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace Scripting
