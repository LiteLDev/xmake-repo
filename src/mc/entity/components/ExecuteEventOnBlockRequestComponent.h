#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/entity/components/ExecuteEventOnBlockRequest.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
struct ExecuteEventOnBlockRequest;
// clang-format on
#endif // @header-generator platform

struct ExecuteEventOnBlockRequestComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ExecuteEventOnBlockRequest>> mRequests;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ExecuteEventOnBlockRequest>> mRequests;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ExecuteEventOnBlockRequestComponent& operator=(ExecuteEventOnBlockRequestComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
