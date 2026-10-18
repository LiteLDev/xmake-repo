#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace WebServices::EduSignin {

struct TenantData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> id;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk3f8b0c;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    TenantData& operator=(TenantData const&);
    TenantData(TenantData const&);
    TenantData();
#endif // @header-generator platform
};

} // namespace WebServices::EduSignin
