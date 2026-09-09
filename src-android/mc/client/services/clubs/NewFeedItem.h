#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Clubs {

struct NewFeedItem {
public:
    // NewFeedItem inner types define
    enum class Type : int {
        Text       = 0,
        Screenshot = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Clubs::NewFeedItem::Type> mType;
    ::ll::TypedStorage<8, 24, std::string>               mContent;
    ::ll::TypedStorage<8, 24, std::string>               mScreenshotCaption;
    // NOLINTEND

public:
    // prevent constructor by default
    NewFeedItem& operator=(NewFeedItem const&);
    NewFeedItem();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NewFeedItem(::Clubs::NewFeedItem::Type, std::string const&, std::string const&);

    MCNAPI ~NewFeedItem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Clubs::NewFeedItem::Type, std::string const&, std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Clubs
