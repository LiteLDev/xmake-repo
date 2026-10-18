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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::Crypto::Hash::HashType>             mHashType;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Crypto::Hash::IHash>> mHash;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::Crypto::Hash::HashType>                 mHashType;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Crypto::Hash::IHash>> mHash;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    Hash();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~Hash();
#else // @header-generator platform
    virtual ~Hash() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void reset();
#else // @header-generator platform
    virtual void reset() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void update(void const*, uint);
#else // @header-generator platform
    virtual void update(void const* data, uint size) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void final(uchar*);
#else // @header-generator platform
    virtual void final(uchar* result) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong resultSize() const;
#else // @header-generator platform
    virtual uint64 resultSize() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string final();

    MCNAPI ::mce::UUID getUUID();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI ::mce::UUID getUUID();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $reset();
#else // @header-generator platform
    MCAPI void $reset();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $update(void const*, uint);
#else // @header-generator platform
    MCAPI void $update(void const* data, uint size);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $final(uchar*);
#else // @header-generator platform
    MCAPI void $final(uchar* result);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $resultSize() const;
#else // @header-generator platform
    MCAPI uint64 $resultSize() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Crypto::Hash
