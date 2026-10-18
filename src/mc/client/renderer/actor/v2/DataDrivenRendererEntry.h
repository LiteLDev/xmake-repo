#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/ddrv2__PoolItemHandle.h"

// auto generated forward declare list
// clang-format off
struct DataDrivenRendererPool;
// clang-format on

struct DataDrivenRendererEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>     mHandle;
    ::ll::TypedStorage<4, 4, uint> mCount;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/actor/v2/ddrv2/PoolItemHandle.h"

// auto generated forward declare list
// clang-format off
struct DataDrivenRendererPool;
// clang-format on

struct DataDrivenRendererEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ddrv2::PoolItemHandle<::DataDrivenRendererPool>> mHandle;
    ::ll::TypedStorage<4, 4, uint>                                              mCount;
    // NOLINTEND
};
#else // @header-generator platform
struct DataDrivenRendererEntry {};
#endif // @header-generator platform
#endif // @header-generator platform
