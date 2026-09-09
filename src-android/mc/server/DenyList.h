#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"

class DenyList {
public:
    // DenyList inner types declare
    // clang-format off
    struct Entry;
    // clang-format on

    // DenyList inner types define
    enum class Duration : int {
        Session                 = 0,
        OneTimeForInvalidPlayer = 1,
        Invalid                 = 2,
    };

    struct Entry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::mce::UUID>                mUuid;
        ::ll::TypedStorage<8, 32, std::optional<std::string>> mXuid;
        ::ll::TypedStorage<4, 4, ::DenyList::Duration>        mDuration;
        // NOLINTEND

    public:
        // prevent constructor by default
        Entry& operator=(Entry const&);
        Entry();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<DenyList::Entry>> mEntries;
    ::ll::TypedStorage<4, 40, std::recursive_mutex>         mEntriesMutex;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addEntry(::DenyList::Entry const&);

    MCNAPI ::DenyList::Duration getDuration(::DenyList::Entry const&) const;

    MCNAPI bool isBlocked(::DenyList::Entry const&) const;

    MCNAPI bool isXUIDBlocked(std::optional<std::string> const&, const DenyList::Entry*&) const;

    MCNAPI void removeEntry(::DenyList::Entry const&);

    MCNAPI ~DenyList();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
