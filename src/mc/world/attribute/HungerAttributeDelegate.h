#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/AttributeInstanceDelegate.h"

// auto generated forward declare list
// clang-format off
class AttributeInstance;
#if defined(LL_PLAT_A) // @header-generator platform
class AttributeInstanceConstRef;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    HungerAttributeDelegate();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~HungerAttributeDelegate();
#else // @header-generator platform
    virtual void tick(::AttributeInstance& mutableInstance, ::AttributeModificationContext& context) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual void notify(int64 type, ::AttributeModificationContext& context) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick(::AttributeInstance&, ::AttributeModificationContext&);
#else // @header-generator platform
    MCAPI void $tick(::AttributeInstance& mutableInstance, ::AttributeModificationContext& context);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $notify(long, ::AttributeModificationContext&);
#else // @header-generator platform
    MCAPI void $notify(int64 type, ::AttributeModificationContext& context);


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
