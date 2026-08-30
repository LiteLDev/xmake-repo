#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/hash/HashType.h"
#include "mc/deps/crypto/hash/IHash.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

namespace Crypto::Hash {

class Hash : public ::Crypto::Hash::IHash {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Crypto::Hash::HashType>             mHashType;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Crypto::Hash::IHash>> mHash;
    // NOLINTEND

public:
    // prevent constructor by default
    Hash();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Hash();

    virtual void reset();

    virtual void update(void const*, uint);

    virtual void final(uchar*);

    virtual ulong resultSize() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::string final();

    MCNAPI ::mce::UUID getUUID();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $reset();

    MCNAPI void $update(void const*, uint);

    MCNAPI void $final(uchar*);

    MCNAPI ulong $resultSize() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Crypto::Hash
