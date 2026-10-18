#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
struct PingedCompatibleServer;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/GameType.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct LanWorld {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> id;
    ::ll::TypedStorage<8, 24, std::string> name;
    ::ll::TypedStorage<8, 24, std::string> ownerName;
    ::ll::TypedStorage<8, 24, std::string> address;
    ::ll::TypedStorage<4, 4, int>          port;
    ::ll::TypedStorage<4, 4, ::GameType>   gameMode;
    ::ll::TypedStorage<1, 1, bool>         isHardcore;
    ::ll::TypedStorage<4, 4, int>          playerCount;
    ::ll::TypedStorage<4, 4, int>          capacity;
    ::ll::TypedStorage<8, 24, std::string> version;
    ::ll::TypedStorage<1, 1, bool>         isEditorWorld;
    // NOLINTEND

public:
    // prevent constructor by default
    LanWorld& operator=(LanWorld const&);
    LanWorld(LanWorld const&);
    LanWorld();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~LanWorld();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct LanWorld {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> id;
    ::ll::TypedStorage<8, 32, ::std::string> name;
    ::ll::TypedStorage<8, 32, ::std::string> ownerName;
    ::ll::TypedStorage<8, 32, ::std::string> address;
    ::ll::TypedStorage<4, 4, int>            port;
    ::ll::TypedStorage<4, 4, ::GameType>     gameMode;
    ::ll::TypedStorage<1, 1, bool>           isHardcore;
    ::ll::TypedStorage<4, 4, int>            playerCount;
    ::ll::TypedStorage<4, 4, int>            capacity;
    ::ll::TypedStorage<8, 32, ::std::string> version;
    ::ll::TypedStorage<1, 1, bool>           isEditorWorld;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~LanWorld();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct LanWorld {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
