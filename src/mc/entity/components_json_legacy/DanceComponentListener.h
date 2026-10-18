#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/legacy/ActorUniqueID.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/sound/SoundEventIdentifier.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class ActorSoundIdentifier;
#else // @header-generator platform
#endif // @header-generator platform
class Level;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct SoundEventIdentifier;
#endif // @header-generator platform
// clang-format on

class DanceComponentListener {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                    mOwnerID;
    ::ll::TypedStorage<4, 4, float>                              mListenDistance;
    ::ll::TypedStorage<8, 8, ::Level*>                           mLevel;
    ::ll::TypedStorage<8, 24, std::vector<SoundEventIdentifier>> mDanceableSoundEvents;
    ::ll::TypedStorage<4, 12, ::Vec3>                            mSoundPos;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>   mLevelSoundEvent;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                        mOwnerID;
    ::ll::TypedStorage<4, 4, float>                                  mListenDistance;
    ::ll::TypedStorage<8, 8, ::Level*>                               mLevel;
    ::ll::TypedStorage<8, 24, ::std::vector<::SoundEventIdentifier>> mDanceableSoundEvents;
    ::ll::TypedStorage<4, 12, ::Vec3>                                mSoundPos;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>       mLevelSoundEvent;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setLevel(::Level&);
#else // @header-generator platform
    MCAPI void setLevel(::Level& level);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~DanceComponentListener();
#else // @header-generator platform
    MCAPI ~DanceComponentListener();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
