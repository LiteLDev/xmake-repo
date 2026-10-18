#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/renoir/float4.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
struct SetScissorRectCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 4>  Enabled;
    ::ll::UntypedStorage<1, 20> Rect;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct SetScissorRectCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 4>  mUnkd8dfe9;
    ::ll::UntypedStorage<1, 20> mUnk235728;
    // NOLINTEND

public:
    // prevent constructor by default
    SetScissorRectCmd& operator=(SetScissorRectCmd const&);
    SetScissorRectCmd(SetScissorRectCmd const&);
    SetScissorRectCmd();
};
#else // @header-generator platform
struct SetScissorRectCmd {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace renoir
