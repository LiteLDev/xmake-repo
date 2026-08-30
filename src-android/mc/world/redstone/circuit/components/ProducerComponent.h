#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/BaseCircuitComponent.h"
#include "mc/world/redstone/circuit/components/CircuitComponentType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class CircuitSceneGraph;
class CircuitSystem;
class CircuitTrackingInfo;
// clang-format on

class ProducerComponent : public ::BaseCircuitComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                          mNextStrength;
    ::ll::TypedStorage<1, 1, bool>                         mAttachedAllowed;
    ::ll::TypedStorage<1, 1, bool>                         mStopPower;
    ::ll::TypedStorage<8, 8, ::CircuitComponentType const> mCircuitComponentType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ProducerComponent();

    virtual void setStrength(int);

    virtual bool canStopPower() const;

    virtual void setStopPower(bool);

    virtual bool allowConnection(::CircuitSceneGraph&, ::CircuitTrackingInfo const&, bool&);

    virtual bool evaluate(::CircuitSystem&, ::BlockPos const&);

    virtual ::CircuitComponentType getCircuitComponentType() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ProducerComponent();

    MCNAPI void allowAttachments(bool);
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
    MCNAPI void $setStrength(int);

    MCNAPI bool $canStopPower() const;

    MCNAPI void $setStopPower(bool);

    MCNAPI bool $allowConnection(::CircuitSceneGraph&, ::CircuitTrackingInfo const&, bool&);

    MCNAPI bool $evaluate(::CircuitSystem&, ::BlockPos const&);

    MCNAPI ::CircuitComponentType $getCircuitComponentType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
