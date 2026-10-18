#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/renoir/IndexBufferObject.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
struct DestroyIndexBufferCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> Object;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct DestroyIndexBufferCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk192c3a;
    // NOLINTEND

public:
    // prevent constructor by default
    DestroyIndexBufferCmd& operator=(DestroyIndexBufferCmd const&);
    DestroyIndexBufferCmd(DestroyIndexBufferCmd const&);
    DestroyIndexBufferCmd();
};
#else // @header-generator platform
struct DestroyIndexBufferCmd {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace renoir
