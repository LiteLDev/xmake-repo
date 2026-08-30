#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/social/EduResponseError.h"

namespace Social {

struct EduFetchTenantSettingsResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, std::optional<Social::EduResponseError>>                           error;
    ::ll::TypedStorage<1, 2, std::optional<bool>>                                                enabled;
    ::ll::TypedStorage<8, 16, std::optional<std::chrono::duration<long long, std::ratio<1, 1>>>> refreshAfterSeconds;
    // NOLINTEND

public:
    // prevent constructor by default
    EduFetchTenantSettingsResponse& operator=(EduFetchTenantSettingsResponse const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~EduFetchTenantSettingsResponse();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social
