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

class PoweredBlockComponent : public ::BaseCircuitComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                         mPromotedToProducer;
    ::ll::TypedStorage<1, 1, bool>                         mAllowAsPowerSource;
    ::ll::TypedStorage<8, 8, ::CircuitComponentType const> mCircuitComponentType;
    // NOLINTEND

public:
    // prevent constructor by default
    PoweredBlockComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PoweredBlockComponent();

    virtual int getStrength() const;

    virtual bool canConsumerPower() const;

    virtual bool addSource(::CircuitSceneGraph&, ::CircuitTrackingInfo const&, int&, bool&);

    virtual bool allowConnection(::CircuitSceneGraph&, ::CircuitTrackingInfo const&, bool&);

    virtual bool evaluate(::CircuitSystem&, ::BlockPos const&);

    virtual bool hasChildrenSource() const;

    virtual ::CircuitComponentType getCircuitComponentType() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PoweredBlockComponent(uchar);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uchar);
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

    MCNAPI bool $canConsumerPower() const;

    MCNAPI bool $addSource(::CircuitSceneGraph&, ::CircuitTrackingInfo const&, int&, bool&);

    MCNAPI bool $allowConnection(::CircuitSceneGraph&, ::CircuitTrackingInfo const&, bool&);

    MCNAPI bool $evaluate(::CircuitSystem&, ::BlockPos const&);

    MCNAPI bool $hasChildrenSource() const;

    MCNAPI ::CircuitComponentType $getCircuitComponentType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
