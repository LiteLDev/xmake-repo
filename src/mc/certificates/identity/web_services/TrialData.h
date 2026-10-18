#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace WebServices::EduSignin {

struct TrialData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int> trialsRemaining;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk23f736;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    TrialData& operator=(TrialData const&);
    TrialData(TrialData const&);
    TrialData();
#endif // @header-generator platform
};

} // namespace WebServices::EduSignin
