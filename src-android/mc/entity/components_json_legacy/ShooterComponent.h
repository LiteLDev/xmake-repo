#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/entity/components_json_legacy/ShooterProjectileData.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class ShooterComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                  mThrowPower;
    ::ll::TypedStorage<8, 24, std::vector<ShooterProjectileData>>    mShooterProjectileData;
    ::ll::TypedStorage<8, 136, ::ActorDefinitionIdentifier>          mDefaultActorDef;
    ::ll::TypedStorage<4, 4, int>                                    mDefaultAuxValue;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mSoundEvent;
    ::ll::TypedStorage<1, 1, bool>                                   mMagicAttacks;
    // NOLINTEND

public:
    // prevent constructor by default
    ShooterComponent& operator=(ShooterComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _shootProjectile(::Actor&, ::ActorDefinitionIdentifier const&, int);

    MCNAPI bool hasMagicAttacks() const;

    MCNAPI void onShoot(::Actor&);

    MCNAPI ~ShooterComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
