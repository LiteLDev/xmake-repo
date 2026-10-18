#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events {

enum class PrivacyTagEnterprise : uchar {
    NotSet                = 0,
    NotUsedByEdu          = 1,
    AccessControlData     = 2,
    CustomerContent       = 3,
#if defined(LL_PLAT_A) // @header-generator platform
    EUII                  = 4,
#else // @header-generator platform
    Euii                  = 4,
#endif // @header-generator platform
    SupportData           = 5,
    Feedback              = 6,
    AccountData           = 7,
    PublicPersonalData    = 8,
#if defined(LL_PLAT_A) // @header-generator platform
    EUPI                  = 9,
    OII                   = 10,
#else // @header-generator platform
    Eupi                  = 9,
    Oii                   = 10,
#endif // @header-generator platform
    SystemMetadata        = 11,
    PublicNonPersonalData = 12,
};

}
