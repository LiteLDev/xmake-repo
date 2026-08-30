#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ShareToTeams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>         enabled;
    ::ll::TypedStorage<8, 24, std::string> openWorldUrl;
    ::ll::TypedStorage<1, 1, bool>         manageShareEnabled;
    ::ll::TypedStorage<1, 1, bool>         joinCodeShareEnabled;
    ::ll::TypedStorage<8, 24, std::string> joinWorldUrl;
    // NOLINTEND

public:
    // prevent constructor by default
    ShareToTeams& operator=(ShareToTeams const&);
    ShareToTeams();
};
