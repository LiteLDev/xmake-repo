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
struct CreateIndexBufferCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::renoir::IndexBufferType>   IndexType;
    ::ll::TypedStorage<4, 4, ::renoir::IndexBufferObject> Object;
    ::ll::TypedStorage<4, 4, uint>                        Size;
    ::ll::TypedStorage<1, 1, bool>                        ChangesOften;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct CreateIndexBufferCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkfb6a5d;
    ::ll::UntypedStorage<4, 4> mUnke61e9f;
    ::ll::UntypedStorage<4, 4> mUnkb0d6cb;
    ::ll::UntypedStorage<1, 1> mUnk9780bd;
    // NOLINTEND

public:
    // prevent constructor by default
    CreateIndexBufferCmd& operator=(CreateIndexBufferCmd const&);
    CreateIndexBufferCmd(CreateIndexBufferCmd const&);
    CreateIndexBufferCmd();
};
#else // @header-generator platform
struct CreateIndexBufferCmd {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace renoir
