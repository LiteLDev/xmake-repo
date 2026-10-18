#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/IPositionalRandomFactory.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IRandom;
#if defined(LL_PLAT_A) // @header-generator platform
class SimpleRandom;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class SimplePositionalRandomFactory : public ::IPositionalRandomFactory {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, long const> mSeed;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk264730;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    SimplePositionalRandomFactory& operator=(SimplePositionalRandomFactory const&);
    SimplePositionalRandomFactory(SimplePositionalRandomFactory const&);
    SimplePositionalRandomFactory();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SimplePositionalRandomFactory();
#else // @header-generator platform
    virtual ::std::unique_ptr<::IRandom> forBlockPos(::BlockPos const& blockPos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<IRandom> forBlockPos(::BlockPos const&) const;

    virtual std::unique_ptr<IRandom> forString(std::string const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SimplePositionalRandomFactory(long);

    MCNAPI ::SimpleRandom forBlockPosImpl(::BlockPos const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(long);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::std::unique_ptr<::IRandom> forString(::std::string const& string) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
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
    MCNAPI ::std::unique_ptr<::IRandom> $forString(::std::string const& string) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
