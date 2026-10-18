#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/renoir/IndexBufferObject.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
struct SetIBODebugNameCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> IBO;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct SetIBODebugNameCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk8da7e8;
    // NOLINTEND

public:
    // prevent constructor by default
    SetIBODebugNameCmd& operator=(SetIBODebugNameCmd const&);
    SetIBODebugNameCmd(SetIBODebugNameCmd const&);
    SetIBODebugNameCmd();
};
#else // @header-generator platform
struct SetIBODebugNameCmd {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace renoir
