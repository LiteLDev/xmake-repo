#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
struct SetPSSamplersCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> StartSlot;
    ::ll::TypedStorage<4, 4, uint> Count;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct SetPSSamplersCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk307a1f;
    ::ll::UntypedStorage<4, 4> mUnkc7fc72;
    // NOLINTEND

public:
    // prevent constructor by default
    SetPSSamplersCmd& operator=(SetPSSamplersCmd const&);
    SetPSSamplersCmd(SetPSSamplersCmd const&);
    SetPSSamplersCmd();
};
#else // @header-generator platform
struct SetPSSamplersCmd {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace renoir
