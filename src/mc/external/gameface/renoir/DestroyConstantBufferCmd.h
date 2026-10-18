#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/renoir/ConstantBufferObject.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
struct DestroyConstantBufferCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 8> Object;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct DestroyConstantBufferCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 8> mUnk1b8395;
    // NOLINTEND

public:
    // prevent constructor by default
    DestroyConstantBufferCmd& operator=(DestroyConstantBufferCmd const&);
    DestroyConstantBufferCmd(DestroyConstantBufferCmd const&);
    DestroyConstantBufferCmd();
};
#else // @header-generator platform
struct DestroyConstantBufferCmd {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace renoir
