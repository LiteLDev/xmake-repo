#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/crypto/symmetric/OperationMode.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/crypto/symmetric/system/ISystemInterface.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/crypto/symmetric/system/System.h"

// auto generated forward declare list
// clang-format off
struct evp_cipher_ctx_st;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Crypto::Symmetric {

class OpenSSLSymmetricInterface : public ::Crypto::Symmetric::ISystemInterface {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::Crypto::Symmetric::System>        mSystem;
    ::ll::TypedStorage<4, 4, ::Crypto::Symmetric::OperationMode> mMode;
    ::ll::TypedStorage<8, 8, std::unique_ptr<evp_cipher_ctx_st>> mEncryptionPointer;
    ::ll::TypedStorage<8, 8, std::unique_ptr<evp_cipher_ctx_st>> mDecryptionPointer;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnke117b9;
    ::ll::UntypedStorage<4, 4> mUnk4fbbf1;
    ::ll::UntypedStorage<8, 8> mUnk52299c;
    ::ll::UntypedStorage<8, 8> mUnk1ec67e;
    // NOLINTEND

public:
    // prevent constructor by default
    OpenSSLSymmetricInterface& operator=(OpenSSLSymmetricInterface const&);
    OpenSSLSymmetricInterface(OpenSSLSymmetricInterface const&);
    OpenSSLSymmetricInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void init(::std::string const& key, ::std::string const& IV) /*override*/;

    virtual void encrypt(::std::string const& plaintext, ::std::string& out) /*override*/;

    virtual void decrypt(::std::string const& ciphertext, ::std::string& out) /*override*/;

    virtual uint64 getKeySize() const /*override*/;

    virtual uint64 getBlockSize() const /*override*/;

    virtual uint64 getEncryptionBufferSize(uint64 inputSize) const /*override*/;

    virtual bool
    encryptToBuffer(::gsl::span<char const> input, ::gsl::span<char> output, uint64& bytesWritten) /*override*/;

    virtual uint64 getDecryptionBufferSize(uint64 inputSize) const /*override*/;

    virtual bool
    decryptToBuffer(::gsl::span<char const> input, ::gsl::span<char> output, uint64& bytesWritten) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $init(::std::string const& key, ::std::string const& IV);

    MCNAPI void $encrypt(::std::string const& plaintext, ::std::string& out);

    MCNAPI void $decrypt(::std::string const& ciphertext, ::std::string& out);

    MCNAPI uint64 $getKeySize() const;

    MCNAPI uint64 $getBlockSize() const;

    MCNAPI uint64 $getEncryptionBufferSize(uint64 inputSize) const;

    MCNAPI bool $encryptToBuffer(::gsl::span<char const> input, ::gsl::span<char> output, uint64& bytesWritten);

    MCNAPI uint64 $getDecryptionBufferSize(uint64 inputSize) const;

    MCNAPI bool $decryptToBuffer(::gsl::span<char const> input, ::gsl::span<char> output, uint64& bytesWritten);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Crypto::Symmetric
