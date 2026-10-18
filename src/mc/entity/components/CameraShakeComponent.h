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
#if defined(LL_PLAT_A) // @header-generator platform
    using ShakeQueueArray = std::array<CameraShakeTypeQueue, 2>;
#else // @header-generator platform
    using ShakeQueueArray = ::std::array<::CameraShakeTypeQueue, 2>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<SimplexNoise>>        xAxisNoise;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SimplexNoise>>        yAxisNoise;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SimplexNoise>>        zAxisNoise;
    ::ll::TypedStorage<8, 8, double>                               mLastUpdatedTime;
    ::ll::TypedStorage<4, 4, float>                                mNoiseTime;
    ::ll::TypedStorage<4, 4, float>                                mDecayRate;
    ::ll::TypedStorage<8, 64, std::array<CameraShakeTypeQueue, 2>> mShakeTypeQueues;
    ::ll::TypedStorage<1, 1, bool>                                 mWasShaking;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SimplexNoise>>        xAxisNoise;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SimplexNoise>>        yAxisNoise;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SimplexNoise>>        zAxisNoise;
    ::ll::TypedStorage<8, 8, double>                                   mLastUpdatedTime;
    ::ll::TypedStorage<4, 4, float>                                    mNoiseTime;
    ::ll::TypedStorage<4, 4, float>                                    mDecayRate;
    ::ll::TypedStorage<8, 64, ::std::array<::CameraShakeTypeQueue, 2>> mShakeTypeQueues;
    ::ll::TypedStorage<1, 1, bool>                                     mWasShaking;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    CameraShakeComponent& operator=(CameraShakeComponent const&);
    CameraShakeComponent(CameraShakeComponent const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::std::vector<::CameraShakeType> getActiveShakeTypes() const;

    MCAPI ::Vec3
    getShakeVector(::CameraShakeType shakeType, float noiseMultiplier, float frequency, float amplitude) const;

    MCAPI void initialize(::Random& random);

    MCAPI bool queueShakeEvent(::CameraShakeType shakeType, float intensity, float duration);

    MCAPI ~CameraShakeComponent();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // static functions
#else // @header-generator platform
    // destructor thunk
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static float getMaxIntensity();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& MAX_INTENSITY();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
