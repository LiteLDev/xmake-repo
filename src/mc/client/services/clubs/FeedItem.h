#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/client/network/realms/RealmEvent.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Clubs {

struct FeedItem {
public:
    // FeedItem inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class Type : int {
        Unknown    = 0,
        Text       = 1,
        Screenshot = 2,
        Comment    = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Clubs::FeedItem::Type>                      mFeedItemType;
    ::ll::TypedStorage<8, 24, std::string>                                 mFeedItemRoot;
    ::ll::TypedStorage<8, 24, std::string>                                 mFeedItemId;
    ::ll::TypedStorage<8, 24, std::string>                                 mContent;
    ::ll::TypedStorage<8, 24, std::string>                                 mAuthorXuid;
    ::ll::TypedStorage<8, 24, std::string>                                 mDatePosted;
    ::ll::TypedStorage<8, 24, std::string>                                 mCaption;
    ::ll::TypedStorage<4, 4, int>                                          mNumComments;
    ::ll::TypedStorage<4, 4, int>                                          mNumLikes;
    ::ll::TypedStorage<1, 1, bool>                                         mHasLiked;
    ::ll::TypedStorage<1, 1, bool>                                         mHasViewed;
    ::ll::TypedStorage<1, 1, bool>                                         mHadViewed;
    ::ll::TypedStorage<1, 1, bool>                                         mHasScreenshotLoaded;
    ::ll::TypedStorage<8, 8, long>                                         mTimePosted;
    ::ll::TypedStorage<8, 24, std::string>                                 mRealmEventGuid;
    ::ll::TypedStorage<8, 144, std::optional<Realms::Stories::RealmEvent>> mRealmEvent;
    // NOLINTEND

public:
    // prevent constructor by default
    FeedItem(FeedItem const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::string getFeedEntityPath() const;

    MCNAPI ::Clubs::FeedItem& operator=(::Clubs::FeedItem&&);
    // NOLINTEND
#else // @header-generator platform
    enum class Type : int {};
#endif // @header-generator platform
};

} // namespace Clubs
