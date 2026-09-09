#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/CircuitComponentType.h"
#include "mc/world/redstone/circuit/components/RedstoneLogicExecutionFlags.h"
#include "mc/world/redstone/circuit/components/SidePoweredComponent.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class CircuitSceneGraph;
class CircuitSystem;
class CircuitTrackingInfo;
// clang-format on

class RepeaterCapacitor : public ::SidePoweredComponent {
public:
    // RepeaterCapacitor inner types define
    enum class States : int {
        OFF        = 0,
        ON         = 1,
        OFF_LOCKED = 2,
        ON_LOCKED  = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 20, ::RepeaterCapacitor::States[5]> mOnStates;
    ::ll::TypedStorage<4, 4, int>                             mInsertAt;
    ::ll::TypedStorage<1, 1, bool>                            mPowered;
    ::ll::TypedStorage<1, 1, bool>                            mNextPower;
    ::ll::TypedStorage<1, 1, bool>                            mLocked;
    ::ll::TypedStorage<4, 4, int>                             mPulseCount;
    ::ll::TypedStorage<1, 1, bool>                            mPulse;
    ::ll::TypedStorage<1, 1, bool>                            mNextPulse;
    ::ll::TypedStorage<8, 8, ::CircuitComponentType const>    mCircuitComponentType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RepeaterCapacitor();

    virtual int getStrength() const;

    virtual void setStrength(int);

    virtual bool addSource(::CircuitSceneGraph&, ::CircuitTrackingInfo const&, int&, bool&);

    virtual void checkLock(::CircuitSystem&, ::BlockPos const&);

    virtual bool evaluate(::CircuitSystem&, ::BlockPos const&);

    virtual void cacheValues(::CircuitSystem&, ::BlockPos const&);

    virtual void updateDependencies(::CircuitSceneGraph&, ::BlockPos const&);

    virtual ::RedstoneLogicExecutionFlags getLogicExecutionFlags() const;

    virtual ::CircuitComponentType getCircuitComponentType() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RepeaterCapacitor();

    MCNAPI void setDelay(int);
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

    MCNAPI bool $addSource(::CircuitSceneGraph&, ::CircuitTrackingInfo const&, int&, bool&);

    MCNAPI void $checkLock(::CircuitSystem&, ::BlockPos const&);

    MCNAPI bool $evaluate(::CircuitSystem&, ::BlockPos const&);

    MCNAPI void $cacheValues(::CircuitSystem&, ::BlockPos const&);

    MCNAPI void $updateDependencies(::CircuitSceneGraph&, ::BlockPos const&);

    MCNAPI ::RedstoneLogicExecutionFlags $getLogicExecutionFlags() const;

    MCNAPI ::CircuitComponentType $getCircuitComponentType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
