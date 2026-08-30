#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

class EntityStorageKeySystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::string generateStorageKey(long);

    MCNAPI static bool getIsDirtySinceSerialization(::EntityContext&, std::string const&);

    MCNAPI static void setDirtyFromNonSerializedState(::EntityContext&);

    MCNAPI static void setLastSerializedState(::EntityContext&, std::string const&);
    // NOLINTEND
};
