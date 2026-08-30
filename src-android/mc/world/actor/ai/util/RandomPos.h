#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/util/SolidityCheckType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class IRandom;
class Mob;
class Random;
class Vec3;
struct IntRange;
// clang-format on

class RandomPos {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::optional<Vec3> generateRandomPos(
        ::IRandom&,
        ::Mob&,
        int,
        int,
        int,
        ::Vec3 const*,
        bool,
        bool,
        ::IntRange const&,
        int,
        ::SolidityCheckType
    );

    MCNAPI static std::optional<Vec3>
    generateRandomSpawnPos(::BlockSource&, ::Random&, ::Vec3 const&, int, int, int, ::Vec3*);

    MCNAPI static std::optional<Vec3> getPos(::Mob&, int, int, int, ::SolidityCheckType);

    MCNAPI static std::optional<Vec3> getPosAvoid(::Mob&, int, int, ::Vec3 const&, ::SolidityCheckType, int);

    MCNAPI static std::optional<Vec3>
    getPosInDirection(::Mob&, int, int, int, bool, bool, ::Vec3*, ::IntRange const&, int, ::SolidityCheckType);

    MCNAPI static std::optional<Vec3> getPosTowards(::Mob&, int, int, ::Vec3 const&);

    MCNAPI static std::optional<Vec3> getPosTowards(::Random&, ::Mob&, int, int, ::Vec3 const&);

    MCNAPI static std::optional<Vec3> getSpawnPos(::BlockSource&, ::Random&, ::Vec3 const&, int, int, int);
    // NOLINTEND
};
