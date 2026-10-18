#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/ddrv2__PoolHandle.h"

// auto generated forward declare list
// clang-format off
class DataDrivenRendererRegistry;
struct AttachableRendererPool;
// clang-format on

struct AttachablesPreprocessingContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::reference_wrapper<DataDrivenRendererRegistry>> mResources;
    ::ll::UntypedStorage<8, 8>                                                   mTargetPool;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/actor/v2/ddrv2/PoolHandle.h"

// auto generated forward declare list
// clang-format off
class DataDrivenRendererRegistry;
struct AttachableRendererPool;
// clang-format on

struct AttachablesPreprocessingContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::DataDrivenRendererRegistry>> mResources;
    ::ll::TypedStorage<8, 8, ::ddrv2::PoolHandle<::AttachableRendererPool>>          mTargetPool;
    // NOLINTEND
};
#else // @header-generator platform
struct AttachablesPreprocessingContext {};
#endif // @header-generator platform
#endif // @header-generator platform
