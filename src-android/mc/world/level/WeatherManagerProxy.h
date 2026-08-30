#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/IWeatherManagerProxy.h"

// auto generated forward declare list
// clang-format off
class LevelData;
// clang-format on

class WeatherManagerProxy : public ::IWeatherManagerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mLevelData;
    // NOLINTEND

public:
    // prevent constructor by default
    WeatherManagerProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WeatherManagerProxy();

    virtual float getRainLevel() const;

    virtual float getLightningLevel() const;

    virtual int getRainTime() const;

    virtual int getLightningTime() const;

    virtual void setRainLevel(float);

    virtual void setLightningLevel(float);

    virtual void setRainTime(int);

    virtual void setLightningTime(int);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit WeatherManagerProxy(::gsl::not_null<Bedrock::NonOwnerPointer<LevelData>>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<LevelData>>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI float $getRainLevel() const;

    MCNAPI float $getLightningLevel() const;

    MCNAPI int $getRainTime() const;

    MCNAPI int $getLightningTime() const;

    MCNAPI void $setRainLevel(float);

    MCNAPI void $setLightningLevel(float);

    MCNAPI void $setRainTime(int);

    MCNAPI void $setLightningTime(int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
