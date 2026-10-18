#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/renoir/BackendResourceCommands.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
struct BackendResourceCommandOffset {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::renoir::BackendResourceCommands> Command;
    ::ll::TypedStorage<4, 4, uint>                              Offset;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct BackendResourceCommandOffset {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk18b5de;
    ::ll::UntypedStorage<4, 4> mUnk4833b2;
    // NOLINTEND

public:
    // prevent constructor by default
    BackendResourceCommandOffset& operator=(BackendResourceCommandOffset const&);
    BackendResourceCommandOffset(BackendResourceCommandOffset const&);
    BackendResourceCommandOffset();
};
#else // @header-generator platform
struct BackendResourceCommandOffset {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace renoir
