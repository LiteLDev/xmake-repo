#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/AttributeInstanceRef.h"
#include "mc/world/attribute/AttributeModificationContext.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct AttributeInstanceForwarder;
struct MutableAttributeWithContext;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
struct ValidMutableAttributeWithContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::AttributeInstanceRef const>         mInstance;
    ::ll::TypedStorage<8, 8, ::AttributeModificationContext const> mContext;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
};
