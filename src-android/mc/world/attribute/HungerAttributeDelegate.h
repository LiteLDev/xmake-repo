#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/AttributeInstanceDelegate.h"

// auto generated forward declare list
// clang-format off
class AttributeInstance;
class AttributeInstanceConstRef;
class Player;
struct AttributeModificationContext;
// clang-format on

class HungerAttributeDelegate : public ::AttributeInstanceDelegate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>       mActionTickTimer;
    ::ll::TypedStorage<4, 4, int>       mTickCounter;
    ::ll::TypedStorage<4, 4, float>     mLastFoodLevel;
    ::ll::TypedStorage<8, 8, ::Player*> mPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    HungerAttributeDelegate();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HungerAttributeDelegate();

    virtual void tick(::AttributeInstance&, ::AttributeModificationContext&);

    virtual void notify(long, ::AttributeModificationContext&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HungerAttributeDelegate(::AttributeInstanceConstRef, ::Player*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::AttributeInstanceConstRef, ::Player*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(::AttributeInstance&, ::AttributeModificationContext&);

    MCNAPI void $notify(long, ::AttributeModificationContext&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
