#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/IRandom.h"
#include "mc/util/SimpleRandom.h"
#include "mc/util/random/XoroshiroRandom.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ChunkPos;
class IPositionalRandomFactory;
struct Seed128Bit;
// clang-format on

namespace br::worldgen {

struct WorldGenRandom : public ::IRandom {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, std::variant<SimpleRandom, XoroshiroRandom>> mSource;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldGenRandom();

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
    MCNAPI WorldGenRandom();

    MCNAPI ::br::worldgen::WorldGenRandom forkPositional(::BlockPos);

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

} // namespace br::worldgen
