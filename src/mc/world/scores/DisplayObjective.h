#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/scores/ObjectiveSortOrder.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class CompoundTag;
#else // @header-generator platform
#endif // @header-generator platform
class Objective;
#if defined(LL_PLAT_A) // @header-generator platform
class Scoreboard;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const getBelowNameStringForId(::ScoreboardId const&) const;

    MCNAPI ::Objective const& getObjective() const;

    MCNAPI ::ObjectiveSortOrder getSortOrder() const;

    MCNAPI bool isValid() const;
#else // @header-generator platform
    MCNAPI ::std::string const getBelowNameStringForId(::ScoreboardId const& scoreboardId) const;
#endif // @header-generator platform
    // NOLINTEND
};
