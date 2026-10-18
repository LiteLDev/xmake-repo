#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/pkcs7/system/ISystemInterface.h"

namespace Crypto::Pkcs7 {

class OpenSSLpkcs7Interface : public ::Crypto::Pkcs7::ISystemInterface {};

} // namespace Crypto::Pkcs7
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
