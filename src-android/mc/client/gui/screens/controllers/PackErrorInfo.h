#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PackErrorInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> type;
    ::ll::TypedStorage<8, 24, std::string> file;
    ::ll::TypedStorage<8, 24, std::string> text;
    // NOLINTEND

public:
    // prevent constructor by default
    PackErrorInfo& operator=(PackErrorInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PackErrorInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
