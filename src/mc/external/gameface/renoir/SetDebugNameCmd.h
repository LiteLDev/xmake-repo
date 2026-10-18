#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/renoir/Texture2DObject.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
struct SetDebugNameCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> Texture;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct SetDebugNameCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk62790a;
    // NOLINTEND

public:
    // prevent constructor by default
    SetDebugNameCmd& operator=(SetDebugNameCmd const&);
    SetDebugNameCmd(SetDebugNameCmd const&);
    SetDebugNameCmd();
};
#else // @header-generator platform
struct SetDebugNameCmd {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace renoir
