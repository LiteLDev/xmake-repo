#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/actor/ai/village/POIType.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class AABB;
class BlockSource;
#if defined(LL_PLAT_A) // @header-generator platform
class CompoundTag;
#else // @header-generator platform
#endif // @header-generator platform
class Random;
class Village;
// clang-format on

class POIInstance {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString> mName;
    ::ll::TypedStorage<8, 40, ::HashedString> mInitEvent;
    ::ll::TypedStorage<8, 40, ::HashedString> mEndEvent;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString> mName;
    ::ll::TypedStorage<8, 48, ::HashedString> mInitEvent;
    ::ll::TypedStorage<8, 48, ::HashedString> mEndEvent;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Village*>      mVillage;
    ::ll::TypedStorage<4, 12, ::BlockPos>     mPosition;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong>           mOwnerCount;
    ::ll::TypedStorage<8, 8, ulong>           mOwnerCapacity;
    ::ll::TypedStorage<8, 8, ulong>           mWeight;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64>          mOwnerCount;
    ::ll::TypedStorage<8, 8, uint64>          mOwnerCapacity;
    ::ll::TypedStorage<8, 8, uint64>          mWeight;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, float>           mRadius;
    ::ll::TypedStorage<4, 4, ::POIType>       mType;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString> mSoundEvent;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString> mSoundEvent;
#endif // @header-generator platform
    ::ll::TypedStorage<2, 2, short>           mArrivalFailuresCount;
    ::ll::TypedStorage<1, 1, bool>            mUseBoundingBox;
    // NOLINTEND

public:
    // prevent constructor by default
    POIInstance();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI POIInstance(
        ::BlockPos const&,
        bool,
        std::string,
        ::POIType,
        float,
        ulong,
        ulong,
        std::string,
        std::string,
        std::string
#else // @header-generator platform
    MCAPI POIInstance(
        ::BlockPos const& pos,
        bool              useBoundingBox,
        ::std::string     name,
        ::POIType         type,
        float             radius,
        uint64            maxCapacity,
        uint64            weight,
        ::std::string     soundEvent,
        ::std::string     initEvent,
        ::std::string     endEvent
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockPos const& getPosition() const;
#else // @header-generator platform
    MCAPI ::AABB getSecondBlockFullAABB(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getRadius() const;

    MCNAPI ::AABB getSecondBlockFullAABB(::BlockSource&);

    MCNAPI ::HashedString const& getSoundEvent() const;

    MCNAPI void incrementArrivalFailureCount();

    MCNAPI void resetArrivalFailureCount();

    MCNAPI void save(::CompoundTag&) const;

    MCNAPI void trySpawnParticles(::BlockSource&, ::Random&, int) const;

    MCNAPI bool useBoundingBox() const;
#else // @header-generator platform
    MCAPI void trySpawnParticles(::BlockSource& region, ::Random& random, int particleType) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void*
    $ctor(::BlockPos const&, bool, std::string, ::POIType, float, ulong, ulong, std::string, std::string, std::string);
#else // @header-generator platform
    MCAPI void* $ctor(
        ::BlockPos const& pos,
        bool              useBoundingBox,
        ::std::string     name,
        ::POIType         type,
        float             radius,
        uint64            maxCapacity,
        uint64            weight,
        ::std::string     soundEvent,
        ::std::string     initEvent,
        ::std::string     endEvent
    );
#endif // @header-generator platform
    // NOLINTEND
};
