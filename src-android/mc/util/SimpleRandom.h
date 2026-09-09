#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/IRandom.h"
#include "mc/util/random/MarsagliaPolarGaussian.h"

// auto generated forward declare list
// clang-format off
class IPositionalRandomFactory;
class SimplePositionalRandomFactory;
struct Seed128Bit;
// clang-format on

class SimpleRandom : public ::IRandom {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, long>                      mSeed;
    ::ll::TypedStorage<8, 16, ::MarsagliaPolarGaussian> mGaussianSource;
    // NOLINTEND

public:
    // prevent constructor by default
    SimpleRandom& operator=(SimpleRandom const&);
    SimpleRandom(SimpleRandom const&);
    SimpleRandom();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SimpleRandom();

    virtual int nextInt(int);

    virtual int nextInt();

    virtual long nextLong();

    virtual bool nextBoolean();

    virtual float nextFloat();

    virtual double nextDouble();

    virtual double nextGaussianDouble();

    virtual void consumeCount(uint);

    virtual std::unique_ptr<IRandom> fork();

    virtual std::unique_ptr<IPositionalRandomFactory> forkPositional();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void setSeed(long);

    MCNAPI void setSeed(::Seed128Bit);
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

    MCNAPI std::unique_ptr<IPositionalRandomFactory> $forkPositional();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
