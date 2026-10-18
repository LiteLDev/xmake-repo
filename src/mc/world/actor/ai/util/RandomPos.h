#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/util/SolidityCheckType.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI static ::std::optional<::Vec3> generateRandomPos(
        ::IRandom&          random,
        ::Mob&              mob,
        int                 xzDist,
        int                 yDist,
        int                 yOffset,
        ::Vec3 const*       dir,
        bool                canFly,
        bool                canSwim,
        ::IntRange const&   hoverHeight,
        int                 tries,
        ::SolidityCheckType blockTest
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<Vec3>
    generateRandomSpawnPos(::BlockSource&, ::Random&, ::Vec3 const&, int, int, int, ::Vec3*);
#else // @header-generator platform
    MCAPI static ::std::optional<::Vec3> generateRandomSpawnPos(
        ::BlockSource& region,
        ::Random&      random,
        ::Vec3 const&  inPos,
        int            numAttempts,
        int            xzDist,
        int            yDist,
        ::Vec3*        dir
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<Vec3> getPos(::Mob&, int, int, int, ::SolidityCheckType);
#else // @header-generator platform
    MCAPI static ::std::optional<::Vec3>
    getPos(::Mob& mob, int xzDist, int yDist, int tries, ::SolidityCheckType blockTest);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<Vec3> getPosAvoid(::Mob&, int, int, ::Vec3 const&, ::SolidityCheckType, int);
#else // @header-generator platform
    MCAPI static ::std::optional<::Vec3>
    getPosAvoid(::Mob& mob, int xzDist, int yDist, ::Vec3 const& avoidPos, ::SolidityCheckType blockTest, int tries);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<Vec3>
    getPosInDirection(::Mob&, int, int, int, bool, bool, ::Vec3*, ::IntRange const&, int, ::SolidityCheckType);
#else // @header-generator platform
    MCAPI static ::std::optional<::Vec3> getPosInDirection(
        ::Mob&              mob,
        int                 xzDist,
        int                 yDist,
        int                 yOffset,
        bool                canFly,
        bool                canSwim,
        ::Vec3*             direction,
        ::IntRange const&   hoverHeight,
        int                 tries,
        ::SolidityCheckType blockTest
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<Vec3> getPosTowards(::Mob&, int, int, ::Vec3 const&);

    MCNAPI static std::optional<Vec3> getPosTowards(::Random&, ::Mob&, int, int, ::Vec3 const&);

    MCNAPI static std::optional<Vec3> getSpawnPos(::BlockSource&, ::Random&, ::Vec3 const&, int, int, int);
#else // @header-generator platform
    MCAPI static ::std::optional<::Vec3> getPosTowards(::Mob& mob, int xzDist, int yDist, ::Vec3 const& towardsPos);
#endif // @header-generator platform
    // NOLINTEND
};
