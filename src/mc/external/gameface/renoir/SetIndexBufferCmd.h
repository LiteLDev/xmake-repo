#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/renoir/IndexBufferObject.h"
#include "mc/external/gameface/renoir/IndexBufferType.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
struct SetIndexBufferCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::renoir::IndexBufferObject> Object;
    ::ll::TypedStorage<4, 4, ::renoir::IndexBufferType>   Type;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct SetIndexBufferCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnke20410;
    ::ll::UntypedStorage<4, 4> mUnkc7e157;
    // NOLINTEND

public:
    // prevent constructor by default
    SetIndexBufferCmd& operator=(SetIndexBufferCmd const&);
    SetIndexBufferCmd(SetIndexBufferCmd const&);
    SetIndexBufferCmd();
};
#else // @header-generator platform
struct SetIndexBufferCmd {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace renoir
