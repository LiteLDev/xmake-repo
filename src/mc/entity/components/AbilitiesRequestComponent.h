#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/entity/components/AbilitiesRequest.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
struct AbilitiesRequest;
// clang-format on
#endif // @header-generator platform

struct AbilitiesRequestComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<AbilitiesRequest>> mRequests;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::AbilitiesRequest>> mRequests;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    AbilitiesRequestComponent& operator=(AbilitiesRequestComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
