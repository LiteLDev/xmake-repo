#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/renoir/VertexBufferObject.h"
#include "mc/external/gameface/renoir/VertexType.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
struct CreateVertexBufferCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::renoir::VertexType>         Type;
    ::ll::TypedStorage<4, 4, ::renoir::VertexBufferObject> Object;
    ::ll::TypedStorage<4, 4, uint>                         Size;
    ::ll::TypedStorage<1, 1, bool>                         ChangesOften;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct CreateVertexBufferCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk610cef;
    ::ll::UntypedStorage<4, 4> mUnkb239e5;
    ::ll::UntypedStorage<4, 4> mUnk6e3f68;
    ::ll::UntypedStorage<1, 1> mUnka11e25;
    // NOLINTEND

public:
    // prevent constructor by default
    CreateVertexBufferCmd& operator=(CreateVertexBufferCmd const&);
    CreateVertexBufferCmd(CreateVertexBufferCmd const&);
    CreateVertexBufferCmd();
};
#else // @header-generator platform
struct CreateVertexBufferCmd {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace renoir
