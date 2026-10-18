#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/sound/LoopSoundStage.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/actor/player/PlayerListener.h"
#include "mc/world/level/biome/BiomeIdType.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BlockPos;
class Player;
class SoundMapping;
class Vec3;
struct BrightnessPair;
struct Sound;
// clang-format on

class AmbientSoundController : public ::PlayerListener {
public:
    // AmbientSoundController inner types define
    using PlaySoundFunc = ::brstd::function_ref<void(const HashedString&, const Vec3&)>;

    using LightThresholdFunc = ::brstd::function_ref<bool(BrightnessPair, const BlockPos&, BrightnessPair)>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<4, 8> mLoopSoundStage;
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mLocalUser;
    ::ll::TypedStorage<8, 8, ::SoundMapping const&> mSoundMap;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mNextSoundChangeTime;
    ::ll::TypedStorage<4, 4, int> mDelayUntilNextMoodSound;
    ::ll::UntypedStorage<2, 2> mTargetLoopBiomeId;
    ::ll::TypedStorage<8, 40, ::HashedString> mTargetAmbientLoopSound;
    ::ll::UntypedStorage<2, 2> mCurrentLoopBiomeId;
    ::ll::TypedStorage<8, 40, ::HashedString> mCurrentAmbientLoopSound;
    ::ll::TypedStorage<8, 8, ulong> mCurrentLoop;
    ::ll::TypedStorage<8, 8, ulong> mPreviousLoop;
    ::ll::TypedStorage<4, 4, float> mCurrentVolume;
    ::ll::TypedStorage<4, 4, float> mCurrentPitch;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    AmbientSoundController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AmbientSoundController();

    virtual void onWillChangeDimension(::Player&);

    virtual void onDimensionChanged(::Player&);

    virtual void onPlayerDestruction(::Player&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AmbientSoundController(::WeakEntityRef, ::SoundMapping const&);

    MCNAPI void _addDelayOrTransitioningToNewStage();

    MCNAPI void _playLoopSound(::Sound const&);

    MCNAPI void _startLoopSound();

    MCNAPI void _stopLoopSound(bool const);

    MCNAPI void
    _tryPlayAdditionSounds(::Vec3 const&, ::brstd::function_ref<void(const HashedString&, const Vec3&)> const&);

    MCNAPI void _tryPlayLoopSounds(::Vec3 const&);

    MCNAPI void _tryPlayMoodSound(
        ::Vec3 const&,
        ::brstd::function_ref<void(const HashedString&, const Vec3&)> const&,
        ::brstd::function_ref<bool(BrightnessPair, const BlockPos&, BrightnessPair)>
    );

    MCNAPI void tryPlayAmbientSounds(
        ::Vec3 const&,
        ::brstd::function_ref<void(const HashedString&, const Vec3&)> const&,
        ::brstd::function_ref<bool(BrightnessPair, const BlockPos&, BrightnessPair)>
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::chrono::duration<long long, std::ratio<1, 1>> const& CHANGE_HOLD_OFF_DURATION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::WeakEntityRef, ::SoundMapping const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onWillChangeDimension(::Player&);

    MCNAPI void $onDimensionChanged(::Player&);

    MCNAPI void $onPlayerDestruction(::Player&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/sound/LoopSoundStage.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/actor/player/PlayerListener.h"
#include "mc/world/level/biome/BiomeIdType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Player;
class SoundMapping;
class Vec3;
struct BrightnessPair;
// clang-format on

class AmbientSoundController : public ::PlayerListener {
public:
    // AmbientSoundController inner types define
    using PlaySoundFunc = ::brstd::function_ref<void(::HashedString const&, ::Vec3 const&)>;

    using LightThresholdFunc = ::brstd::function_ref<bool(::BrightnessPair, ::BlockPos const&, ::BrightnessPair)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::LoopSoundStage>                        mLoopSoundStage;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>                        mLocalUser;
    ::ll::TypedStorage<8, 8, ::SoundMapping const&>                   mSoundMap;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mNextSoundChangeTime;
    ::ll::TypedStorage<4, 4, int>                                     mDelayUntilNextMoodSound;
    ::ll::TypedStorage<2, 2, ::BiomeIdType>                           mTargetLoopBiomeId;
    ::ll::TypedStorage<8, 48, ::HashedString>                         mTargetAmbientLoopSound;
    ::ll::TypedStorage<2, 2, ::BiomeIdType>                           mCurrentLoopBiomeId;
    ::ll::TypedStorage<8, 48, ::HashedString>                         mCurrentAmbientLoopSound;
    ::ll::TypedStorage<8, 8, uint64>                                  mCurrentLoop;
    ::ll::TypedStorage<8, 8, uint64>                                  mPreviousLoop;
    ::ll::TypedStorage<4, 4, float>                                   mCurrentVolume;
    ::ll::TypedStorage<4, 4, float>                                   mCurrentPitch;
    // NOLINTEND

public:
    // prevent constructor by default
    AmbientSoundController& operator=(AmbientSoundController const&);
    AmbientSoundController(AmbientSoundController const&);
    AmbientSoundController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AmbientSoundController() /*override*/ = default;

    virtual void onWillChangeDimension(::Player& player) /*override*/;

    virtual void onDimensionChanged(::Player& player) /*override*/;

    virtual void onPlayerDestruction(::Player& player) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AmbientSoundController(::WeakEntityRef localUser, ::SoundMapping const& soundMap);

    MCAPI void _addDelayOrTransitioningToNewStage();

    MCAPI void _startLoopSound();

    MCAPI void _stopLoopSound(bool hard);

    MCAPI void _tryPlayAdditionSounds(
        ::Vec3 const&                                                            listenerPos,
        ::brstd::function_ref<void(::HashedString const&, ::Vec3 const&)> const& playSoundFunc
    );

    MCAPI void _tryPlayLoopSounds(::Vec3 const& listenerPos);

    MCAPI void _tryPlayMoodSound(
        ::Vec3 const&                                                                      listenerPos,
        ::brstd::function_ref<void(::HashedString const&, ::Vec3 const&)> const&           playSoundFunc,
        ::brstd::function_ref<bool(::BrightnessPair, ::BlockPos const&, ::BrightnessPair)> lightThresholdFunc
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::WeakEntityRef localUser, ::SoundMapping const& soundMap);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onWillChangeDimension(::Player& player);

    MCFOLD void $onDimensionChanged(::Player& player);

    MCAPI void $onPlayerDestruction(::Player& player);
    // NOLINTEND
};
#else // @header-generator platform
class AmbientSoundController {};
#endif // @header-generator platform
#endif // @header-generator platform
