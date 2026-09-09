#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/AttributeInstanceRef.h"
#include "mc/world/attribute/AttributeModificationContext.h"

// auto generated forward declare list
// clang-format off
struct AttributeInstanceForwarder;
struct MutableAttributeWithContext;
// clang-format on

struct ValidMutableAttributeWithContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::AttributeInstanceRef const>         mInstance;
    ::ll::TypedStorage<8, 8, ::AttributeModificationContext const> mContext;
    // NOLINTEND

public:
    // prevent constructor by default
    ValidMutableAttributeWithContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ValidMutableAttributeWithContext(::MutableAttributeWithContext const&);

    MCNAPI ::AttributeInstanceForwarder* operator->();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::MutableAttributeWithContext const&);
    // NOLINTEND
};
