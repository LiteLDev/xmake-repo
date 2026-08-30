#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Settings {

struct LocStringData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>              id;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> parameters;
    // NOLINTEND

public:
    // prevent constructor by default
    LocStringData& operator=(LocStringData const&);
    LocStringData(LocStringData const&);
    LocStringData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~LocStringData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Settings
