#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
struct SetVSConstantBuffersCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> StartSlot;
    ::ll::TypedStorage<4, 4, uint> Count;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct SetVSConstantBuffersCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk96f76e;
    ::ll::UntypedStorage<4, 4> mUnk4332a5;
    // NOLINTEND

public:
    // prevent constructor by default
    SetVSConstantBuffersCmd& operator=(SetVSConstantBuffersCmd const&);
    SetVSConstantBuffersCmd(SetVSConstantBuffersCmd const&);
    SetVSConstantBuffersCmd();
};
#else // @header-generator platform
struct SetVSConstantBuffersCmd {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace renoir
