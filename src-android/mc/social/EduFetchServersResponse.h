#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/flat_map.h"
#include "mc/social/EduDedicatedServerDetails.h"
#include "mc/social/EduResponseError.h"

namespace Social {

struct EduFetchServersResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, std::optional<Social::EduResponseError>> error;
    ::ll::UntypedStorage<8, 56>                                        servers;
    // NOLINTEND

public:
    // prevent constructor by default
    EduFetchServersResponse& operator=(EduFetchServersResponse const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~EduFetchServersResponse();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social
