#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
class LevelData;
// clang-format on

class UniqueIDManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mLastUniqueID;
    ::ll::TypedStorage<1, 1, bool const>      mIsClientSide;
    // NOLINTEND

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
};
