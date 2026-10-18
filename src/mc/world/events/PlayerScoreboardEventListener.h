#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"
#include "mc/world/events/ScoreboardEventListener.h"
#include "mc/world/events/SubscribedObjectives.h"
#include "mc/world/scores/ScoreboardId.h"

// auto generated forward declare list
// clang-format off
class Player;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class SubscribedObjectives;
#endif // @header-generator platform
// clang-format on

class PlayerScoreboardEventListener : public ::ScoreboardEventListener {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<ScoreboardId, SubscribedObjectives>> mSubscribedObjectives;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ScoreboardId, ::SubscribedObjectives>> mSubscribedObjectives;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~PlayerScoreboardEventListener();

    virtual ::EventResult onScoreChanged(::ScoreboardId const&, std::string const&, int);
#else // @header-generator platform
    virtual ::EventResult
    onScoreChanged(::ScoreboardId const& id, ::std::string const& objective, int score) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SubscribedObjectives& getPlayerSubscriptions(::ScoreboardId const&, ::Player const&);

    MCNAPI void removePlayerSubscriptions(::ScoreboardId const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI ::SubscribedObjectives& getPlayerSubscriptions(::ScoreboardId const& id, ::Player const& player);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onScoreChanged(::ScoreboardId const&, std::string const&, int);
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::EventResult $onScoreChanged(::ScoreboardId const& id, ::std::string const& objective, int score);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
