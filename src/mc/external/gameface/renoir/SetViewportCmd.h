#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/renoir/float4.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
struct SetViewportCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 16> Rect;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct SetViewportCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 16> mUnk277331;
    // NOLINTEND

public:
    // prevent constructor by default
    SetViewportCmd& operator=(SetViewportCmd const&);
    SetViewportCmd(SetViewportCmd const&);
    SetViewportCmd();
};
#else // @header-generator platform
struct SetViewportCmd {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace renoir
