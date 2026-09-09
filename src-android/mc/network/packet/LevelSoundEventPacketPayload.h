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
    ::ll::TypedStorage<8, 24, std::string>            mActorIdentifier;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>         mActor;
    ::ll::TypedStorage<8, 32, ::SoundEventIdentifier> mSoundEvent;
    ::ll::TypedStorage<4, 12, ::Vec3>                 mPos;
    ::ll::TypedStorage<4, 4, int>                     mData;
    ::ll::TypedStorage<1, 1, bool>                    mIsGlobal;
    ::ll::TypedStorage<1, 1, bool>                    mIsBaby;
    ::ll::TypedStorage<4, 16, std::optional<Vec3>>    mFireAtPosition;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LevelSoundEventPacketPayload(
        ::SoundEventIdentifier,
        ::Vec3 const&,
        int,
        ::ActorSoundIdentifier const&,
        bool,
        std::optional<Vec3> const&
    );

    MCNAPI ~LevelSoundEventPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::SoundEventIdentifier, ::Vec3 const&, int, ::ActorSoundIdentifier const&, bool, std::optional<Vec3> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
