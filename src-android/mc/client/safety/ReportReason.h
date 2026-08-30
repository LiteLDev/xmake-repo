#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Safety {

enum class ReportReason : int {
    NONE                               = 0,
    CHEATING                           = 1,
    NAME_OR_GAMERTAG                   = 2,
    UNSPORTING_BEHAVIOR                = 4,
    CHILD_SEXUAL_EXPLOITATION_OR_ABUSE = 6,
    TERRORISM_OR_VIOLENT_EXTREMISM     = 7,
    HATE_SPEECH                        = 8,
    IMMINENT_HARM                      = 9,
    NON_CONSENSUAL_INTIMATE_IMAGERY    = 10,
    I_WANT_TO_REPORT_THEM              = 11,
    HARASSMENT_OR_BULLYING             = 12,
    SELF_HARM_OR_SUICIDE               = 13,
    SEXUALLY_INAPPROPRIATE             = 14,
    IMPERSONATION                      = 15,
    DRUGS_OR_ALCOHOL                   = 16,
    GALLERY_SCREENSHOT                 = 17,
};

}
