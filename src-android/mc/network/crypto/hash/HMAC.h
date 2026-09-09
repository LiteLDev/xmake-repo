#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/hash/HashType.h"

// auto generated forward declare list
// clang-format off
namespace Crypto::Hash { class IHash; }
// clang-format on

namespace Crypto::Hash {

class HMAC {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<Crypto::Hash::IHash>> mHash;
    ::ll::TypedStorage<8, 24, std::string>                         mKey;
    ::ll::TypedStorage<4, 4, int>                                  mResultSize;
    // NOLINTEND

public:
    // prevent constructor by default
    HMAC();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HMAC(::Crypto::Hash::HashType, std::string const&, int);

    MCNAPI ulong resultSize() const;

    MCNAPI void signAndAppend(std::string const&, std::string&, ulong const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Crypto::Hash::HashType, std::string const&, int);
    // NOLINTEND
};

} // namespace Crypto::Hash
