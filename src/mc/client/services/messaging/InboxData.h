#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct InboxData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, long>                        mDateReceived;
    ::ll::TypedStorage<8, 24, std::string>                mDateString;
    ::ll::TypedStorage<8, 24, std::string>                mCategory;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mExpirationDate;
    ::ll::TypedStorage<1, 1, bool>                        mRead;
    // NOLINTEND

public:
    // prevent constructor by default
    InboxData& operator=(InboxData const&);
    InboxData(InboxData const&);
    InboxData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~InboxData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct InboxData {};
#endif // @header-generator platform
