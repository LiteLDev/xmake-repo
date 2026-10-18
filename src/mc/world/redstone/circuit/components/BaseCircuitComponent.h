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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::CircuitComponentList>                         mSources;
    ::ll::TypedStorage<8, 16, ::Core::RefCountedSet<::BaseCircuitComponent*>> mDestinations;
    ::ll::TypedStorage<1, 1, bool>                                            mIgnoreFirstUpdate;
    ::ll::TypedStorage<1, 1, bool>                                            mIsFirstTime;
    ::ll::TypedStorage<1, 1, bool>                                            mNeedsUpdate;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                     mPos;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                     mChunkPosition;
    ::ll::TypedStorage<1, 1, bool>                                            mShouldEvaluate;
    ::ll::TypedStorage<2, 2, short>                                           mStrength;
    ::ll::TypedStorage<2, 2, short>                                           mOldStrength;
    ::ll::TypedStorage<1, 1, uchar>                                           mDirection;
    ::ll::TypedStorage<1, 1, bool>                                            mAllowPowerUp;
    ::ll::TypedStorage<1, 1, bool>                                            mAllowPowerDown;
    ::ll::TypedStorage<1, 1, bool>                                            mRemoved;
    ::ll::TypedStorage<1, 1, bool>                                            mConsumePowerAnyDirection;
    ::ll::TypedStorage<8, 8, ::CircuitComponentType>                          mCircuitComponentType;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BaseCircuitComponent();

    virtual int getStrength() const;

    virtual int getDirection() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setOldStrength(short);
#else // @header-generator platform
    virtual void setOldStrength(short strength);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setStrength(int);
#else // @header-generator platform
    virtual void setStrength(int strength);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setDirection(uchar);
#else // @header-generator platform
    virtual void setDirection(uchar direction);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setConsumePowerAnyDirection(bool);
#else // @header-generator platform
    virtual void setConsumePowerAnyDirection(bool canConsumePowerAnyDirection);
#endif // @header-generator platform

    virtual bool canConsumePowerAnyDirection() const;

    virtual bool canConsumerPower() const;

    virtual bool canStopPower() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setStopPower(bool);
#else // @header-generator platform
    virtual void setStopPower(bool bPower);
#endif // @header-generator platform

    virtual bool needsUpdate();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void removeSource(::BlockPos const&, ::BaseCircuitComponent const*);
