#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms::Stories {

enum class PostStatus : int {
    Idle          = 0,
    InProgress    = 1,
    Success       = 2,
    InternalError = 3,
    InputInvalid  = 4,
    Uploading     = 5,
    UploadFailed  = 6,
    PostingFailed = 7,
    RateLimit     = 8,
};

}
