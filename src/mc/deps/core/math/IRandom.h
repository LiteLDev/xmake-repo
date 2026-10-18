#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IPositionalRandomFactory;
// clang-format on

class IRandom {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IRandom();

    virtual int nextInt(int) = 0;
#else // @header-generator platform
    virtual ~IRandom() = default;
#endif // @header-generator platform

    virtual int nextInt() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual long nextLong() = 0;
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual int nextInt(int bound) = 0;
#else // LL_PLAT_C
    virtual int nextInt(int n) = 0;
#endif

    virtual int64 nextLong() = 0;
#endif // @header-generator platform

    virtual bool nextBoolean() = 0;

    virtual float nextFloat() = 0;

    virtual double nextDouble() = 0;

    virtual double nextGaussianDouble() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void consumeCount(uint) = 0;
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void consumeCount(uint rounds) = 0;
#else // LL_PLAT_C
    virtual void consumeCount(uint count) = 0;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<IRandom> fork() = 0;
#else // @header-generator platform
    virtual ::std::unique_ptr<::IRandom> fork() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<IPositionalRandomFactory> forkPositional();
#else // @header-generator platform
    virtual ::std::unique_ptr<::IPositionalRandomFactory> forkPositional();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool chance(int, int);
#else // @header-generator platform
    virtual bool chance(int likeliness, int possibilities);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool chanceOneIn(int);
#else // @header-generator platform
    virtual bool chanceOneIn(int possibilities);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool chanceAllButOneIn(int);
#else // @header-generator platform
    virtual bool chanceAllButOneIn(int possibilities);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool chanceFloatLessThan(float);
#else // @header-generator platform
    virtual bool chanceFloatLessThan(float probability);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool chanceFloatLessOrEqual(float);
#else // @header-generator platform
    virtual bool chanceFloatLessOrEqual(float probability);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool chanceFloatGreaterThan(float);
#else // @header-generator platform
    virtual bool chanceFloatGreaterThan(float improbability);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool chanceFloatGreaterOrEqual(float);
#else // @header-generator platform
    virtual bool chanceFloatGreaterOrEqual(float improbability);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static float const& ChanceFloatGreaterThan_MinExcessiveImprobability();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static float const& ChanceFloatGreaterThan_MinExcessiveImprobability();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<IPositionalRandomFactory> $forkPositional();
#else // @header-generator platform
    MCFOLD ::std::unique_ptr<::IPositionalRandomFactory> $forkPositional();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $chance(int, int);
#else // @header-generator platform
    MCAPI bool $chance(int likeliness, int possibilities);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $chanceOneIn(int);
#else // @header-generator platform
    MCAPI bool $chanceOneIn(int possibilities);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $chanceAllButOneIn(int);
#else // @header-generator platform
    MCAPI bool $chanceAllButOneIn(int possibilities);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $chanceFloatLessThan(float);
#else // @header-generator platform
    MCAPI bool $chanceFloatLessThan(float probability);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $chanceFloatLessOrEqual(float);
#else // @header-generator platform
    MCAPI bool $chanceFloatLessOrEqual(float probability);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $chanceFloatGreaterThan(float);
#else // @header-generator platform
    MCAPI bool $chanceFloatGreaterThan(float improbability);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $chanceFloatGreaterOrEqual(float);
#else // @header-generator platform
    MCAPI bool $chanceFloatGreaterOrEqual(float improbability);


#endif // @header-generator platform
    // NOLINTEND
};
