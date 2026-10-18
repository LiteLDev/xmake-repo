#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JSShapeProperty {
public:
    // member variables
    // NOLINTBEGIN
    uint                       mUnkd5c56e : 26;
    uint                       mUnk6c948a : 6;
    ::ll::UntypedStorage<4, 4> mUnk86d293;
    // NOLINTEND

public:
    // prevent constructor by default
    JSShapeProperty& operator=(JSShapeProperty const&);
    JSShapeProperty(JSShapeProperty const&);
    JSShapeProperty();
};
#endif // @header-generator platform
