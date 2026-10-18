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
struct AttributeModificationContext;
// clang-format on

class ExhaustionAttributeDelegate : public ::AttributeInstanceDelegate {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ExhaustionAttributeDelegate();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ExhaustionAttributeDelegate();

    virtual void tick(::AttributeInstance&, ::AttributeModificationContext&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ExhaustionAttributeDelegate(::AttributeInstanceConstRef);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::AttributeInstanceConstRef);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void tick(::AttributeInstance& mutableInstance, ::AttributeModificationContext& context) /*override*/;
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
