#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
struct SetMultipleVertexBuffersCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> StartSlot;
    ::ll::TypedStorage<4, 4, uint> Count;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct SetMultipleVertexBuffersCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnke148e3;
    ::ll::UntypedStorage<4, 4> mUnk2d9ed4;
    // NOLINTEND

public:
    // prevent constructor by default
    SetMultipleVertexBuffersCmd& operator=(SetMultipleVertexBuffersCmd const&);
    SetMultipleVertexBuffersCmd(SetMultipleVertexBuffersCmd const&);
    SetMultipleVertexBuffersCmd();
};
#else // @header-generator platform
struct SetMultipleVertexBuffersCmd {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace renoir
