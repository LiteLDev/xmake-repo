#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/CapacitorComponent.h"
#include "mc/world/redstone/circuit/components/CircuitComponentType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class CircuitSceneGraph;
class CircuitSystem;
class CircuitTrackingInfo;
// clang-format on

class PulseCapacitor : public ::CapacitorComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                         mPowered;
    ::ll::TypedStorage<1, 1, bool>                         mNewPowered;
    ::ll::TypedStorage<8, 8, ::CircuitComponentType const> mCircuitComponentType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~PulseCapacitor();
#else // @header-generator platform
    virtual bool canConsumePowerAnyDirection() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getStrength() const;
#else // @header-generator platform
    virtual bool canConsumerPower() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setStrength(int);
#else // @header-generator platform
    virtual bool
    allowConnection(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, bool& bDirectlyPowered) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canConsumePowerAnyDirection() const;
#else // @header-generator platform
    virtual uchar getPoweroutDirection() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canConsumerPower() const;
#else // @header-generator platform
    virtual bool evaluate(::CircuitSystem& system, ::BlockPos const& pos) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool allowConnection(::CircuitSceneGraph&, ::CircuitTrackingInfo const&, bool&);
#else // @header-generator platform
    virtual void setStrength(int strength) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool evaluate(::CircuitSystem&, ::BlockPos const&);
#else // @header-generator platform
    virtual int getStrength() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::CircuitComponentType getCircuitComponentType() const;

    virtual uchar getPoweroutDirection() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PulseCapacitor();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::CircuitComponentType getCircuitComponentType() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getStrength() const;
#else // @header-generator platform
    MCFOLD bool $canConsumePowerAnyDirection() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setStrength(int);
#else // @header-generator platform
    MCFOLD bool $canConsumerPower() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canConsumePowerAnyDirection() const;
#else // @header-generator platform
    MCFOLD bool $allowConnection(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, bool& bDirectlyPowered);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canConsumerPower() const;
#else // @header-generator platform
    MCFOLD uchar $getPoweroutDirection() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $allowConnection(::CircuitSceneGraph&, ::CircuitTrackingInfo const&, bool&);
#else // @header-generator platform
    MCAPI bool $evaluate(::CircuitSystem& system, ::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $evaluate(::CircuitSystem&, ::BlockPos const&);
#else // @header-generator platform
    MCAPI void $setStrength(int strength);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CircuitComponentType $getCircuitComponentType() const;
#else // @header-generator platform
    MCFOLD int $getStrength() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uchar $getPoweroutDirection() const;
#else // @header-generator platform
    MCFOLD ::CircuitComponentType $getCircuitComponentType() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
