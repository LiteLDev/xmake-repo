#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/client/services/clubs/FeedItem.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Clubs {

struct ReportedItem {
public:
    // ReportedItem inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class Type : int {
        Comment  = 0,
        FeedItem = 1,
        ChatItem = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Clubs::ReportedItem::Type>                       mType;
    ::ll::TypedStorage<8, 24, std::string>                                      mPathToItem;
    ::ll::TypedStorage<8, 24, std::string>                                      mLastReported;
    ::ll::TypedStorage<4, 4, int>                                               mReportCount;
    ::ll::TypedStorage<8, 24, std::string>                                      mReportId;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<std::string, std::string>>> mReports;
    ::ll::TypedStorage<8, 344, ::Clubs::FeedItem>                               mFeedItem;
    // NOLINTEND

public:
    // prevent constructor by default
    ReportedItem& operator=(ReportedItem const&);
    ReportedItem();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ReportedItem(::Clubs::ReportedItem const&);

    MCNAPI ~ReportedItem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Clubs::ReportedItem const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    enum class Type : int {};
#endif // @header-generator platform
};

} // namespace Clubs
