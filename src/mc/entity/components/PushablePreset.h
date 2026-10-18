#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/shared_types/PushMode.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/level/Tick.h"
#else // @header-generator platform
#endif // @header-generator platform

struct PushablePreset {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>     mFilter;
    ::ll::TypedStorage<1, 1, ::SharedTypes::PushMode> mPushMode;
    ::ll::TypedStorage<4, 4, float>                   mStrengthMultiplier;
    ::ll::TypedStorage<4, 4, float>                   mMinDistance;
    ::ll::TypedStorage<4, 4, float>                   mMaxDistance;
    ::ll::TypedStorage<1, 1, bool>                    mRequireCollisionOverlap;
    ::ll::TypedStorage<4, 4, float>                   mPushScaleSelf;
    ::ll::TypedStorage<4, 4, float>                   mPushScaleOther;
    ::ll::TypedStorage<4, 4, float>                   mKickSpeedScale;
    ::ll::TypedStorage<4, 4, float>                   mMinKickSpeed;
    ::ll::TypedStorage<4, 4, float>                   mMaxKickSpeed;
    ::ll::TypedStorage<4, 4, float>                   mVerticalKickMultiplier;
    ::ll::TypedStorage<1, 1, bool>                    mPlaySound;
    ::ll::TypedStorage<8, 8, ::Tick>                  mPlaySoundCooldownInTicks;
    ::ll::TypedStorage<4, 4, float>                   mPlaySoundImpulseThreshold;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnk6c07df;
    ::ll::UntypedStorage<1, 1>  mUnk732e89;
    ::ll::UntypedStorage<4, 4>  mUnk7b683d;
    ::ll::UntypedStorage<4, 4>  mUnk197922;
    ::ll::UntypedStorage<4, 4>  mUnkf7e974;
    ::ll::UntypedStorage<1, 1>  mUnk2426fb;
    ::ll::UntypedStorage<4, 4>  mUnk12a7a7;
    ::ll::UntypedStorage<4, 4>  mUnkc58a29;
    ::ll::UntypedStorage<4, 4>  mUnkf844ad;
    ::ll::UntypedStorage<4, 4>  mUnk774b3e;
    ::ll::UntypedStorage<4, 4>  mUnk5561b5;
    ::ll::UntypedStorage<4, 4>  mUnk85f40e;
    ::ll::UntypedStorage<1, 1>  mUnkc78edb;
    ::ll::UntypedStorage<8, 8>  mUnk47fb03;
    ::ll::UntypedStorage<4, 4>  mUnk23687f;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    PushablePreset& operator=(PushablePreset const&);
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PushablePreset();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    PushablePreset(PushablePreset const&);
    PushablePreset();
#endif // @header-generator platform
};
