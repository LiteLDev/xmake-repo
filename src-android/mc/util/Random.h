#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/common/utility/ThreadOwnerBehavior.h"
#include "mc/deps/core/math/IRandom.h"
#include "mc/util/ThreadOwner.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Random; }
// clang-format on

class Random : public ::IRandom {
public:
    // Random inner types define
    using result_type = uint;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 2536> mRandom;
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
    MCNAPI Random();

    MCNAPI Random(uint, bool);

    MCNAPI float nextGaussianFloat();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Random& mThreadLocalRandom();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(uint, bool);
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
