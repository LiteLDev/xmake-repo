#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/clubs/FeedItem.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Clubs {

class ActivityFeed {
public:
    // ActivityFeed inner types define
    enum class Type : int {
        Invalid  = 0,
        ClubFeed = 1,
        Comment  = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Clubs::ActivityFeed::Type>   mType;
    ::ll::TypedStorage<8, 24, std::string>                  mContToken;
    ::ll::TypedStorage<8, 24, std::vector<Clubs::FeedItem>> mFeedItems;
    // NOLINTEND

public:
    // prevent constructor by default
    ActivityFeed& operator=(ActivityFeed const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActivityFeed();

    MCNAPI ActivityFeed(::Clubs::ActivityFeed::Type, ::Json::Value&);

    MCNAPI void _parseAsClubFeed(::Json::Value const&);

    MCNAPI void _parseAsCommentFeed(::Json::Value const&);

    MCNAPI void addFeedItem(::Clubs::FeedItem const&);

    MCNAPI void addFeedPage(::Clubs::ActivityFeed const&);

    MCNAPI void deleteFeedItem(int);

    MCNAPI std::string const& getContToken() const;

    MCNAPI ::Clubs::FeedItem& getFeedItem(int);

    MCNAPI int getFeedSize() const;

    MCNAPI ::Clubs::ActivityFeed::Type getFeedType() const;

    MCNAPI bool getPagesRemain() const;

    MCNAPI void resortByTimePosted();

    MCNAPI ~ActivityFeed();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Clubs::ActivityFeed::Type, ::Json::Value&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Clubs
