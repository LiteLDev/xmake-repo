#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/Control.h"
#include "mc/world/actor/ai/control/JumpType.h"

// auto generated forward declare list
// clang-format off
class JumpControlComponent;
class Mob;
namespace SharedTypes::v1_26_40 { struct JumpControlComponentDefinition; }
// clang-format on

class JumpControl : public ::Control {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~JumpControl();

    virtual void initializeInternal(::Mob&, ::SharedTypes::v1_26_40::JumpControlComponentDefinition const*);

    virtual std::unique_ptr<JumpControl> clone() const;

    virtual void tick(::JumpControlComponent&, ::Mob&);

    virtual int getJumpDelay(::JumpControlComponent const&) const;

    virtual float getJumpPower(::JumpControlComponent const&) const;

    virtual ::JumpType getJumpType(::JumpControlComponent const&) const;

    virtual void setJumpType(::JumpControlComponent&, ::JumpType);

    virtual void resetSpeedModifier(::JumpControlComponent const&, ::Mob&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initializeInternal(::Mob&, ::SharedTypes::v1_26_40::JumpControlComponentDefinition const*);

    MCNAPI std::unique_ptr<JumpControl> $clone() const;

    MCNAPI void $tick(::JumpControlComponent&, ::Mob&);

    MCNAPI int $getJumpDelay(::JumpControlComponent const&) const;

    MCNAPI float $getJumpPower(::JumpControlComponent const&) const;

    MCNAPI ::JumpType $getJumpType(::JumpControlComponent const&) const;

    MCNAPI void $setJumpType(::JumpControlComponent&, ::JumpType);

    MCNAPI void $resetSpeedModifier(::JumpControlComponent const&, ::Mob&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
