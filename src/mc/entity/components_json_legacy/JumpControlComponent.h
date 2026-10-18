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
#if defined(LL_PLAT_A) // @header-generator platform
namespace SharedTypes::v1_26_40 { struct JumpControlComponentDefinition; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class JumpControlComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                         mJumping;
    ::ll::TypedStorage<1, 1, bool>                         mSwimming;
    ::ll::TypedStorage<4, 4, float>                        mJumpPower;
    ::ll::UntypedStorage<4, 72>                            mJumpType;
    ::ll::UntypedStorage<4, 0>                             mJumpData;
    ::ll::TypedStorage<8, 8, std::unique_ptr<JumpControl>> mJumpControl;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                             mJumping;
    ::ll::TypedStorage<1, 1, bool>                             mSwimming;
    ::ll::TypedStorage<4, 4, float>                            mJumpPower;
    ::ll::TypedStorage<4, 4, ::JumpType>                       mJumpType;
    ::ll::TypedStorage<4, 64, ::JumpData[4]>                   mJumpData;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::JumpControl>> mJumpControl;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    JumpControlComponent& operator=(JumpControlComponent const&);
    JumpControlComponent();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI JumpControlComponent();
#else // @header-generator platform
    MCAPI JumpControlComponent(::JumpControlComponent const& other);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void initMultiTypeJumpComponent(::Mob& entity, ::ActorDefinitionDescriptor& initDescription);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::JumpControlComponent const&);
#else // @header-generator platform
    MCAPI void* $ctor(::JumpControlComponent const& other);
#endif // @header-generator platform
    // NOLINTEND
};
