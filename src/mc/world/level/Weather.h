#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelEvent.h"
#include "mc/world/level/LevelListener.h"
#include "mc/world/level/levelgen/synth/PerlinSimplexNoise.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Dimension;
class IRandom;
#if defined(LL_PLAT_A) // @header-generator platform
class Level;
#else // @header-generator platform
#endif // @header-generator platform
class Vec3;
#if defined(LL_PLAT_A) // @header-generator platform
struct LevelWeatherChangedEvent;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class Weather : public ::LevelListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::PerlinSimplexNoise> mNoise;
    ::ll::TypedStorage<4, 4, int>                   mTick;
    ::ll::TypedStorage<4, 4, float>                 mOldRainLevel;
    ::ll::TypedStorage<4, 4, float>                 mRainLevel;
    ::ll::TypedStorage<4, 4, float>                 mTargetRainLevel;
    ::ll::TypedStorage<4, 4, float>                 mOldLightningLevel;
    ::ll::TypedStorage<4, 4, float>                 mLightningLevel;
    ::ll::TypedStorage<4, 4, float>                 mTargetLightningLevel;
    ::ll::TypedStorage<4, 4, float>                 mFogLevel;
    ::ll::TypedStorage<4, 4, int>                   mSkyFlashTime;
    ::ll::TypedStorage<8, 8, ::Dimension&>          mDimension;
    ::ll::TypedStorage<8, 8, ::IRandom&>            mRandom;
    // NOLINTEND

public:
    // prevent constructor by default
    Weather& operator=(Weather const&);
    Weather(Weather const&);
    Weather();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~Weather();
#else // @header-generator platform
    virtual ~Weather() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void levelEvent(::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int);
#else // @header-generator platform
    virtual void levelEvent(::SharedTypes::Legacy::LevelEvent type, ::Vec3 const&, int data) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Weather(::Dimension&, ::IRandom&);
#else // @header-generator platform
    MCAPI int calcSnowBlockDepth(::BlockSource& region, ::BlockPos const& pos, int maxLayerDepth) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int calcSnowBlockDepth(::BlockSource&, ::BlockPos const&, int) const;
#else // @header-generator platform
    MCAPI bool canPlaceTopSnow(
        ::BlockSource&    region,
        ::BlockPos const& pos,
        bool              fromFallingSnow,
        bool              checkSnowDepthLevel,
        int*              newHeightAfterPlacement
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool canPlaceTopSnow(::BlockSource&, ::BlockPos const&, bool, bool, int*) const;
#else // @header-generator platform
    MCAPI bool isPrecipitatingAt(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getFogLevel() const;
#else // @header-generator platform
    MCAPI bool isRainingAt(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getLightningLevel(float) const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI bool isSnowingAt(::BlockSource& region, ::BlockPos const& pos) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getRainLevel(float) const;
#else // @header-generator platform
    MCAPI void serverTick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getSkyFlashTime() const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void stop();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isLightning() const;
#else // @header-generator platform
    MCAPI void tick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isPrecipitatingAt(::BlockSource&, ::BlockPos const&) const;

    MCNAPI bool isRaining() const;

    MCNAPI bool isRainingAt(::BlockSource&, ::BlockPos const&) const;

    MCNAPI bool isSnowingAt(::BlockSource&, ::BlockPos const&) const;

    MCNAPI void serverTick();

    MCNAPI void setFogLevel(float);

    MCNAPI void setSkyFlashTime(int);

    MCNAPI void setTargetLightningLevel(float);

    MCNAPI void setTargetRainLevel(float);

    MCNAPI void tick();

    MCNAPI bool tryToPlaceTopSnow(::BlockSource&, ::BlockPos const&, bool, bool);
#else // @header-generator platform
    MCAPI bool
    tryToPlaceTopSnow(::BlockSource& region, ::BlockPos const& pos, bool fromFallingSnow, bool fillLowerNeighborsFirst);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int calcLightningCycleTime(::IRandom&);

    MCNAPI static int calcRainCycleTime(::IRandom&);

    MCNAPI static int calcRainDuration(::IRandom&);

    MCNAPI static void rebuildTopSnowToDepth(::BlockSource&, ::BlockPos const&, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Dimension&, ::IRandom&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static void rebuildTopSnowToDepth(::BlockSource& region, ::BlockPos const& testPos, int desiredDepth);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $levelEvent(::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int);
#else // @header-generator platform
    MCAPI void $levelEvent(::SharedTypes::Legacy::LevelEvent type, ::Vec3 const&, int data);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
