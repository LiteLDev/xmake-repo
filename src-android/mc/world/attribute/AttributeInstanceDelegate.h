#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/AttributeInstanceHandle.h"

// auto generated forward declare list
// clang-format off
class AttributeBuff;
class AttributeInstance;
class AttributeInstanceConstRef;
class AttributeInstanceRef;
struct AttributeModificationContext;
// clang-format on

class AttributeInstanceDelegate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::AttributeInstanceHandle> mAttributeHandle;
    // NOLINTEND

public:
    // prevent constructor by default
    AttributeInstanceDelegate();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AttributeInstanceDelegate();

    virtual void tick(::AttributeInstance&, ::AttributeModificationContext&);

    virtual void notify(long, ::AttributeModificationContext&);

    virtual bool willChange(float, float, ::AttributeBuff const&);

    virtual std::optional<float> change(float, float, ::AttributeBuff const&);

    virtual float getBuffValueWithModifiers(::AttributeBuff const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $notify(long, ::AttributeModificationContext&);

    MCNAPI bool $willChange(float, float, ::AttributeBuff const&);

    MCNAPI std::optional<float> $change(float, float, ::AttributeBuff const&);

    MCNAPI float $getBuffValueWithModifiers(::AttributeBuff const&) const;
    // NOLINTEND
};
