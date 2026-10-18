#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/renoir/DepthStencilTextureObject.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
struct SetDSDebugNameCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 8> Texture;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct SetDSDebugNameCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 8> mUnk7f9d38;
    // NOLINTEND

public:
    // prevent constructor by default
    SetDSDebugNameCmd& operator=(SetDSDebugNameCmd const&);
    SetDSDebugNameCmd(SetDSDebugNameCmd const&);
    SetDSDebugNameCmd();
};
#else // @header-generator platform
struct SetDSDebugNameCmd {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace renoir
