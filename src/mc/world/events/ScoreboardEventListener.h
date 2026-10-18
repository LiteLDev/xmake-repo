#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
struct ScoreboardId;
// clang-format on

class ScoreboardEventListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScoreboardEventListener() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onObjectiveAdded(std::string const&);
#else // @header-generator platform
    virtual ::EventResult onObjectiveAdded(::std::string const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onObjectiveRemoved(std::string const&);
#else // @header-generator platform
    virtual ::EventResult onObjectiveRemoved(::std::string const& objective);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onScoreboardIdentityRemoved(::ScoreboardId const&);
#else // @header-generator platform
    virtual ::EventResult onScoreboardIdentityRemoved(::ScoreboardId const& id);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onScoreChanged(::ScoreboardId const&, std::string const&, int);
#else // @header-generator platform
    virtual ::EventResult onScoreChanged(::ScoreboardId const& id, ::std::string const& objective, int score);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onObjectiveAdded(std::string const&);
#else // @header-generator platform
    MCFOLD ::EventResult $onObjectiveAdded(::std::string const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onObjectiveRemoved(std::string const&);
#else // @header-generator platform
    MCFOLD ::EventResult $onObjectiveRemoved(::std::string const& objective);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onScoreboardIdentityRemoved(::ScoreboardId const&);
#else // @header-generator platform
    MCFOLD ::EventResult $onScoreboardIdentityRemoved(::ScoreboardId const& id);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onScoreChanged(::ScoreboardId const&, std::string const&, int);
#else // @header-generator platform
    MCFOLD ::EventResult $onScoreChanged(::ScoreboardId const& id, ::std::string const& objective, int score);


#endif // @header-generator platform
    // NOLINTEND
};
