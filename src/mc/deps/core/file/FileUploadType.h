#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

#if defined(LL_PLAT_A) // @header-generator platform
enum class FileUploadType : int {
    UnknownFile = 0,
    WorldFile   = 1,
    PackFile    = 2,
};
#else // @header-generator platform
enum class FileUploadType : int {};
#endif // @header-generator platform

}
