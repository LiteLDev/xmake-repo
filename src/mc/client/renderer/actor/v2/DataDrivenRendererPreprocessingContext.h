#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/ddrv2__PoolHandle.h"

// auto generated forward declare list
// clang-format off
class DataDrivenRendererRegistry;
class MinecraftGameplayGraphicsResources;
struct DataDrivenRendererPool;
namespace mce { struct BufferResourceService; }
// clang-format on

struct DataDrivenRendererPreprocessingContext {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, std::reference_wrapper<DataDrivenRendererRegistry>> mResources;
    ::ll::UntypedStorage<8, 8> mTargetPool;
    ::ll::TypedStorage<8, 16, std::weak_ptr<mce::BufferResourceService>> mBufferResourceService;
    ::ll::TypedStorage<8, 8, std::reference_wrapper<MinecraftGameplayGraphicsResources>> mMinecraftGameplayGraphicsResources;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/actor/v2/ddrv2/PoolHandle.h"

// auto generated forward declare list
// clang-format off
class DataDrivenRendererRegistry;
class MinecraftGameplayGraphicsResources;
struct DataDrivenRendererPool;
namespace mce { struct BufferResourceService; }
// clang-format on

struct DataDrivenRendererPreprocessingContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::DataDrivenRendererRegistry>> mResources;
    ::ll::TypedStorage<8, 8, ::ddrv2::PoolHandle<::DataDrivenRendererPool>>          mTargetPool;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::mce::BufferResourceService>>         mBufferResourceService;
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::MinecraftGameplayGraphicsResources>>
        mMinecraftGameplayGraphicsResources;
    // NOLINTEND
};
#else // @header-generator platform
struct DataDrivenRendererPreprocessingContext {};
#endif // @header-generator platform
#endif // @header-generator platform
