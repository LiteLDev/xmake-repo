#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/UUID.h"
#else // @header-generator platform
#include "mc/platform/threading/LockGuard.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 16, ::mce::UUID>                mUuid;
        ::ll::TypedStorage<8, 32, std::optional<std::string>> mXuid;
        ::ll::TypedStorage<4, 4, ::DenyList::Duration>        mDuration;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 16> mUnk89b913;
        ::ll::UntypedStorage<8, 40> mUnkaeabaa;
        ::ll::UntypedStorage<4, 4>  mUnk657815;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        Entry& operator=(Entry const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        Entry(Entry const&);
#endif // @header-generator platform
        Entry();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI Entry(::mce::UUID const& uuid, ::std::string const& xuid);

        MCNAPI ~Entry();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::mce::UUID const& uuid, ::std::string const& xuid);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<DenyList::Entry>> mEntries;
    ::ll::TypedStorage<4, 40, std::recursive_mutex>         mEntriesMutex;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk5bbfd3;
    ::ll::UntypedStorage<8, 80> mUnk3f8199;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    DenyList& operator=(DenyList const&);
    DenyList(DenyList const&);
    DenyList();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addEntry(::DenyList::Entry const&);
#else // @header-generator platform
    MCNAPI void addEntry(::DenyList::Entry const& entry);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::DenyList::Duration getDuration(::DenyList::Entry const&) const;
#else // @header-generator platform
    MCNAPI ::DenyList::Duration getDuration(::DenyList::Entry const& entry) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isBlocked(::DenyList::Entry const&) const;
#else // @header-generator platform
    MCNAPI bool isBlocked(::DenyList::Entry const& entry) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isXUIDBlocked(std::optional<std::string> const&, const DenyList::Entry*&) const;

    MCNAPI void removeEntry(::DenyList::Entry const&);

    MCNAPI ~DenyList();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void removeEntry(::DenyList::Entry const& entry);
#endif // @header-generator platform
    // NOLINTEND
};
