#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/BaseAttributeMap.h"

struct AttributesComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::BaseAttributeMap> mAttributes;
    // NOLINTEND

public:
    // prevent constructor by default
    AttributesComponent& operator=(AttributesComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~AttributesComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
