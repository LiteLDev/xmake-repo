#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/CameraShakeEvent.h"

class CameraShakeTypeQueue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<CameraShakeEvent>> mShakeEvents;
    ::ll::TypedStorage<4, 4, float>                          mShakeIntensity;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraShakeTypeQueue& operator=(CameraShakeTypeQueue const&);
    CameraShakeTypeQueue(CameraShakeTypeQueue const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI float getCombinedEventIntensity() const;

    MCNAPI float getShakeIntensity() const;

    MCNAPI bool queueShakeEvent(float, float);

    MCNAPI void setShakeIntensity(float);
    // NOLINTEND
};
