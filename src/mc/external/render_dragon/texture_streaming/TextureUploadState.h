#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::texturestreaming {

#if defined(LL_PLAT_A) // @header-generator platform
enum class TextureUploadState : uchar {
    NoChangeRequested = 0,
    RequestNotStarted = 1,
    WaitingOnCache    = 2,
    UploadInProgress  = 3,
    CacheLoadFailed   = 4,
};
#else // @header-generator platform
enum class TextureUploadState : uchar {};
#endif // @header-generator platform

}
