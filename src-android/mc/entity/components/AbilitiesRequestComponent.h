#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/AbilitiesRequest.h"

struct AbilitiesRequestComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<AbilitiesRequest>> mRequests;
    // NOLINTEND

public:
    // prevent constructor by default
    AbilitiesRequestComponent& operator=(AbilitiesRequestComponent const&);
};
