#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/ObjectHandle.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting::QuickJS {

struct ArrayPropertyFetch {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Scripting::ObjectHandle> ownerHandle;
    ::ll::TypedStorage<8, 8, ulong>                      idx;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk694639;
    ::ll::UntypedStorage<8, 8>  mUnk45e734;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ArrayPropertyFetch& operator=(ArrayPropertyFetch const&);
    ArrayPropertyFetch(ArrayPropertyFetch const&);
    ArrayPropertyFetch();
#endif // @header-generator platform
};

} // namespace Scripting::QuickJS
