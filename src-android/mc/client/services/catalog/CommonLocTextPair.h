#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CommonLocTextPair {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> langCode;
    ::ll::TypedStorage<8, 24, std::string> locText;
    // NOLINTEND

public:
    // prevent constructor by default
    CommonLocTextPair& operator=(CommonLocTextPair const&);
    CommonLocTextPair();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~CommonLocTextPair();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
