#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/IRandom.h"

namespace Core {

class Random : public ::IRandom {
public:
    // Random inner types define
    using result_type = uint;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>         mSeed;
    ::ll::TypedStorage<4, 2496, uint[624]> _mt;
    ::ll::TypedStorage<4, 4, int>          _mti;
    ::ll::TypedStorage<4, 4, int>          mInitedIdx;
    ::ll::TypedStorage<4, 4, float>        mNextNextGaussian;
    ::ll::TypedStorage<8, 8, double>       mNextNextGaussianDouble;
    ::ll::TypedStorage<4, 4, uint>         mFakeUniformRandomInt;
    ::ll::TypedStorage<1, 1, bool>         mHaveNextNextGaussian;
    ::ll::TypedStorage<1, 1, bool>         mHaveNextNextGaussianDouble;
    ::ll::TypedStorage<1, 1, bool>         mTest_OnlyUsedDeterministically;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Random();

    virtual int nextInt(int);

    virtual int nextInt();

    virtual long nextLong();

    virtual bool nextBoolean();

    virtual float nextFloat();

    virtual double nextDouble();

    virtual double nextGaussianDouble();

    virtual void consumeCount(uint);

    virtual std::unique_ptr<IRandom> fork();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI uint _genRandInt32();

    MCNAPI uint _genUniformRandomInt();

    MCNAPI float nextGaussian();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::random_device& mRandomDevice();

    MCNAPI static ::Core::Random& mThreadLocalRandom();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $nextInt(int);

    MCNAPI int $nextInt();

    MCNAPI long $nextLong();

    MCNAPI bool $nextBoolean();

    MCNAPI float $nextFloat();

    MCNAPI double $nextDouble();

    MCNAPI double $nextGaussianDouble();

    MCNAPI void $consumeCount(uint);

    MCNAPI std::unique_ptr<IRandom> $fork();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core
