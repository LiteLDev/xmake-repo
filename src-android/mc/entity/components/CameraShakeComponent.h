#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_camera/CameraShakeType.h"
#include "mc/entity/components/CameraShakeTypeQueue.h"

// auto generated forward declare list
// clang-format off
class Random;
class SimplexNoise;
class Vec3;
// clang-format on

class CameraShakeComponent {
public:
    // CameraShakeComponent inner types define
    using ShakeQueueArray = std::array<CameraShakeTypeQueue, 2>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<SimplexNoise>>        xAxisNoise;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SimplexNoise>>        yAxisNoise;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SimplexNoise>>        zAxisNoise;
    ::ll::TypedStorage<8, 8, double>                               mLastUpdatedTime;
    ::ll::TypedStorage<4, 4, float>                                mNoiseTime;
    ::ll::TypedStorage<4, 4, float>                                mDecayRate;
    ::ll::TypedStorage<8, 64, std::array<CameraShakeTypeQueue, 2>> mShakeTypeQueues;
    ::ll::TypedStorage<1, 1, bool>                                 mWasShaking;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraShakeComponent& operator=(CameraShakeComponent const&);
    CameraShakeComponent(CameraShakeComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::vector<CameraShakeType> getActiveShakeTypes() const;

    MCNAPI float getDecayRate() const;

    MCNAPI double getLastUpdateTime() const;

    MCNAPI float getNoiseTime() const;

    MCNAPI bool getQueuesAreEmpty() const;

    MCNAPI std::array<CameraShakeTypeQueue, 2>& getShakeQueues();

    MCNAPI ::Vec3 getShakeVector(::CameraShakeType, float, float, float) const;

    MCNAPI void initialize(::Random&);

    MCNAPI ::CameraShakeComponent& operator=(::CameraShakeComponent&&);

    MCNAPI bool queueShakeEvent(::CameraShakeType, float, float);

    MCNAPI void setLastUpdateTime(double);

    MCNAPI void setNoiseTime(float);

    MCNAPI bool shouldShake() const;

    MCNAPI void updateShakeNoise(::Random&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static float getMaxIntensity();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& MAX_INTENSITY();
    // NOLINTEND
};
