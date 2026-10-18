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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mLevelData;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::LevelData> const> mLevelData;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    WeatherManagerProxy();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~WeatherManagerProxy();
#else // @header-generator platform
    virtual float getRainLevel() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getRainLevel() const;
#else // @header-generator platform
    virtual float getLightningLevel() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getLightningLevel() const;
#else // @header-generator platform
    virtual int getRainTime() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getRainTime() const;
#else // @header-generator platform
    virtual int getLightningTime() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getLightningTime() const;
#else // @header-generator platform
    virtual void setRainLevel(float rainLevel) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setRainLevel(float);
#else // @header-generator platform
    virtual void setLightningLevel(float lightningLevel) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setLightningLevel(float);
#else // @header-generator platform
    virtual void setRainTime(int rainTime) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual void setLightningTime(int lightningTime) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getRainLevel() const;
#else // @header-generator platform
    MCAPI float $getRainLevel() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getLightningLevel() const;
#else // @header-generator platform
    MCAPI float $getLightningLevel() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getRainTime() const;
#else // @header-generator platform
    MCAPI int $getRainTime() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getLightningTime() const;
#else // @header-generator platform
    MCAPI int $getLightningTime() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setRainLevel(float);
#else // @header-generator platform
    MCAPI void $setRainLevel(float rainLevel);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setLightningLevel(float);
#else // @header-generator platform
    MCAPI void $setLightningLevel(float lightningLevel);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setRainTime(int);
#else // @header-generator platform
    MCAPI void $setRainTime(int rainTime);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setLightningTime(int);
#else // @header-generator platform
    MCAPI void $setLightningTime(int lightningTime);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
