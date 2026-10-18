#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/actor/v2/PreviousTransformationData.h"

struct DataDrivenRendererContinuousData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 144, ::PreviousTransformationData> mPreviousTransformationData;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/actor/v2/PreviousTransformationData.h"

struct DataDrivenRendererContinuousData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 144, ::PreviousTransformationData> mPreviousTransformationData;
    // NOLINTEND
};
#else // @header-generator platform
struct DataDrivenRendererContinuousData {};
#endif // @header-generator platform
#endif // @header-generator platform
