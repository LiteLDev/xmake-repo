#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/IPositionalRandomFactory.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IRandom;
#if defined(LL_PLAT_A) // @header-generator platform
class XoroshiroRandom;
#else // @header-generator platform
#endif // @header-generator platform
namespace Crypto::Hash { class md5; }
// clang-format on

class XoroshiroPositionalRandomFactory : public ::IPositionalRandomFactory {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong> mSeedLo;
    ::ll::TypedStorage<8, 8, ulong> mSeedHi;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64> mSeedLo;
    ::ll::TypedStorage<8, 8, uint64> mSeedHi;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    XoroshiroPositionalRandomFactory& operator=(XoroshiroPositionalRandomFactory const&);
    XoroshiroPositionalRandomFactory(XoroshiroPositionalRandomFactory const&);
    XoroshiroPositionalRandomFactory();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~XoroshiroPositionalRandomFactory();
#else // @header-generator platform
    virtual ::std::unique_ptr<::IRandom> forBlockPos(::BlockPos const& blockPos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<IRandom> forBlockPos(::BlockPos const&) const;

    virtual std::unique_ptr<IRandom> forString(std::string const&) const;
#else // @header-generator platform
    virtual ::std::unique_ptr<::IRandom> forString(::std::string const& s) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Crypto::Hash::md5& mThreadLocalDigest();
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<IRandom> $forBlockPos(::BlockPos const&) const;
#else // @header-generator platform
    MCNAPI ::std::unique_ptr<::IRandom> $forBlockPos(::BlockPos const& blockPos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<IRandom> $forString(std::string const&) const;
#else // @header-generator platform
    MCNAPI ::std::unique_ptr<::IRandom> $forString(::std::string const& s) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
