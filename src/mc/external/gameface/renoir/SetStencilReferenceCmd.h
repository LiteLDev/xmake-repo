#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
struct SetStencilReferenceCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 8> Value;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct SetStencilReferenceCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 8> mUnk374443;
    // NOLINTEND

public:
    // prevent constructor by default
    SetStencilReferenceCmd& operator=(SetStencilReferenceCmd const&);
    SetStencilReferenceCmd(SetStencilReferenceCmd const&);
    SetStencilReferenceCmd();
};
#else // @header-generator platform
struct SetStencilReferenceCmd {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace renoir
