#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events {

enum class PrivacyTagEnterprise : uchar {
    NotSet                = 0,
    NotUsedByEdu          = 1,
    AccessControlData     = 2,
    CustomerContent       = 3,
    EUII                  = 4,
    SupportData           = 5,
    Feedback              = 6,
    AccountData           = 7,
    PublicPersonalData    = 8,
    EUPI                  = 9,
    OII                   = 10,
    SystemMetadata        = 11,
    PublicNonPersonalData = 12,
};

}
