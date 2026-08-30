#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/clubs/FeedItem.h"

namespace Clubs {

struct ReportedItem {
public:
    // ReportedItem inner types define
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
};

} // namespace Clubs
