#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct RealmSlot {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>          id;
    ::ll::TypedStorage<8, 24, std::string> worldName;
    ::ll::TypedStorage<8, 24, std::string> slotImage;
    ::ll::TypedStorage<1, 1, bool>         empty;
    ::ll::TypedStorage<4, 4, int>          gameMode;
    ::ll::TypedStorage<1, 1, bool>         hardcore;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmSlot& operator=(RealmSlot const&);
    RealmSlot();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RealmSlot();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct RealmSlot {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>            id;
    ::ll::TypedStorage<8, 32, ::std::string> worldName;
    ::ll::TypedStorage<8, 32, ::std::string> slotImage;
    ::ll::TypedStorage<1, 1, bool>           empty;
    ::ll::TypedStorage<4, 4, int>            gameMode;
    ::ll::TypedStorage<1, 1, bool>           hardcore;
    // NOLINTEND
};
#else // @header-generator platform
struct RealmSlot {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
