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
class Level;
class Vec3;
struct LevelWeatherChangedEvent;
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
    virtual ~Weather();

    virtual void levelEvent(::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Weather(::Dimension&, ::IRandom&);

    MCNAPI int calcSnowBlockDepth(::BlockSource&, ::BlockPos const&, int) const;

    MCNAPI bool canPlaceTopSnow(::BlockSource&, ::BlockPos const&, bool, bool, int*) const;

    MCNAPI float getFogLevel() const;

    MCNAPI float getLightningLevel(float) const;

    MCNAPI float getRainLevel(float) const;

    MCNAPI int getSkyFlashTime() const;

    MCNAPI bool isLightning() const;

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
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $levelEvent(::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
