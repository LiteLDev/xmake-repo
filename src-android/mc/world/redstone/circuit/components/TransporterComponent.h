#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/BaseCircuitComponent.h"
#include "mc/world/redstone/circuit/components/CircuitComponentType.h"
#include "mc/world/redstone/circuit/components/RedstoneLogicExecutionFlags.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class CircuitSceneGraph;
class CircuitSystem;
class CircuitTrackingInfo;
// clang-format on

class TransporterComponent : public ::BaseCircuitComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                          mNextStrength;
    ::ll::TypedStorage<8, 8, ::CircuitComponentType const> mCircuitComponentType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TransporterComponent();

    virtual bool canConsumerPower() const;

    virtual bool addSource(::CircuitSceneGraph&, ::CircuitTrackingInfo const&, int&, bool&);

    virtual bool allowConnection(::CircuitSceneGraph&, ::CircuitTrackingInfo const&, bool&);

    virtual bool evaluate(::CircuitSystem&, ::BlockPos const&);

    virtual void cacheValues(::CircuitSystem&, ::BlockPos const&);

    virtual ::RedstoneLogicExecutionFlags getLogicExecutionFlags() const;

    virtual ::CircuitComponentType getCircuitComponentType() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isDotOrDirectLine(::CircuitSceneGraph&, ::BlockPos const&, ::BlockPos const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canConsumerPower() const;

    MCNAPI bool $addSource(::CircuitSceneGraph&, ::CircuitTrackingInfo const&, int&, bool&);

    MCNAPI bool $allowConnection(::CircuitSceneGraph&, ::CircuitTrackingInfo const&, bool&);

    MCNAPI bool $evaluate(::CircuitSystem&, ::BlockPos const&);

    MCNAPI void $cacheValues(::CircuitSystem&, ::BlockPos const&);

    MCNAPI ::RedstoneLogicExecutionFlags $getLogicExecutionFlags() const;

    MCNAPI ::CircuitComponentType $getCircuitComponentType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