#else // @header-generator platform
    virtual void removeSource(::BlockPos const& posSource, ::BaseCircuitComponent const* pComponent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool addSource(::CircuitSceneGraph&, ::CircuitTrackingInfo const&, int&, bool&);
#else // @header-generator platform
    virtual bool
    addSource(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, int& dampening, bool& bDirectlyPowered);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool allowConnection(::CircuitSceneGraph&, ::CircuitTrackingInfo const&, bool&);
#else // @header-generator platform
    virtual bool allowConnection(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, bool& bDirectlyPowered);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void checkLock(::CircuitSystem&, ::BlockPos const&);
#else // @header-generator platform
    virtual void checkLock(::CircuitSystem& system, ::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool evaluate(::CircuitSystem&, ::BlockPos const&);
#else // @header-generator platform
    virtual bool evaluate(::CircuitSystem& system, ::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void cacheValues(::CircuitSystem&, ::BlockPos const&);
#else // @header-generator platform
    virtual void cacheValues(::CircuitSystem& system, ::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void updateDependencies(::CircuitSceneGraph&, ::BlockPos const&);
#else // @header-generator platform
    virtual void updateDependencies(::CircuitSceneGraph& system, ::BlockPos const& pos);
#endif // @header-generator platform

    virtual ::RedstoneLogicExecutionFlags getLogicExecutionFlags() const;

    virtual bool allowIndirect() const;

    virtual bool isHalfPulse() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasSource(::BaseCircuitComponent const&) const;
#else // @header-generator platform
    virtual bool hasSource(::BaseCircuitComponent const& source) const;
#endif // @header-generator platform

    virtual bool hasChildrenSource() const;

    virtual bool isSecondaryPowered() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void removeFromAnySourceList(::BaseCircuitComponent const*);
#else // @header-generator platform
    virtual void removeFromAnySourceList(::BaseCircuitComponent const* component);
#endif // @header-generator platform

    virtual ::CircuitComponentType getCircuitComponentType() const;

    virtual ::CircuitComponentType getCircuitComponentGroupType() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BaseCircuitComponent();
#else // @header-generator platform
    MCAPI BaseCircuitComponent();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addSourceItem(::CircuitComponentList::Item const&);
#else // @header-generator platform
    MCAPI void addSourceItem(::CircuitComponentList::Item const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI short getOldStrength() const;

    MCNAPI bool hasDirectPower();

    MCNAPI CircuitComponentList::Item* removeFromSourceAndDestinationList(CircuitComponentList::Item*);

    MCNAPI bool trackPowerSource(::CircuitTrackingInfo const&, int, bool, int, bool);
#else // @header-generator platform
    MCAPI bool trackPowerSource(
        ::CircuitTrackingInfo const& info,
        int                          dampening,
        bool                         directlyPowered,
        int                          data,
        bool                         isDirectional
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void* $ctor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getStrength() const;
#else // @header-generator platform
    MCFOLD int $getStrength() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getDirection() const;
#else // @header-generator platform
    MCAPI int $getDirection() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setOldStrength(short);
#else // @header-generator platform
    MCAPI void $setOldStrength(short strength);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setStrength(int);
#else // @header-generator platform
    MCAPI void $setStrength(int strength);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setDirection(uchar);
#else // @header-generator platform
    MCAPI void $setDirection(uchar direction);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setConsumePowerAnyDirection(bool);
#else // @header-generator platform
    MCAPI void $setConsumePowerAnyDirection(bool canConsumePowerAnyDirection);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canConsumePowerAnyDirection() const;
#else // @header-generator platform
    MCAPI bool $canConsumePowerAnyDirection() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canConsumerPower() const;
#else // @header-generator platform
    MCFOLD bool $canConsumerPower() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canStopPower() const;
#else // @header-generator platform
    MCFOLD bool $canStopPower() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setStopPower(bool);
#else // @header-generator platform
    MCFOLD void $setStopPower(bool bPower);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $needsUpdate();
#else // @header-generator platform
    MCAPI bool $needsUpdate();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $removeSource(::BlockPos const&, ::BaseCircuitComponent const*);
#else // @header-generator platform
    MCAPI void $removeSource(::BlockPos const& posSource, ::BaseCircuitComponent const* pComponent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $addSource(::CircuitSceneGraph&, ::CircuitTrackingInfo const&, int&, bool&);
#else // @header-generator platform
    MCFOLD bool
    $addSource(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, int& dampening, bool& bDirectlyPowered);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $allowConnection(::CircuitSceneGraph&, ::CircuitTrackingInfo const&, bool&);
#else // @header-generator platform
    MCFOLD bool $allowConnection(::CircuitSceneGraph& graph, ::CircuitTrackingInfo const& info, bool& bDirectlyPowered);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $checkLock(::CircuitSystem&, ::BlockPos const&);
#else // @header-generator platform
    MCFOLD void $checkLock(::CircuitSystem& system, ::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $evaluate(::CircuitSystem&, ::BlockPos const&);
#else // @header-generator platform
    MCFOLD bool $evaluate(::CircuitSystem& system, ::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $cacheValues(::CircuitSystem&, ::BlockPos const&);
#else // @header-generator platform
    MCFOLD void $cacheValues(::CircuitSystem& system, ::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $updateDependencies(::CircuitSceneGraph&, ::BlockPos const&);
#else // @header-generator platform
    MCFOLD void $updateDependencies(::CircuitSceneGraph& system, ::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::RedstoneLogicExecutionFlags $getLogicExecutionFlags() const;
#else // @header-generator platform
    MCFOLD ::RedstoneLogicExecutionFlags $getLogicExecutionFlags() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $allowIndirect() const;
#else // @header-generator platform
    MCFOLD bool $allowIndirect() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isHalfPulse() const;
#else // @header-generator platform
    MCFOLD bool $isHalfPulse() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasSource(::BaseCircuitComponent const&) const;
#else // @header-generator platform
    MCAPI bool $hasSource(::BaseCircuitComponent const& source) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasChildrenSource() const;
#else // @header-generator platform
    MCFOLD bool $hasChildrenSource() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isSecondaryPowered() const;
#else // @header-generator platform
    MCFOLD bool $isSecondaryPowered() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $removeFromAnySourceList(::BaseCircuitComponent const*);
#else // @header-generator platform
    MCAPI void $removeFromAnySourceList(::BaseCircuitComponent const* component);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CircuitComponentType $getCircuitComponentType() const;
#else // @header-generator platform
    MCFOLD ::CircuitComponentType $getCircuitComponentType() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CircuitComponentType $getCircuitComponentGroupType() const;
#else // @header-generator platform
    MCAPI ::CircuitComponentType $getCircuitComponentGroupType() const;


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
