#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/asymmetric/system/System.h"
#include "mc/deps/crypto/hash/HashType.h"

// auto generated forward declare list
// clang-format off
class WebKey;
namespace Crypto::Asymmetric { class Asymmetric; }
// clang-format on

class KeyManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                    mPublicKey;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Crypto::Asymmetric::Asymmetric>> mInstance;
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
    MCNAPI KeyManager(::KeyManager const&);

    MCNAPI KeyManager(std::string const&, ::Crypto::Asymmetric::System);

    MCNAPI std::string getPublicKey() const;

    MCNAPI ::WebKey getPublicWebKey() const;

    MCNAPI bool verify(std::string const&, std::string const&, ::Crypto::Hash::HashType) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::KeyManager const&);

    MCNAPI void* $ctor(std::string const&, ::Crypto::Asymmetric::System);
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
