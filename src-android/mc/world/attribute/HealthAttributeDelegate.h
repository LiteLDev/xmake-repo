#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/AttributeInstanceDelegate.h"

// auto generated forward declare list
// clang-format off
class AttributeBuff;
class AttributeInstance;
class AttributeInstanceConstRef;
class Mob;
struct AttributeModificationContext;
// clang-format on

class HealthAttributeDelegate : public ::AttributeInstanceDelegate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>    mTickCounter;
    ::ll::TypedStorage<8, 8, ::Mob*> mMob;
    // NOLINTEND

public:
    // prevent constructor by default
    HealthAttributeDelegate();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HealthAttributeDelegate();

    virtual void tick(::AttributeInstance&, ::AttributeModificationContext&);

    virtual bool willChange(float, float, ::AttributeBuff const&);

    virtual std::optional<float> change(float, float, ::AttributeBuff const&);

    virtual float getBuffValueWithModifiers(::AttributeBuff const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HealthAttributeDelegate(::AttributeInstanceConstRef, ::Mob*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::AttributeInstanceConstRef, ::Mob*);
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

    MCNAPI bool $willChange(float, float, ::AttributeBuff const&);

    MCNAPI std::optional<float> $change(float, float, ::AttributeBuff const&);

    MCNAPI float $getBuffValueWithModifiers(::AttributeBuff const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
