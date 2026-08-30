#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/certificates/KeyManager.h"
#include "mc/deps/crypto/asymmetric/PrivateKeySigningFormat.h"
#include "mc/deps/crypto/asymmetric/system/System.h"
#include "mc/deps/crypto/hash/HashType.h"

class PrivateKeyManager : public ::KeyManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mPrivateKey;
    // NOLINTEND

public:
    // prevent constructor by default
    PrivateKeyManager(PrivateKeyManager const&);
    PrivateKeyManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PrivateKeyManager();

    virtual bool isValid() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PrivateKeyManager(::Crypto::Asymmetric::System);

    MCNAPI std::string computeSecret(::KeyManager const&) const;

    MCNAPI ::PrivateKeyManager& operator=(::PrivateKeyManager const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Crypto::Asymmetric::System);
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
