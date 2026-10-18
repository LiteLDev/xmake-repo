#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/renoir/ConstantBufferObject.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
struct SetCBODebugNameCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 8> CBO;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct SetCBODebugNameCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 8> mUnkce47ef;
    // NOLINTEND

public:
    // prevent constructor by default
    SetCBODebugNameCmd& operator=(SetCBODebugNameCmd const&);
    SetCBODebugNameCmd(SetCBODebugNameCmd const&);
    SetCBODebugNameCmd();
};
#else // @header-generator platform
struct SetCBODebugNameCmd {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace renoir
