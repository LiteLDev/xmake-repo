#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

enum class EncryptionCipherMode : uchar {
#if defined(LL_PLAT_A) // @header-generator platform
    CFB8   = 0,
    CFB128 = 1,
#else // @header-generator platform
    Cfb8   = 0,
    Cfb128 = 1,
#endif // @header-generator platform
};

}
