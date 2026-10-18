#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Asymmetric {

enum class PubKeyFormat : int {
#if defined(LL_PLAT_A) // @header-generator platform
    X509_PUBKEY      = 0,
    MS_PUBLICKEYBLOB = 1,
#else // @header-generator platform
    X509Pubkey      = 0,
    MsPublickeyblob = 1,
#endif // @header-generator platform
};

}
