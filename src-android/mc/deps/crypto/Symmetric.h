#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/symmetric/OperationMode.h"
#include "mc/deps/crypto/symmetric/system/ISystemInterface.h"
#include "mc/deps/crypto/symmetric/system/System.h"

namespace Crypto::Symmetric {

class Symmetric : public ::Crypto::Symmetric::ISystemInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<Crypto::Symmetric::ISystemInterface>> mInterface;
    // NOLINTEND

public:
    // prevent constructor by default
    Symmetric();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Symmetric();

    virtual void init(std::string const&, std::string const&);

    virtual void encrypt(std::string const&, std::string&);

    virtual void decrypt(std::string const&, std::string&);

    virtual ulong getKeySize() const;

    virtual ulong getBlockSize() const;

    virtual ulong getEncryptionBufferSize(ulong) const;

    virtual bool encryptToBuffer(::gsl::span<const char>, ::gsl::span<char>, ulong&);

    virtual ulong getDecryptionBufferSize(ulong) const;

    virtual bool decryptToBuffer(::gsl::span<const char>, ::gsl::span<char>, ulong&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Symmetric(::Crypto::Symmetric::System, ::Crypto::Symmetric::OperationMode);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Crypto::Symmetric::System, ::Crypto::Symmetric::OperationMode);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $init(std::string const&, std::string const&);

    MCNAPI void $encrypt(std::string const&, std::string&);

    MCNAPI void $decrypt(std::string const&, std::string&);

    MCNAPI ulong $getKeySize() const;

    MCNAPI ulong $getBlockSize() const;

    MCNAPI ulong $getEncryptionBufferSize(ulong) const;

    MCNAPI bool $encryptToBuffer(::gsl::span<const char>, ::gsl::span<char>, ulong&);

    MCNAPI ulong $getDecryptionBufferSize(ulong) const;

    MCNAPI bool $decryptToBuffer(::gsl::span<const char>, ::gsl::span<char>, ulong&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Crypto::Symmetric
