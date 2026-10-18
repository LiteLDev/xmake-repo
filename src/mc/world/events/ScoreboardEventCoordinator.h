#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventCoordinator.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/events/ScoreboardEventListener.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ScoreboardEventListener;
#endif // @header-generator platform
struct ScoreboardId;
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class ScoreboardEventCoordinator : public ::EventCoordinator<ScoreboardEventListener> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScoreboardEventCoordinator();
    // NOLINTEND

#else // @header-generator platform
class ScoreboardEventCoordinator : public ::EventCoordinator<::ScoreboardEventListener> {
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void sendOnObjectiveAdded(std::string const&);
#else // @header-generator platform
    MCAPI void sendOnObjectiveAdded(::std::string const& objective);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void sendOnObjectiveRemoved(std::string const&);
#else // @header-generator platform
    MCAPI void sendOnObjectiveRemoved(::std::string const& objective);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void sendOnScoreChanged(::ScoreboardId const&, std::string const&, int);

    MCNAPI void sendOnScoreboardIdentityRemoved(::ScoreboardId const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI void sendOnScoreChanged(::ScoreboardId const& id, ::std::string const& objective, int score);
#endif // @header-generator platform
    // NOLINTEND
};
