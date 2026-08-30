#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/poi/Storage.h"

// auto generated forward declare list
// clang-format off
class LevelStorage;
namespace Poi { struct Registry; }
// clang-format on

namespace Poi {

class Manager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Poi::Registry const*> mRegistry;
    ::ll::TypedStorage<8, 8, ::LevelStorage*>        mLevelStorage;
    ::ll::TypedStorage<8, 352, ::Poi::Storage>       mStorage;
    // NOLINTEND
};

} // namespace Poi
