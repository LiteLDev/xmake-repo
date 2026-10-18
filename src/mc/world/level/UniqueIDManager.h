#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/game_refs/OwnerPtr.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/legacy/ActorUniqueID.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class LevelData;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class UniqueIDManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mLastUniqueID;
    ::ll::TypedStorage<1, 1, bool const>      mIsClientSide;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    UniqueIDManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ActorUniqueID getNewUniqueID();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::OwnerPtr<UniqueIDManager> setupUniqueIDManager(::LevelData&, bool);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
