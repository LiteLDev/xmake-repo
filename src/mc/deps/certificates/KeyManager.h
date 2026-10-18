#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/asymmetric/system/System.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/crypto/hash/HashType.h"

// auto generated forward declare list
// clang-format off
class WebKey;
namespace Crypto::Asymmetric { class Asymmetric; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class KeyManager {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                    mPublicKey;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Crypto::Asymmetric::Asymmetric>> mInstance;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnka2774b;
    ::ll::UntypedStorage<8, 8>  mUnkbe6af1;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    KeyManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~KeyManager();

    virtual bool isValid() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI KeyManager(::KeyManager const&);
#else // @header-generator platform
    MCNAPI KeyManager(::KeyManager const& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI KeyManager(std::string const&, ::Crypto::Asymmetric::System);
#else // @header-generator platform
    MCNAPI KeyManager(::std::string const& publicKey, ::Crypto::Asymmetric::System system);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getPublicKey() const;

    MCNAPI ::WebKey getPublicWebKey() const;

    MCNAPI bool verify(std::string const&, std::string const&, ::Crypto::Hash::HashType) const;
#else // @header-generator platform
    MCNAPI ::KeyManager& operator=(::KeyManager const& rhs);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::KeyManager const&);
#else // @header-generator platform
    MCNAPI void* $ctor(::KeyManager const& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&, ::Crypto::Asymmetric::System);
#else // @header-generator platform
    MCNAPI void* $ctor(::std::string const& publicKey, ::Crypto::Asymmetric::System system);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isValid() const;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
