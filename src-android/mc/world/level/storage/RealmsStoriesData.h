#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/RealmEventForPlayer.h"
#include "mc/world/level/storage/RealmEventId.h"

// auto generated forward declare list
// clang-format off
class LevelStorage;
// clang-format on

class RealmsStoriesData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::set<RealmEventId>>        mPublishedWorldRealmEvents;
    ::ll::TypedStorage<8, 24, std::set<RealmEventForPlayer>> mPublishedPlayerRealmEvents;
    ::ll::TypedStorage<8, 8, ::LevelStorage&>                mLevelStorage;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsStoriesData& operator=(RealmsStoriesData const&);
    RealmsStoriesData(RealmsStoriesData const&);
    RealmsStoriesData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RealmsStoriesData(::LevelStorage&);

    MCNAPI void setPlayerRealmEventPublished(::RealmEventId, std::string const&);

    MCNAPI void setWorldRealmEventPublished(::RealmEventId);

    MCNAPI bool wasPlayerRealmEventPublished(::RealmEventId, std::string const&) const;

    MCNAPI bool wasWorldRealmEventPublished(::RealmEventId) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::RealmEventId getRealmEventIdFromInternalName(std::string const&);

    MCNAPI static std::string const& getRealmEventInternalName(::RealmEventId);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& REALMS_STORIES_PREFIX();

    MCNAPI static std::map<RealmEventId, std::string> const& mRealmEventInternalNames();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::LevelStorage&);
    // NOLINTEND
};
