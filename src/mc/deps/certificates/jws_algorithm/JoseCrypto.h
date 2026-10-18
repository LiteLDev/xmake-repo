#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/crypto/asymmetric/system/System.h"
#include "mc/deps/crypto/hash/HashType.h"
#include "mc/platform/brstd/basic_cstring_view.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace JwsAlgorithm {

struct JoseCrypto {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::Crypto::Asymmetric::System> mKeyType;
    ::ll::UntypedStorage<8, 16>                            mAlgorithm;
    ::ll::TypedStorage<4, 4, ::Crypto::Hash::HashType>     mHashType;
    ::ll::TypedStorage<4, 4, int>                          mSignatureLength;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnke6f431;
    ::ll::UntypedStorage<8, 16> mUnk8cf8a3;
    ::ll::UntypedStorage<4, 4>  mUnk3817dd;
    ::ll::UntypedStorage<4, 4>  mUnk260980;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    JoseCrypto& operator=(JoseCrypto const&);
    JoseCrypto(JoseCrypto const&);
    JoseCrypto();
#endif // @header-generator platform
};

} // namespace JwsAlgorithm
