#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/renoir/VertexBufferObject.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
struct SetVertexBufferCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> Object;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct SetVertexBufferCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnkac2450;
    // NOLINTEND

public:
    // prevent constructor by default
    SetVertexBufferCmd& operator=(SetVertexBufferCmd const&);
    SetVertexBufferCmd(SetVertexBufferCmd const&);
    SetVertexBufferCmd();
};
#else // @header-generator platform
struct SetVertexBufferCmd {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace renoir
