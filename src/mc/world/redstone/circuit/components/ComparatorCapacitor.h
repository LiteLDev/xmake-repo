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
#if defined(LL_PLAT_A) // @header-generator platform
        COMPARE_MODE  = 0,
        SUBTRACT_MODE = 1,
#else // @header-generator platform
        CompareMode  = 0,
        SubtractMode = 1,
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ComparatorCapacitor();
#else // @header-generator platform
    virtual bool addSource(
        ::CircuitSceneGraph&         graph,
        ::CircuitTrackingInfo const& info,
        int&                         dampening,
        bool&                        bDirectlyPowered
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setOldStrength(short);
#else // @header-generator platform
    virtual bool evaluate(::CircuitSystem& system, ::BlockPos const& pos) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool addSource(::CircuitSceneGraph&, ::CircuitTrackingInfo const&, int&, bool&);
#else // @header-generator platform
    virtual void cacheValues(::CircuitSystem& system, ::BlockPos const& pos) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool evaluate(::CircuitSystem&, ::BlockPos const&);
#else // @header-generator platform
    virtual void updateDependencies(::CircuitSceneGraph& system, ::BlockPos const& pos) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void cacheValues(::CircuitSystem&, ::BlockPos const&);
#else // @header-generator platform
    virtual ::RedstoneLogicExecutionFlags getLogicExecutionFlags() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void updateDependencies(::CircuitSceneGraph&, ::BlockPos const&);
#else // @header-generator platform
    virtual void setOldStrength(short strength) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual ::CircuitComponentType getCircuitComponentType() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setOldStrength(short);
#else // @header-generator platform
    MCAPI bool
    $addSource(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, int& dampening, bool& bDirectlyPowered);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $addSource(::CircuitSceneGraph&, ::CircuitTrackingInfo const&, int&, bool&);
#else // @header-generator platform
    MCAPI bool $evaluate(::CircuitSystem& system, ::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $evaluate(::CircuitSystem&, ::BlockPos const&);
#else // @header-generator platform
    MCAPI void $cacheValues(::CircuitSystem& system, ::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $cacheValues(::CircuitSystem&, ::BlockPos const&);
#else // @header-generator platform
    MCAPI void $updateDependencies(::CircuitSceneGraph& system, ::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $updateDependencies(::CircuitSceneGraph&, ::BlockPos const&);
#else // @header-generator platform
    MCFOLD ::RedstoneLogicExecutionFlags $getLogicExecutionFlags() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::RedstoneLogicExecutionFlags $getLogicExecutionFlags() const;
#else // @header-generator platform
    MCFOLD void $setOldStrength(short strength);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CircuitComponentType $getCircuitComponentType() const;
#else // @header-generator platform
    MCAPI ::CircuitComponentType $getCircuitComponentType() const;


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
