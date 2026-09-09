#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/IPositionalRandomFactory.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IRandom;
class XoroshiroRandom;
namespace Crypto::Hash { class md5; }
// clang-format on

class XoroshiroPositionalRandomFactory : public ::IPositionalRandomFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> mSeedLo;
    ::ll::TypedStorage<8, 8, ulong> mSeedHi;
    // NOLINTEND

public:
    // prevent constructor by default
    XoroshiroPositionalRandomFactory& operator=(XoroshiroPositionalRandomFactory const&);
    XoroshiroPositionalRandomFactory(XoroshiroPositionalRandomFactory const&);
    XoroshiroPositionalRandomFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~XoroshiroPositionalRandomFactory();

    virtual std::unique_ptr<IRandom> forBlockPos(::BlockPos const&) const;

    virtual std::unique_ptr<IRandom> forString(std::string const&) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Crypto::Hash::md5& mThreadLocalDigest();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<IRandom> $forBlockPos(::BlockPos const&) const;

    MCNAPI std::unique_ptr<IRandom> $forString(std::string const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
