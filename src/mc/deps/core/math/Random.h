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
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~Random();
#else // @header-generator platform
    virtual bool nextBoolean() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int nextInt(int);
#else // @header-generator platform
    virtual float nextFloat() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int nextInt();
#else // @header-generator platform
    virtual double nextDouble() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual long nextLong();
#else // @header-generator platform
    virtual int nextInt() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool nextBoolean();
#else // @header-generator platform
    virtual int nextInt(int n) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float nextFloat();
#else // @header-generator platform
    virtual int64 nextLong() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual double nextDouble();
#else // @header-generator platform
    virtual void consumeCount(uint count) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual double nextGaussianDouble();
#else // @header-generator platform
    virtual double nextGaussianDouble() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void consumeCount(uint);

    virtual std::unique_ptr<IRandom> fork();
#else // @header-generator platform
    virtual ::std::unique_ptr<::IRandom> fork() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint _genRandInt32();

    MCNAPI uint _genUniformRandomInt();

    MCNAPI float nextGaussian();
#else // @header-generator platform
    MCAPI uint _genRandInt32();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::random_device& mRandomDevice();

    MCNAPI static ::Core::Random& mThreadLocalRandom();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::Core::Random& mThreadLocalRandom();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $nextInt(int);
#else // @header-generator platform
    MCAPI bool $nextBoolean();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $nextInt();
#else // @header-generator platform
    MCAPI float $nextFloat();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI long $nextLong();
#else // @header-generator platform
    MCAPI double $nextDouble();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $nextBoolean();
#else // @header-generator platform
    MCAPI int $nextInt();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $nextFloat();
#else // @header-generator platform
    MCAPI int $nextInt(int n);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI double $nextDouble();
#else // @header-generator platform
    MCAPI int64 $nextLong();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI double $nextGaussianDouble();
#else // @header-generator platform
    MCAPI void $consumeCount(uint count);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $consumeCount(uint);
#else // @header-generator platform
    MCAPI double $nextGaussianDouble();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<IRandom> $fork();
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::IRandom> $fork();


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core
