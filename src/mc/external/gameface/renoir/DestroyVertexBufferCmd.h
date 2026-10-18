#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/renoir/VertexBufferObject.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
struct DestroyVertexBufferCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> Object;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct DestroyVertexBufferCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk9d64c5;
    // NOLINTEND

public:
    // prevent constructor by default
    DestroyVertexBufferCmd& operator=(DestroyVertexBufferCmd const&);
    DestroyVertexBufferCmd(DestroyVertexBufferCmd const&);
    DestroyVertexBufferCmd();
};
#else // @header-generator platform
struct DestroyVertexBufferCmd {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace renoir
