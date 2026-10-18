#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
struct SetPSTexturesCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> StartSlot;
    ::ll::TypedStorage<4, 4, uint> Count;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct SetPSTexturesCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkcab4d8;
    ::ll::UntypedStorage<4, 4> mUnk9b77be;
    // NOLINTEND

public:
    // prevent constructor by default
    SetPSTexturesCmd& operator=(SetPSTexturesCmd const&);
    SetPSTexturesCmd(SetPSTexturesCmd const&);
    SetPSTexturesCmd();
};
#else // @header-generator platform
struct SetPSTexturesCmd {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace renoir
