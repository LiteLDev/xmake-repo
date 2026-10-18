#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
struct UpdateBox {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> Top;
    ::ll::TypedStorage<4, 4, uint> Left;
    ::ll::TypedStorage<4, 4, uint> Right;
    ::ll::TypedStorage<4, 4, uint> Bottom;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct UpdateBox {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkd1a3a9;
    ::ll::UntypedStorage<4, 4> mUnk39063f;
    ::ll::UntypedStorage<4, 4> mUnk73a820;
    ::ll::UntypedStorage<4, 4> mUnk5b61af;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateBox& operator=(UpdateBox const&);
    UpdateBox(UpdateBox const&);
    UpdateBox();
};
#else // @header-generator platform
struct UpdateBox {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace renoir
