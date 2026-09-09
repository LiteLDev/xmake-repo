#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class GameVersion;
// clang-format on

namespace OreUI {

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

} // namespace OreUI
