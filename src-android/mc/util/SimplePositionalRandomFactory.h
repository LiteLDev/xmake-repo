#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/IPositionalRandomFactory.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IRandom;
class SimpleRandom;
// clang-format on

class SimplePositionalRandomFactory : public ::IPositionalRandomFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, long const> mSeed;
    // NOLINTEND

public:
    // prevent constructor by default
    SimplePositionalRandomFactory& operator=(SimplePositionalRandomFactory const&);
    SimplePositionalRandomFactory(SimplePositionalRandomFactory const&);
    SimplePositionalRandomFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SimplePositionalRandomFactory();

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
