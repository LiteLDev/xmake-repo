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

class ComparatorCapacitor : public ::SidePoweredComponent {
public:
    // ComparatorCapacitor inner types define
    enum class Mode : int {
        COMPARE_MODE  = 0,
        SUBTRACT_MODE = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                          mRearAnalogStrength;
    ::ll::TypedStorage<4, 4, int>                          mSideAnalogStrengthRight;
    ::ll::TypedStorage<4, 4, int>                          mSideAnalogStrengthLeft;
    ::ll::TypedStorage<4, 4, ::ComparatorCapacitor::Mode>  mMode;
    ::ll::TypedStorage<4, 4, int>                          mRearStrength;
    ::ll::TypedStorage<4, 4, int>                          mSideStrengths;
    ::ll::TypedStorage<1, 1, bool>                         mHasAnalogBeenSet;
    ::ll::TypedStorage<8, 8, ::CircuitComponentType const> mCircuitComponentType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ComparatorCapacitor();

    virtual void setOldStrength(short);

    virtual bool addSource(::CircuitSceneGraph&, ::CircuitTrackingInfo const&, int&, bool&);

    virtual bool evaluate(::CircuitSystem&, ::BlockPos const&);

    virtual void cacheValues(::CircuitSystem&, ::BlockPos const&);

    virtual void updateDependencies(::CircuitSceneGraph&, ::BlockPos const&);

    virtual ::RedstoneLogicExecutionFlags getLogicExecutionFlags() const;

    virtual ::CircuitComponentType getCircuitComponentType() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ComparatorCapacitor();

    MCNAPI void clearAnalogStrength(uchar);

    MCNAPI bool isSubtractMode();

    MCNAPI void setAnalogStrength(int, uchar);

    MCNAPI void setMode(::ComparatorCapacitor::Mode);
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
    MCNAPI void $setOldStrength(short);

    MCNAPI bool $addSource(::CircuitSceneGraph&, ::CircuitTrackingInfo const&, int&, bool&);

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
