#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/GetAttachPositionViews.h"

struct GetAttachPositionViewsComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 480, ::GetAttachPositionViews> mViews;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    GetAttachPositionViewsComponent& operator=(GetAttachPositionViewsComponent const&);
    GetAttachPositionViewsComponent();
#else // @header-generator platform
#endif // @header-generator platform
};
