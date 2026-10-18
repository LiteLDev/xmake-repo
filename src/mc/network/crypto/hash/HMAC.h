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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<Crypto::Hash::IHash>> mHash;
    ::ll::TypedStorage<8, 24, std::string>                         mKey;
    ::ll::TypedStorage<4, 4, int>                                  mResultSize;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Crypto::Hash::IHash>> mHash;
    ::ll::TypedStorage<8, 32, ::std::string>                           mKey;
    ::ll::TypedStorage<4, 4, int>                                      mResultSize;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    HMAC();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI HMAC(::Crypto::Hash::HashType, std::string const&, int);
#else // @header-generator platform
    MCAPI HMAC(::Crypto::Hash::HashType type, ::std::string const& key, int resultSize);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong resultSize() const;

    MCNAPI void signAndAppend(std::string const&, std::string&, ulong const);
#else // @header-generator platform
    MCAPI void _final(::std::string& out);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Crypto::Hash::HashType, std::string const&, int);
#else // @header-generator platform
    MCAPI void* $ctor(::Crypto::Hash::HashType type, ::std::string const& key, int resultSize);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Crypto::Hash
