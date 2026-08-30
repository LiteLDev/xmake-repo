#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/JumpData.h"
#include "mc/world/actor/ai/control/JumpType.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionDescriptor;
class JumpControl;
class Mob;
namespace SharedTypes::v1_26_40 { struct JumpControlComponentDefinition; }
// clang-format on

class JumpControlComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                         mJumping;
    ::ll::TypedStorage<1, 1, bool>                         mSwimming;
    ::ll::TypedStorage<4, 4, float>                        mJumpPower;
    ::ll::UntypedStorage<4, 72>                            mJumpType;
    ::ll::UntypedStorage<4, 0>                             mJumpData;
    ::ll::TypedStorage<8, 8, std::unique_ptr<JumpControl>> mJumpControl;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JumpControlComponent();

    MCNAPI JumpControlComponent(::JumpControlComponent const&);

    MCNAPI float _getDelayInternal() const;

    MCNAPI float _getHeightInternal() const;

    MCNAPI int getAnimationDuration() const;

    MCNAPI float getDistanceScale() const;

    MCNAPI int getJumpDelay() const;

    MCNAPI float getJumpPower() const;

    MCNAPI bool getJumping() const;

    MCNAPI bool getSwimming() const;

    MCNAPI void initMultiTypeJumpComponent(::Mob&, ::ActorDefinitionDescriptor&);

    MCNAPI void initializeFromDefinition(::Mob&, ::SharedTypes::v1_26_40::JumpControlComponentDefinition const*);

    MCNAPI ::JumpControlComponent& operator=(::JumpControlComponent const&);

    MCNAPI void resetSpeedModifier(::Mob&);

    MCNAPI void setInternalType(std::unique_ptr<JumpControl>);

    MCNAPI void setJumpType(::JumpType);

    MCNAPI void setJumping(bool);

    MCNAPI void setSwimming(bool);

    MCNAPI void update(::Mob&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::JumpControlComponent const&);
    // NOLINTEND
};
