#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/AttributeInstanceRef.h"
#include "mc/world/attribute/AttributeModificationContext.h"

// auto generated forward declare list
// clang-format off
struct AttributeInstanceForwarder;
struct ValidMutableAttributeWithContext;
// clang-format on

struct MutableAttributeWithContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::AttributeInstanceRef>         mInstance;
    ::ll::TypedStorage<8, 8, ::AttributeModificationContext> mContext;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MutableAttributeWithContext(::ValidMutableAttributeWithContext const&);

    MCNAPI MutableAttributeWithContext(::AttributeInstanceRef, ::AttributeModificationContext);

    MCNAPI explicit operator bool() const;

    MCNAPI bool operator!=(std::nullptr_t) const;

    MCNAPI bool operator==(std::nullptr_t) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ValidMutableAttributeWithContext const&);

    MCNAPI void* $ctor(::AttributeInstanceRef, ::AttributeModificationContext);
    // NOLINTEND
};
