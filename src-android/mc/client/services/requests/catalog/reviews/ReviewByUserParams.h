#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ReviewByUserParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mUserId;
    ::ll::TypedStorage<8, 24, std::string> mProductId;
    // NOLINTEND

public:
    // prevent constructor by default
    ReviewByUserParams& operator=(ReviewByUserParams const&);
    ReviewByUserParams();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ReviewByUserParams(std::string const&);

    MCNAPI ~ReviewByUserParams();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
