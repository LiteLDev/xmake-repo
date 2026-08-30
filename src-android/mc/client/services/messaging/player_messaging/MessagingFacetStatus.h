#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerMessaging {

enum class MessagingFacetStatus : uchar {
    Loading        = 0,
    ImageRetrieval = 1,
    Loaded         = 2,
};

}
