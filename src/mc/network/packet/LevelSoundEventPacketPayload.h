#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/sound/SoundEventIdentifier.h"

// auto generated forward declare list
// clang-format off
class ActorSoundIdentifier;
// clang-format on

struct LevelSoundEventPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>            mActorIdentifier;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>         mActor;
    ::ll::TypedStorage<8, 32, ::SoundEventIdentifier> mSoundEvent;
    ::ll::TypedStorage<4, 12, ::Vec3>                 mPos;
    ::ll::TypedStorage<4, 4, int>                     mData;
    ::ll::TypedStorage<1, 1, bool>                    mIsGlobal;
    ::ll::TypedStorage<1, 1, bool>                    mIsBaby;
    ::ll::TypedStorage<4, 16, std::optional<Vec3>>    mFireAtPosition;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>           mActorIdentifier;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>          mActor;
    ::ll::TypedStorage<8, 40, ::SoundEventIdentifier>  mSoundEvent;
    ::ll::TypedStorage<4, 12, ::Vec3>                  mPos;
    ::ll::TypedStorage<4, 4, int>                      mData;
    ::ll::TypedStorage<1, 1, bool>                     mIsGlobal;
    ::ll::TypedStorage<1, 1, bool>                     mIsBaby;
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>> mFireAtPosition;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    LevelSoundEventPacketPayload& operator=(LevelSoundEventPacketPayload const&);
    LevelSoundEventPacketPayload();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI LevelSoundEventPacketPayload(
        ::SoundEventIdentifier,
        ::Vec3 const&,
        int,
        ::ActorSoundIdentifier const&,
        bool,
        std::optional<Vec3> const&
#else // @header-generator platform
    MCAPI LevelSoundEventPacketPayload(::LevelSoundEventPacketPayload const&);

    MCAPI LevelSoundEventPacketPayload(
        ::SoundEventIdentifier         soundEvent,
        ::Vec3 const&                  pos,
        int                            data,
        ::ActorSoundIdentifier const&  actorSoundIdentifier,
        bool                           isGlobal,
        ::std::optional<::Vec3> const& fireAtPosition
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~LevelSoundEventPacketPayload();
#else // @header-generator platform
    MCAPI ~LevelSoundEventPacketPayload();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void*
    $ctor(::SoundEventIdentifier, ::Vec3 const&, int, ::ActorSoundIdentifier const&, bool, std::optional<Vec3> const&);
#else // @header-generator platform
    MCAPI void* $ctor(::LevelSoundEventPacketPayload const&);

    MCAPI void* $ctor(
        ::SoundEventIdentifier         soundEvent,
        ::Vec3 const&                  pos,
        int                            data,
        ::ActorSoundIdentifier const&  actorSoundIdentifier,
        bool                           isGlobal,
        ::std::optional<::Vec3> const& fireAtPosition
    );
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
