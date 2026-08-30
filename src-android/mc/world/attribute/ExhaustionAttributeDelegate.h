#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/AttributeInstanceDelegate.h"

// auto generated forward declare list
// clang-format off
class AttributeInstance;
class AttributeInstanceConstRef;
struct AttributeModificationContext;
// clang-format on

class ExhaustionAttributeDelegate : public ::AttributeInstanceDelegate {
public:
    // prevent constructor by default
    ExhaustionAttributeDelegate();

public:
    // virtual functions
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(::AttributeInstance&, ::AttributeModificationContext&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
