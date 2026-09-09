#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/identity/PlayFabBanDetails.h"
#include "mc/client/identity/PlayFabStatus.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Social::PlayFabRequestHelpers {

struct PlayFabResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Social::PlayFabStatus>                   status;
    ::ll::UntypedStorage<8, 16>                                         data;
    ::ll::TypedStorage<8, 48, std::optional<Social::PlayFabBanDetails>> banDetails;
    // NOLINTEND
};

} // namespace Social::PlayFabRequestHelpers
