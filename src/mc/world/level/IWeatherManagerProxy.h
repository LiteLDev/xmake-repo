#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IWeatherManagerProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IWeatherManagerProxy() = default;

    virtual float getRainLevel() const = 0;

    virtual float getLightningLevel() const = 0;

    virtual int getRainTime() const = 0;

    virtual int getLightningTime() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setRainLevel(float) = 0;
#else // @header-generator platform
    virtual void setRainLevel(float rainLevel) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setLightningLevel(float) = 0;
#else // @header-generator platform
    virtual void setLightningLevel(float lightningLevel) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setRainTime(int) = 0;
#else // @header-generator platform
    virtual void setRainTime(int rainTime) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setLightningTime(int) = 0;
#else // @header-generator platform
    virtual void setLightningTime(int lightningTime) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
