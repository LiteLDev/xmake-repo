#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class GameVersion;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct GameVersionBindings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>  major;
    ::ll::TypedStorage<4, 4, int>  minor;
    ::ll::TypedStorage<4, 4, int>  patch;
    ::ll::TypedStorage<4, 4, int>  revision;
    ::ll::TypedStorage<1, 1, bool> isBeta;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit GameVersionBindings(::GameVersion const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::GameVersion const&);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct GameVersionBindings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>  major;
    ::ll::TypedStorage<4, 4, int>  minor;
    ::ll::TypedStorage<4, 4, int>  patch;
    ::ll::TypedStorage<4, 4, int>  revision;
    ::ll::TypedStorage<1, 1, bool> isBeta;
    // NOLINTEND
};
#else // @header-generator platform
struct GameVersionBindings {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
