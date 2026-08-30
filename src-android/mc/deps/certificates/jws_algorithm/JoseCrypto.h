#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/asymmetric/system/System.h"
#include "mc/deps/crypto/hash/HashType.h"
#include "mc/platform/brstd/basic_cstring_view.h"

namespace JwsAlgorithm {

struct JoseCrypto {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Crypto::Asymmetric::System> mKeyType;
    ::ll::UntypedStorage<8, 16>                            mAlgorithm;
    ::ll::TypedStorage<4, 4, ::Crypto::Hash::HashType>     mHashType;
    ::ll::TypedStorage<4, 4, int>                          mSignatureLength;
    // NOLINTEND
};

} // namespace JwsAlgorithm
