#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/level/poi/Storage.h"

// auto generated forward declare list
// clang-format off
class LevelStorage;
namespace Poi { struct Registry; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Poi {

class Manager {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Poi::Registry const*> mRegistry;
    ::ll::TypedStorage<8, 8, ::LevelStorage*>        mLevelStorage;
    ::ll::TypedStorage<8, 352, ::Poi::Storage>       mStorage;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>   mUnkd7ecdb;
    ::ll::UntypedStorage<8, 8>   mUnkaa6282;
    ::ll::UntypedStorage<8, 488> mUnk3cda98;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    Manager& operator=(Manager const&);
    Manager(Manager const&);
    Manager();
#endif // @header-generator platform
};

} // namespace Poi
