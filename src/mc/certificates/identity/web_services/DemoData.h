#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace WebServices::EduSignin {

struct DemoData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> sessionId;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk752b41;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    DemoData& operator=(DemoData const&);
    DemoData(DemoData const&);
    DemoData();
#endif // @header-generator platform
};

} // namespace WebServices::EduSignin
