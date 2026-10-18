#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
struct SetPSConstantBuffersCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> StartSlot;
    ::ll::TypedStorage<4, 4, uint> Count;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct SetPSConstantBuffersCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkeaf3f5;
    ::ll::UntypedStorage<4, 4> mUnk69de26;
    // NOLINTEND

public:
    // prevent constructor by default
    SetPSConstantBuffersCmd& operator=(SetPSConstantBuffersCmd const&);
    SetPSConstantBuffersCmd(SetPSConstantBuffersCmd const&);
    SetPSConstantBuffersCmd();
};
#else // @header-generator platform
struct SetPSConstantBuffersCmd {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace renoir
