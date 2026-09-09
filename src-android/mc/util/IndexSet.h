#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IndexSet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ulong>> mPacked;
    ::ll::TypedStorage<8, 24, std::vector<ulong>> mSparse;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI IndexSet();

    MCNAPI IndexSet(::IndexSet const&);

    MCNAPI bool contains(ulong) const;

    MCNAPI void insert(ulong);

    MCNAPI bool operator==(::IndexSet const&) const;

    MCNAPI void remove(ulong);

    MCNAPI ~IndexSet();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::IndexSet const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
