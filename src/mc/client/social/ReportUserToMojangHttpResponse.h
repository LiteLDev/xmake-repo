#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
struct ReportUserToMojangHttpResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>         isSuccess;
    ::ll::TypedStorage<4, 4, uint>         responseCode;
    ::ll::TypedStorage<8, 24, std::string> responseBody;
    ::ll::TypedStorage<8, 24, std::string> reportId;
    // NOLINTEND

public:
    // prevent constructor by default
    ReportUserToMojangHttpResponse& operator=(ReportUserToMojangHttpResponse const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ReportUserToMojangHttpResponse();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct ReportUserToMojangHttpResponse {};
#endif // @header-generator platform

} // namespace Social
