#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Symmetric {

class ISystemInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISystemInterface() = default;

    virtual void init(std::string const&, std::string const&) = 0;

    virtual void encrypt(std::string const&, std::string&) = 0;

    virtual void decrypt(std::string const&, std::string&) = 0;

    virtual ulong getKeySize() const = 0;

    virtual ulong getBlockSize() const = 0;

    virtual ulong getEncryptionBufferSize(ulong) const = 0;

    virtual bool encryptToBuffer(::gsl::span<const char>, ::gsl::span<char>, ulong&) = 0;

    virtual ulong getDecryptionBufferSize(ulong) const = 0;

    virtual bool decryptToBuffer(::gsl::span<const char>, ::gsl::span<char>, ulong&) = 0;
    // NOLINTEND
};

} // namespace Crypto::Symmetric
