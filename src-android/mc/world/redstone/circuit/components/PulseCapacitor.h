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
    virtual ~PulseCapacitor();

    virtual int getStrength() const;

    virtual void setStrength(int);

    virtual bool canConsumePowerAnyDirection() const;

    virtual bool canConsumerPower() const;

    virtual bool allowConnection(::CircuitSceneGraph&, ::CircuitTrackingInfo const&, bool&);

    virtual bool evaluate(::CircuitSystem&, ::BlockPos const&);

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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $getStrength() const;

    MCNAPI void $setStrength(int);

    MCNAPI bool $canConsumePowerAnyDirection() const;

    MCNAPI bool $canConsumerPower() const;

    MCNAPI bool $allowConnection(::CircuitSceneGraph&, ::CircuitTrackingInfo const&, bool&);

    MCNAPI bool $evaluate(::CircuitSystem&, ::BlockPos const&);

    MCNAPI ::CircuitComponentType $getCircuitComponentType() const;

    MCNAPI uchar $getPoweroutDirection() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
