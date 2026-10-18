#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/application/common/utility/ThreadOwnerBehavior.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/math/IRandom.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/core/math/Random.h"
#endif // @header-generator platform
#include "mc/util/ThreadOwner.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Core { class Random; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class Random : public ::IRandom {
public:
    // Random inner types define
    using result_type = uint;

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 2536> mRandom;
#else // @header-generator platform
    ::ll::TypedStorage<8, 2536, ::Bedrock::Application::ThreadOwner<::Core::Random, 0>> mRandom;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~Random();
#else // @header-generator platform
    virtual ~Random() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int nextInt(int);
#else // @header-generator platform
    virtual bool nextBoolean() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int nextInt();
#else // @header-generator platform
    virtual float nextFloat() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual long nextLong();
#else // @header-generator platform
    virtual double nextDouble() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool nextBoolean();
#else // @header-generator platform
    virtual int nextInt() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float nextFloat();
#else // @header-generator platform
    virtual int nextInt(int n) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual double nextDouble();
#else // @header-generator platform
    virtual int64 nextLong() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual double nextGaussianDouble();
#else // @header-generator platform
    virtual double nextGaussianDouble() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void consumeCount(uint);
#else // @header-generator platform
    virtual void consumeCount(uint count) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<IRandom> fork();
#else // @header-generator platform
    virtual ::std::unique_ptr<::IRandom> fork() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Random();
#else // @header-generator platform
    MCAPI Random();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Random(uint, bool);
#else // @header-generator platform
    MCAPI Random(uint seed, bool onlyUsedDeterministically);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float nextGaussianFloat();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI float nextGaussianFloat();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Random& mThreadLocalRandom();
#else // @header-generator platform
    MCAPI static ::Random& mThreadLocalRandom();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void* $ctor();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(uint, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(uint seed, bool onlyUsedDeterministically);
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
    MCAPI double $nextGaussianDouble();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $consumeCount(uint);
#else // @header-generator platform
    MCAPI void $consumeCount(uint count);
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
