#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/renoir/CBType.h"
#include "mc/external/gameface/renoir/ConstantBufferObject.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
struct CreateConstantBufferCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::renoir::CBType> ConstantBufferType;
    ::ll::UntypedStorage<1, 4>                 Object;
    ::ll::UntypedStorage<4, 8>                 Size;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct CreateConstantBufferCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkee3229;
    ::ll::UntypedStorage<1, 4> mUnkba95cf;
    ::ll::UntypedStorage<4, 8> mUnkce9be3;
    // NOLINTEND

public:
    // prevent constructor by default
    CreateConstantBufferCmd& operator=(CreateConstantBufferCmd const&);
    CreateConstantBufferCmd(CreateConstantBufferCmd const&);
    CreateConstantBufferCmd();
};
#else // @header-generator platform
struct CreateConstantBufferCmd {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace renoir
