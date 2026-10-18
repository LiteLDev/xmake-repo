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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<Crypto::Symmetric::ISystemInterface>> mInterface;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk4a8b4c;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    Symmetric& operator=(Symmetric const&);
    Symmetric(Symmetric const&);
#endif // @header-generator platform
    Symmetric();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~Symmetric();
#else // @header-generator platform
    virtual ~Symmetric() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void init(std::string const&, std::string const&);
#else // @header-generator platform
    virtual void init(::std::string const& key, ::std::string const& IV) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void encrypt(std::string const&, std::string&);
#else // @header-generator platform
    virtual void encrypt(::std::string const& plaintext, ::std::string& output) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void decrypt(std::string const&, std::string&);
#else // @header-generator platform
    virtual void decrypt(::std::string const& ciphertext, ::std::string& output) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getKeySize() const;
#else // @header-generator platform
    virtual uint64 getKeySize() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getBlockSize() const;
#else // @header-generator platform
    virtual uint64 getBlockSize() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getEncryptionBufferSize(ulong) const;
#else // @header-generator platform
    virtual uint64 getEncryptionBufferSize(uint64 inputSize) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool encryptToBuffer(::gsl::span<const char>, ::gsl::span<char>, ulong&);
#else // @header-generator platform
    virtual bool
    encryptToBuffer(::gsl::span<char const> input, ::gsl::span<char> output, uint64& bytesWritten) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getDecryptionBufferSize(ulong) const;
#else // @header-generator platform
    virtual uint64 getDecryptionBufferSize(uint64 inputSize) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool decryptToBuffer(::gsl::span<const char>, ::gsl::span<char>, ulong&);
#else // @header-generator platform
    virtual bool
    decryptToBuffer(::gsl::span<char const> input, ::gsl::span<char> output, uint64& bytesWritten) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Symmetric(::Crypto::Symmetric::System, ::Crypto::Symmetric::OperationMode);
#else // @header-generator platform
    MCNAPI Symmetric(::Crypto::Symmetric::System system, ::Crypto::Symmetric::OperationMode mode);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Crypto::Symmetric::System, ::Crypto::Symmetric::OperationMode);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(::Crypto::Symmetric::System system, ::Crypto::Symmetric::OperationMode mode);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $init(std::string const&, std::string const&);
#else // @header-generator platform
    MCNAPI void $init(::std::string const& key, ::std::string const& IV);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $encrypt(std::string const&, std::string&);
#else // @header-generator platform
    MCNAPI void $encrypt(::std::string const& plaintext, ::std::string& output);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $decrypt(std::string const&, std::string&);
#else // @header-generator platform
    MCNAPI void $decrypt(::std::string const& ciphertext, ::std::string& output);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $getKeySize() const;
#else // @header-generator platform
    MCNAPI uint64 $getKeySize() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $getBlockSize() const;
#else // @header-generator platform
    MCNAPI uint64 $getBlockSize() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $getEncryptionBufferSize(ulong) const;
#else // @header-generator platform
    MCNAPI uint64 $getEncryptionBufferSize(uint64 inputSize) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $encryptToBuffer(::gsl::span<const char>, ::gsl::span<char>, ulong&);
#else // @header-generator platform
    MCNAPI bool $encryptToBuffer(::gsl::span<char const> input, ::gsl::span<char> output, uint64& bytesWritten);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $getDecryptionBufferSize(ulong) const;
#else // @header-generator platform
    MCNAPI uint64 $getDecryptionBufferSize(uint64 inputSize) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $decryptToBuffer(::gsl::span<const char>, ::gsl::span<char>, ulong&);
#else // @header-generator platform
    MCNAPI bool $decryptToBuffer(::gsl::span<char const> input, ::gsl::span<char> output, uint64& bytesWritten);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Crypto::Symmetric
