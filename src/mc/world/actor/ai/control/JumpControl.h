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
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~JumpControl();
#else // @header-generator platform
    virtual ~JumpControl() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initializeInternal(::Mob&, ::SharedTypes::v1_26_40::JumpControlComponentDefinition const*);
#else // @header-generator platform
    virtual void
    initializeInternal(::Mob& mob, ::SharedTypes::v1_26_40::JumpControlComponentDefinition const* description);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<JumpControl> clone() const;
#else // @header-generator platform
    virtual ::std::unique_ptr<::JumpControl> clone() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick(::JumpControlComponent&, ::Mob&);
#else // @header-generator platform
    virtual void tick(::JumpControlComponent& parent, ::Mob& mob);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getJumpDelay(::JumpControlComponent const&) const;
#else // @header-generator platform
    virtual int getJumpDelay(::JumpControlComponent const& parent) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getJumpPower(::JumpControlComponent const&) const;
#else // @header-generator platform
    virtual float getJumpPower(::JumpControlComponent const& parent) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::JumpType getJumpType(::JumpControlComponent const&) const;
#else // @header-generator platform
    virtual ::JumpType getJumpType(::JumpControlComponent const& parent) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setJumpType(::JumpControlComponent&, ::JumpType);
#else // @header-generator platform
    virtual void setJumpType(::JumpControlComponent& parent, ::JumpType type);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void resetSpeedModifier(::JumpControlComponent const&, ::Mob&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void resetSpeedModifier(::JumpControlComponent const& parent, ::Mob& mob);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initializeInternal(::Mob&, ::SharedTypes::v1_26_40::JumpControlComponentDefinition const*);
#else // @header-generator platform
    MCFOLD void
    $initializeInternal(::Mob& mob, ::SharedTypes::v1_26_40::JumpControlComponentDefinition const* description);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<JumpControl> $clone() const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::JumpControl> $clone() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick(::JumpControlComponent&, ::Mob&);
#else // @header-generator platform
    MCAPI void $tick(::JumpControlComponent& parent, ::Mob& mob);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getJumpDelay(::JumpControlComponent const&) const;
#else // @header-generator platform
    MCFOLD int $getJumpDelay(::JumpControlComponent const& parent) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getJumpPower(::JumpControlComponent const&) const;
#else // @header-generator platform
    MCAPI float $getJumpPower(::JumpControlComponent const& parent) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::JumpType $getJumpType(::JumpControlComponent const&) const;
#else // @header-generator platform
    MCFOLD ::JumpType $getJumpType(::JumpControlComponent const& parent) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setJumpType(::JumpControlComponent&, ::JumpType);
#else // @header-generator platform
    MCFOLD void $setJumpType(::JumpControlComponent& parent, ::JumpType type);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $resetSpeedModifier(::JumpControlComponent const&, ::Mob&);
#else // @header-generator platform
    MCFOLD void $resetSpeedModifier(::JumpControlComponent const& parent, ::Mob& mob);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
