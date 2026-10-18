#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/client/renderer/actor/v2/ActorIndex.h"
#include "mc/ddrv2__PoolHandle.h"

// auto generated forward declare list
// clang-format off
struct DataDrivenRendererPool;
// clang-format on
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/client/renderer/actor/v2/ddrv2/PoolHandle.h"

// auto generated forward declare list
// clang-format off
struct ActorIndex;
struct DataDrivenRendererPool;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

struct DataDrivenRendererDerivitiveData {
public:
    // DataDrivenRendererDerivitiveData inner types declare
    // clang-format off
    struct RenderControllerEntry;
    // clang-format on

    // DataDrivenRendererDerivitiveData inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct RenderControllerEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>     mPool;
        ::ll::TypedStorage<4, 4, uint> mRenderControllerIdx;
        ::ll::TypedStorage<4, 4, uint> mSubRenderLayerIndex;
        ::ll::TypedStorage<4, 4, uint> mCount;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<DataDrivenRendererDerivitiveData::RenderControllerEntry>> mRenderControllers;
    ::ll::TypedStorage<8, 24, std::vector<ActorIndex>> mRenderControllerToActorIdx;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DataDrivenRendererDerivitiveData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct RenderControllerEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ddrv2::PoolHandle<::DataDrivenRendererPool>> mPool;
        ::ll::TypedStorage<4, 4, uint>                                          mRenderControllerIdx;
        ::ll::TypedStorage<4, 4, uint>                                          mSubRenderLayerIndex;
        ::ll::TypedStorage<4, 4, uint>                                          mCount;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::DataDrivenRendererDerivitiveData::RenderControllerEntry>>
                                                           mRenderControllers;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorIndex>> mRenderControllerToActorIdx;
    // NOLINTEND
#else // @header-generator platform
    struct RenderControllerEntry {};
#endif // @header-generator platform
#endif // @header-generator platform
};
