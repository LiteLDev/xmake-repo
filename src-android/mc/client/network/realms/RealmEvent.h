#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/RealmEventId.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Realms::Stories {

class RealmEvent {
public:
    // RealmEvent inner types define
    using Metadata = std::string;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::RealmEventId>                     mEventId;
    ::ll::TypedStorage<8, 24, std::string>                       mGuid;
    ::ll::TypedStorage<8, 24, std::string>                       mClubsPostId;
    ::ll::TypedStorage<8, 8, long>                               mTime;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>          mPlayers;
    ::ll::TypedStorage<4, 16, std::optional<std::array<int, 3>>> mCoordinates;
    ::ll::TypedStorage<8, 24, std::string>                       mMetadata;
    ::ll::TypedStorage<1, 1, bool>                               mIsMatchedToFeedItem;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RealmEvent(::Realms::Stories::RealmEvent const&);

    MCNAPI std::string const& getClubsPostId() const;

    MCNAPI std::optional<std::array<int, 3>> const& getCoordinates() const;

    MCNAPI ::RealmEventId getEventId() const;

    MCNAPI std::string const& getGuid() const;

    MCNAPI bool getIsMatchedToFeedItem() const;

    MCNAPI std::string const& getMetadata() const;

    MCNAPI std::vector<std::string> const& getPlayers() const;

    MCNAPI long getTime() const;

    MCNAPI void setClubsPostId(std::string const&);

    MCNAPI void setIsMatchedToFeedItem();

    MCNAPI ~RealmEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Realms::Stories::RealmEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Realms::Stories
