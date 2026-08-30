#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::texturestreaming {

enum class TextureUploadState : uchar {
    NoChangeRequested = 0,
    RequestNotStarted = 1,
    WaitingOnCache    = 2,
    UploadInProgress  = 3,
    CacheLoadFailed   = 4,
};

}
