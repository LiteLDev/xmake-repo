#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/social/EduResponseError.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Social {

struct EduAddServerResponse {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 64, std::optional<Social::EduResponseError>> error;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 72> mUnk95caf4;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    EduAddServerResponse& operator=(EduAddServerResponse const&);
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
    EduAddServerResponse(EduAddServerResponse const&);
    EduAddServerResponse();
#endif // @header-generator platform
};

} // namespace Social
