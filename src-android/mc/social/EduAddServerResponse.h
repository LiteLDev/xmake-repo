#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/social/EduResponseError.h"

namespace Social {

struct EduAddServerResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, std::optional<Social::EduResponseError>> error;
    // NOLINTEND

public:
    // prevent constructor by default
    EduAddServerResponse& operator=(EduAddServerResponse const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~EduAddServerResponse();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social
