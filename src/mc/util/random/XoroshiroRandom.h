#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/IRandom.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/util/random/MarsagliaPolarGaussian.h"
#include "mc/util/random/Xoroshiro128PlusPlus.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class IPositionalRandomFactory;
#if defined(LL_PLAT_A) // @header-generator platform
class XoroshiroPositionalRandomFactory;
struct Seed128Bit;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class XoroshiroRandom : public ::IRandom {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // XoroshiroRandom inner types define
    using Seed = std::pair<ulong, ulong>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Xoroshiro128PlusPlus>   mRandom;
    ::ll::TypedStorage<8, 16, ::MarsagliaPolarGaussian> mGaussianSource;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnka94e01;
    ::ll::UntypedStorage<8, 16> mUnk7653d1;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    XoroshiroRandom& operator=(XoroshiroRandom const&);
    XoroshiroRandom(XoroshiroRandom const&);
#endif // @header-generator platform
    XoroshiroRandom();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual int nextInt(int);
#else // @header-generator platform
    virtual int nextInt() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int nextInt();
#else // @header-generator platform
    virtual int nextInt(int bound) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual long nextLong();
#else // @header-generator platform
    virtual int64 nextLong() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool nextBoolean();
#else // @header-generator platform
    virtual bool nextBoolean() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float nextFloat();
#else // @header-generator platform
    virtual float nextFloat() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual double nextDouble();
#else // @header-generator platform
    virtual double nextDouble() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual double nextGaussianDouble();
#else // @header-generator platform
    virtual double nextGaussianDouble() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void consumeCount(uint);
#else // @header-generator platform
    virtual ::std::unique_ptr<::IRandom> fork() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<IRandom> fork();
#else // @header-generator platform
    virtual ::std::unique_ptr<::IPositionalRandomFactory> forkPositional() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<IPositionalRandomFactory> forkPositional();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void setSeed(long);

    MCNAPI void setSeed(::Seed128Bit);
#else // @header-generator platform
    virtual void consumeCount(uint rounds) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $nextInt(int);

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI int $nextInt();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI long $nextLong();
#else // @header-generator platform
    MCNAPI int $nextInt(int bound);

    MCNAPI int64 $nextLong();
#endif // @header-generator platform

    MCNAPI bool $nextBoolean();

    MCNAPI float $nextFloat();

    MCNAPI double $nextDouble();

    MCNAPI double $nextGaussianDouble();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $consumeCount(uint);
#else // @header-generator platform
    MCNAPI ::std::unique_ptr<::IRandom> $fork();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<IRandom> $fork();
#else // @header-generator platform
    MCNAPI ::std::unique_ptr<::IPositionalRandomFactory> $forkPositional();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<IPositionalRandomFactory> $forkPositional();
#else // @header-generator platform
    MCNAPI void $consumeCount(uint rounds);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
