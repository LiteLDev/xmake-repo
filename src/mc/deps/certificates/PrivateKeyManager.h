#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/certificates/KeyManager.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/crypto/asymmetric/PrivateKeySigningFormat.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/crypto/asymmetric/system/System.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/crypto/hash/HashType.h"
#else // @header-generator platform
#endif // @header-generator platform

class PrivateKeyManager : public ::KeyManager {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mPrivateKey;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkdcc79d;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    PrivateKeyManager& operator=(PrivateKeyManager const&);
#endif // @header-generator platform
    PrivateKeyManager(PrivateKeyManager const&);
    PrivateKeyManager();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~PrivateKeyManager();
#else // @header-generator platform
    virtual bool isValid() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isValid() const;
#else // @header-generator platform
    virtual ~PrivateKeyManager() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit PrivateKeyManager(::Crypto::Asymmetric::System);
#else // @header-generator platform
    MCNAPI explicit PrivateKeyManager(::Crypto::Asymmetric::System system);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string computeSecret(::KeyManager const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCNAPI PrivateKeyManager(
        ::std::string const&         publicKey,
        ::std::string const&         privateKey,
        ::Crypto::Asymmetric::System system
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PrivateKeyManager& operator=(::PrivateKeyManager const&);
#else // @header-generator platform
    MCNAPI ::std::string computeSecret(::KeyManager const& peer) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Crypto::Asymmetric::System);
#else // @header-generator platform
    MCNAPI void* $ctor(::Crypto::Asymmetric::System system);

#ifdef LL_PLAT_S
    MCNAPI void*
    $ctor(::std::string const& publicKey, ::std::string const& privateKey, ::Crypto::Asymmetric::System system);
#endif
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
