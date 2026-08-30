#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/CapacitorComponent.h"
#include "mc/world/redstone/circuit/components/CircuitComponentList.h"

// auto generated forward declare list
// clang-format off
class BaseCircuitComponent;
class BlockPos;
class CircuitSceneGraph;
class CircuitTrackingInfo;
// clang-format on

class SidePoweredComponent : public ::CapacitorComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::CircuitComponentList> mSideComponents;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SidePoweredComponent();

    virtual bool canConsumePowerAnyDirection() const;

    virtual bool canConsumerPower() const;

    virtual void removeSource(::BlockPos const&, ::BaseCircuitComponent const*);

    virtual bool allowConnection(::CircuitSceneGraph&, ::CircuitTrackingInfo const&, bool&);

    virtual void removeFromAnySourceList(::BaseCircuitComponent const*);

    virtual uchar getPoweroutDirection() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addToSideComponents(CircuitComponentList::Item*&, ::BaseCircuitComponent*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canConsumePowerAnyDirection() const;

    MCNAPI bool $canConsumerPower() const;

    MCNAPI void $removeSource(::BlockPos const&, ::BaseCircuitComponent const*);

    MCNAPI bool $allowConnection(::CircuitSceneGraph&, ::CircuitTrackingInfo const&, bool&);

    MCNAPI void $removeFromAnySourceList(::BaseCircuitComponent const*);

    MCNAPI uchar $getPoweroutDirection() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
