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
    virtual ~IRandom();

    virtual int nextInt(int) = 0;

    virtual int nextInt() = 0;

    virtual long nextLong() = 0;

    virtual bool nextBoolean() = 0;

    virtual float nextFloat() = 0;

    virtual double nextDouble() = 0;

    virtual double nextGaussianDouble() = 0;

    virtual void consumeCount(uint) = 0;

    virtual std::unique_ptr<IRandom> fork() = 0;

    virtual std::unique_ptr<IPositionalRandomFactory> forkPositional();

    virtual bool chance(int, int);

    virtual bool chanceOneIn(int);

    virtual bool chanceAllButOneIn(int);

    virtual bool chanceFloatLessThan(float);

    virtual bool chanceFloatLessOrEqual(float);

    virtual bool chanceFloatGreaterThan(float);

    virtual bool chanceFloatGreaterOrEqual(float);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& ChanceFloatGreaterThan_MinExcessiveImprobability();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<IPositionalRandomFactory> $forkPositional();

    MCNAPI bool $chance(int, int);

    MCNAPI bool $chanceOneIn(int);

    MCNAPI bool $chanceAllButOneIn(int);

    MCNAPI bool $chanceFloatLessThan(float);

    MCNAPI bool $chanceFloatLessOrEqual(float);

    MCNAPI bool $chanceFloatGreaterThan(float);

    MCNAPI bool $chanceFloatGreaterOrEqual(float);
    // NOLINTEND
};
