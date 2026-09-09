#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/scores/ObjectiveSortOrder.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class Objective;
class Scoreboard;
struct ScoreboardId;
// clang-format on

class DisplayObjective {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Objective const*>   mObjective;
    ::ll::TypedStorage<1, 1, ::ObjectiveSortOrder> mSortOrder;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::string const getBelowNameStringForId(::ScoreboardId const&) const;

    MCNAPI ::Objective const& getObjective() const;

    MCNAPI ::ObjectiveSortOrder getSortOrder() const;

    MCNAPI bool isValid() const;
    // NOLINTEND
};
