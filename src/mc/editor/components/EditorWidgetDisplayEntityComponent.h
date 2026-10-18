#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"

struct EditorWidgetDisplayEntityComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID> displayWidgetId;
    ::ll::TypedStorage<8, 16, ::mce::UUID> displayWidgetComponentId;
    // NOLINTEND
};
#endif // @header-generator platform
