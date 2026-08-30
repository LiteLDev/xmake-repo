#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/RefCountedSet.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/redstone/circuit/components/CircuitComponentList.h"
#include "mc/world/redstone/circuit/components/CircuitComponentType.h"
#include "mc/world/redstone/circuit/components/RedstoneLogicExecutionFlags.h"

// auto generated forward declare list
// clang-format off
class CircuitSceneGraph;
class CircuitSystem;
class CircuitTrackingInfo;
// clang-format on

class BaseCircuitComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::CircuitComponentList> mSources;
    ::ll::UntypedStorage<8, 24>                       mDestinations;
    ::ll::TypedStorage<1, 1, bool>                    mIgnoreFirstUpdate;
    ::ll::TypedStorage<1, 1, bool>                    mIsFirstTime;
    ::ll::TypedStorage<1, 1, bool>                    mNeedsUpdate;
    ::ll::TypedStorage<4, 12, ::BlockPos>             mPos;
    ::ll::TypedStorage<4, 12, ::BlockPos>             mChunkPosition;
    ::ll::TypedStorage<1, 1, bool>                    mShouldEvaluate;
    ::ll::TypedStorage<2, 2, short>                   mStrength;
    ::ll::TypedStorage<2, 2, short>                   mOldStrength;
    ::ll::TypedStorage<1, 1, uchar>                   mDirection;
    ::ll::TypedStorage<1, 1, bool>                    mAllowPowerUp;
    ::ll::TypedStorage<1, 1, bool>                    mAllowPowerDown;
    ::ll::TypedStorage<1, 1, bool>                    mRemoved;
    ::ll::TypedStorage<1, 1, bool>                    mConsumePowerAnyDirection;
    ::ll::TypedStorage<8, 8, ::CircuitComponentType>  mCircuitComponentType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BaseCircuitComponent();

    virtual int getStrength() const;

    virtual int getDirection() const;

    virtual void setOldStrength(short);

    virtual void setStrength(int);

    virtual void setDirection(uchar);

    virtual void setConsumePowerAnyDirection(bool);

    virtual bool canConsumePowerAnyDirection() const;

    virtual bool canConsumerPower() const;

    virtual bool canStopPower() const;

    virtual void setStopPower(bool);

    virtual bool needsUpdate();

    virtual void removeSource(::BlockPos const&, ::BaseCircuitComponent const*);

    virtual bool addSource(::CircuitSceneGraph&, ::CircuitTrackingInfo const&, int&, bool&);

    virtual bool allowConnection(::CircuitSceneGraph&, ::CircuitTrackingInfo const&, bool&);

    virtual void checkLock(::CircuitSystem&, ::BlockPos const&);

    virtual bool evaluate(::CircuitSystem&, ::BlockPos const&);

    virtual void cacheValues(::CircuitSystem&, ::BlockPos const&);

    virtual void updateDependencies(::CircuitSceneGraph&, ::BlockPos const&);

    virtual ::RedstoneLogicExecutionFlags getLogicExecutionFlags() const;

    virtual bool allowIndirect() const;

    virtual bool isHalfPulse() const;

    virtual bool hasSource(::BaseCircuitComponent const&) const;

    virtual bool hasChildrenSource() const;

    virtual bool isSecondaryPowered() const;

    virtual void removeFromAnySourceList(::BaseCircuitComponent const*);

    virtual ::CircuitComponentType getCircuitComponentType() const;

    virtual ::CircuitComponentType getCircuitComponentGroupType() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BaseCircuitComponent();

    MCNAPI void addSourceItem(::CircuitComponentList::Item const&);

    MCNAPI short getOldStrength() const;

    MCNAPI bool hasDirectPower();

    MCNAPI CircuitComponentList::Item* removeFromSourceAndDestinationList(CircuitComponentList::Item*);

    MCNAPI bool trackPowerSource(::CircuitTrackingInfo const&, int, bool, int, bool);
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

    MCNAPI int $getDirection() const;

    MCNAPI void $setOldStrength(short);

    MCNAPI void $setStrength(int);

    MCNAPI void $setDirection(uchar);

    MCNAPI void $setConsumePowerAnyDirection(bool);

    MCNAPI bool $canConsumePowerAnyDirection() const;

    MCNAPI bool $canConsumerPower() const;

    MCNAPI bool $canStopPower() const;

    MCNAPI void $setStopPower(bool);

    MCNAPI bool $needsUpdate();

    MCNAPI void $removeSource(::BlockPos const&, ::BaseCircuitComponent const*);

    MCNAPI bool $addSource(::CircuitSceneGraph&, ::CircuitTrackingInfo const&, int&, bool&);

    MCNAPI bool $allowConnection(::CircuitSceneGraph&, ::CircuitTrackingInfo const&, bool&);

    MCNAPI void $checkLock(::CircuitSystem&, ::BlockPos const&);

    MCNAPI bool $evaluate(::CircuitSystem&, ::BlockPos const&);

    MCNAPI void $cacheValues(::CircuitSystem&, ::BlockPos const&);

    MCNAPI void $updateDependencies(::CircuitSceneGraph&, ::BlockPos const&);

    MCNAPI ::RedstoneLogicExecutionFlags $getLogicExecutionFlags() const;

    MCNAPI bool $allowIndirect() const;

    MCNAPI bool $isHalfPulse() const;

    MCNAPI bool $hasSource(::BaseCircuitComponent const&) const;

    MCNAPI bool $hasChildrenSource() const;

    MCNAPI bool $isSecondaryPowered() const;

    MCNAPI void $removeFromAnySourceList(::BaseCircuitComponent const*);

    MCNAPI ::CircuitComponentType $getCircuitComponentType() const;

    MCNAPI ::CircuitComponentType $getCircuitComponentGroupType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
