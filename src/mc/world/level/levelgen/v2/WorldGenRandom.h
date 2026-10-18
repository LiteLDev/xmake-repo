#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/IRandom.h"
#include "mc/util/SimpleRandom.h"
#include "mc/util/random/XoroshiroRandom.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
#if defined(LL_PLAT_A) // @header-generator platform
class ChunkPos;
#else // @header-generator platform
#endif // @header-generator platform
class IPositionalRandomFactory;
#if defined(LL_PLAT_A) // @header-generator platform
struct Seed128Bit;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace br::worldgen {

struct WorldGenRandom : public ::IRandom {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 48, std::variant<SimpleRandom, XoroshiroRandom>> mSource;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::std::variant<::SimpleRandom, ::XoroshiroRandom>> mSource;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~WorldGenRandom();
#else // @header-generator platform
    virtual int nextInt() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int nextInt(int);
#else // @header-generator platform
    virtual int nextInt(int bound) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int nextInt();
#else // @header-generator platform
    virtual int64 nextLong() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual long nextLong();
#else // @header-generator platform
    virtual bool nextBoolean() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool nextBoolean();
#else // @header-generator platform
    virtual float nextFloat() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float nextFloat();
#else // @header-generator platform
    virtual double nextDouble() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual double nextDouble();
#else // @header-generator platform
    virtual double nextGaussianDouble() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual double nextGaussianDouble();
#else // @header-generator platform
    virtual void consumeCount(uint count) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void consumeCount(uint);
#else // @header-generator platform
    virtual ::std::unique_ptr<::IRandom> fork() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<IRandom> fork();

    virtual std::unique_ptr<IPositionalRandomFactory> forkPositional();
#else // @header-generator platform
    virtual ::std::unique_ptr<::IPositionalRandomFactory> forkPositional() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI WorldGenRandom();
#else // @header-generator platform
    MCAPI ::br::worldgen::WorldGenRandom forkPositional(::BlockPos pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::br::worldgen::WorldGenRandom forkPositional(::BlockPos);
#else // @header-generator platform
    MCAPI ::br::worldgen::WorldGenRandom& setDecorationSeed(int64 seed, int chunkX, int chunkZ);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::br::worldgen::WorldGenRandom& operator=(::br::worldgen::WorldGenRandom const&);

    MCNAPI ::br::worldgen::WorldGenRandom& setDecorationSeed(long, int, int);

    MCNAPI ::br::worldgen::WorldGenRandom& setLargeFeatureSeed(long, int, int);

    MCNAPI ::br::worldgen::WorldGenRandom& setLargeFeatureWithSalt(long, int, int, int);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::br::worldgen::WorldGenRandom create(long);

    MCNAPI static ::br::worldgen::WorldGenRandom createDecoration(long, int, int);

    MCNAPI static ::br::worldgen::WorldGenRandom createSlimeChunk(int, int, long, long);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI ::br::worldgen::WorldGenRandom& setLargeFeatureSeed(int64 seed, int chunkX, int chunkZ);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $nextInt(int);
#else // @header-generator platform
    MCAPI int $nextInt();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $nextInt();
#else // @header-generator platform
    MCAPI int $nextInt(int bound);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI long $nextLong();
#else // @header-generator platform
    MCAPI int64 $nextLong();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $nextBoolean();
#else // @header-generator platform
    MCAPI bool $nextBoolean();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $nextFloat();
#else // @header-generator platform
    MCAPI float $nextFloat();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI double $nextDouble();
#else // @header-generator platform
    MCAPI double $nextDouble();
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

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<IPositionalRandomFactory> $forkPositional();
#else // @header-generator platform
    MCFOLD ::std::unique_ptr<::IPositionalRandomFactory> $forkPositional();


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::worldgen
