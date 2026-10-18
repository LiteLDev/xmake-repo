#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IndexSet {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ulong>> mPacked;
    ::ll::TypedStorage<8, 24, std::vector<ulong>> mSparse;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnkf38d12;
    ::ll::UntypedStorage<8, 24> mUnkf89f4f;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    IndexSet& operator=(IndexSet const&);
    IndexSet();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI IndexSet();
#else // @header-generator platform
    MCNAPI IndexSet(::IndexSet const& other);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI IndexSet(::IndexSet const&);

    MCNAPI bool contains(ulong) const;

    MCNAPI void insert(ulong);

    MCNAPI bool operator==(::IndexSet const&) const;

    MCNAPI void remove(ulong);
#else // @header-generator platform
    MCNAPI void insert(uint64 index);
#endif // @header-generator platform

    MCNAPI ~IndexSet();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::IndexSet const&);
#else // @header-generator platform
    MCNAPI void* $ctor(::IndexSet const& other);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
