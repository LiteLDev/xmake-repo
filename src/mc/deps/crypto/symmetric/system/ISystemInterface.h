#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Symmetric {

class ISystemInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISystemInterface() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void init(std::string const&, std::string const&) = 0;
#else // @header-generator platform
    virtual void init(::std::string const& key, ::std::string const& IV) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void encrypt(std::string const&, std::string&) = 0;
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void encrypt(::std::string const& plaintext, ::std::string& output) = 0;
#else // LL_PLAT_C
    virtual void encrypt(::std::string const& plaintext, ::std::string& out) = 0;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void decrypt(std::string const&, std::string&) = 0;
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void decrypt(::std::string const& ciphertext, ::std::string& output) = 0;
#else // LL_PLAT_C
    virtual void decrypt(::std::string const& ciphertext, ::std::string& out) = 0;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getKeySize() const = 0;
#else // @header-generator platform
    virtual uint64 getKeySize() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getBlockSize() const = 0;
#else // @header-generator platform
    virtual uint64 getBlockSize() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getEncryptionBufferSize(ulong) const = 0;
#else // @header-generator platform
    virtual uint64 getEncryptionBufferSize(uint64 inputSize) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool encryptToBuffer(::gsl::span<const char>, ::gsl::span<char>, ulong&) = 0;
#else // @header-generator platform
    virtual bool encryptToBuffer(::gsl::span<char const> input, ::gsl::span<char> output, uint64& bytesWritten) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getDecryptionBufferSize(ulong) const = 0;
#else // @header-generator platform
    virtual uint64 getDecryptionBufferSize(uint64 inputSize) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool decryptToBuffer(::gsl::span<const char>, ::gsl::span<char>, ulong&) = 0;
#else // @header-generator platform
    virtual bool decryptToBuffer(::gsl::span<char const> input, ::gsl::span<char> output, uint64& bytesWritten) = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Crypto::Symmetric
