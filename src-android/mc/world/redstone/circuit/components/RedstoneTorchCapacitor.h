#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/CapacitorComponent.h"
#include "mc/world/redstone/circuit/components/CircuitComponentType.h"
#include "mc/world/redstone/circuit/components/RedstoneLogicExecutionFlags.h"

// auto generated forward declare list
// clang-format off
class BaseCircuitComponent;
class BlockPos;
class CircuitSceneGraph;
class CircuitSystem;
class CircuitTrackingInfo;
// clang-format on

class RedstoneTorchCapacitor : public ::CapacitorComponent {
public:
    // RedstoneTorchCapacitor inner types declare
    // clang-format off
    struct State;
    // clang-format on

    // RedstoneTorchCapacitor inner types define
    struct State {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mOn;
        ::ll::TypedStorage<1, 1, bool> mHalfFrame;
        ::ll::TypedStorage<1, 1, bool> mChanged;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::RedstoneTorchCapacitor*>          mNextOrder;
    ::ll::TypedStorage<4, 4, int>                                mSelfPowerCount;
    ::ll::TypedStorage<1, 6, ::RedstoneTorchCapacitor::State[2]> mState;
    ::ll::TypedStorage<1, 1, bool>                               mCanReigniteFromBurnout;
    ::ll::TypedStorage<8, 8, ::CircuitComponentType const>       mCircuitComponentType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RedstoneTorchCapacitor();

    virtual int getStrength() const;

    virtual void removeSource(::BlockPos const&, ::BaseCircuitComponent const*);

    virtual bool addSource(::CircuitSceneGraph&, ::CircuitTrackingInfo const&, int&, bool&);

    virtual bool allowConnection(::CircuitSceneGraph&, ::CircuitTrackingInfo const&, bool&);

    virtual bool evaluate(::CircuitSystem&, ::BlockPos const&);

    virtual void cacheValues(::CircuitSystem&, ::BlockPos const&);

    virtual void updateDependencies(::CircuitSceneGraph&, ::BlockPos const&);

    virtual ::RedstoneLogicExecutionFlags getLogicExecutionFlags() const;

    virtual bool isHalfPulse() const;

    virtual ::CircuitComponentType getCircuitComponentType() const;

    virtual uchar getPoweroutDirection() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RedstoneTorchCapacitor();

    MCNAPI void resetBurnOutCount();

    MCNAPI void setOn(bool);
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

    MCNAPI void $removeSource(::BlockPos const&, ::BaseCircuitComponent const*);

    MCNAPI bool $addSource(::CircuitSceneGraph&, ::CircuitTrackingInfo const&, int&, bool&);

    MCNAPI bool $allowConnection(::CircuitSceneGraph&, ::CircuitTrackingInfo const&, bool&);

    MCNAPI bool $evaluate(::CircuitSystem&, ::BlockPos const&);

    MCNAPI void $cacheValues(::CircuitSystem&, ::BlockPos const&);

    MCNAPI void $updateDependencies(::CircuitSceneGraph&, ::BlockPos const&);

    MCNAPI ::RedstoneLogicExecutionFlags $getLogicExecutionFlags() const;

    MCNAPI bool $isHalfPulse() const;

    MCNAPI ::CircuitComponentType $getCircuitComponentType() const;

    MCNAPI uchar $getPoweroutDirection() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
