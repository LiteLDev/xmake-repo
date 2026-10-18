#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/renoir/BackendCommands.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
struct BackendCommandOffset {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::renoir::BackendCommands> Command;
    ::ll::TypedStorage<4, 4, uint>                      Offset;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct BackendCommandOffset {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk6c003b;
    ::ll::UntypedStorage<4, 4> mUnkd99364;
    // NOLINTEND

public:
    // prevent constructor by default
    BackendCommandOffset& operator=(BackendCommandOffset const&);
    BackendCommandOffset(BackendCommandOffset const&);
    BackendCommandOffset();
};
#else // @header-generator platform
struct BackendCommandOffset {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace renoir
