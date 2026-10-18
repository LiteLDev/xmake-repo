#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/actor/v2/AttachablesResources.h"

// auto generated forward declare list
// clang-format off
struct BakedAttachableData;
// clang-format on

struct AttachableRendererPool {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::AttachablesResources>               mAttachableResources;
    ::ll::TypedStorage<8, 24, ::std::vector<::BakedAttachableData>> mAttachables;
    // NOLINTEND
};
#else // @header-generator platform
struct AttachableRendererPool {};
#endif // @header-generator platform
#endif // @header-generator platform
