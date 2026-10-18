#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/entity/components/CameraShakeEvent.h"
#else // @header-generator platform
#endif // @header-generator platform

class CameraShakeTypeQueue {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<CameraShakeEvent>> mShakeEvents;
    ::ll::TypedStorage<4, 4, float>                          mShakeIntensity;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk8ec96c;
    ::ll::UntypedStorage<4, 4>  mUnk383b16;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    CameraShakeTypeQueue& operator=(CameraShakeTypeQueue const&);
    CameraShakeTypeQueue(CameraShakeTypeQueue const&);
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI float getCombinedEventIntensity() const;

    MCNAPI float getShakeIntensity() const;

    MCNAPI bool queueShakeEvent(float, float);

    MCNAPI void setShakeIntensity(float);
    // NOLINTEND
#else // @header-generator platform
    CameraShakeTypeQueue();
#endif // @header-generator platform
};
