#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/v2/BakedDataDrivenRenderData.h"
#include "mc/client/renderer/actor/v2/BakedDataDrivenRenderDataInfrequentAccess.h"
#include "mc/client/renderer/actor/v2/BakedRenderControllerPartVisibilityData.h"
#include "mc/client/renderer/actor/v2/BakedRenderControllerUniformData.h"
#include "mc/client/renderer/actor/v2/BakedResourceExtendedOffsets.h"
#include "mc/client/renderer/actor/v2/BakedResourceOffsets.h"
#include "mc/client/renderer/actor/v2/DataDrivenRenderCounts.h"
#include "mc/client/renderer/actor/v2/DataDrivenRendererResources.h"
#include "mc/client/renderer/actor/v2/RenderControllerResources.h"

struct DataDrivenRendererPool {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 312, ::RenderControllerResources> mRenderControllerResources;
    ::ll::TypedStorage<8, 144, ::DataDrivenRendererResources> mDataDrivenRendererResources;
    ::ll::TypedStorage<8, 24, std::vector<BakedDataDrivenRenderData>> mDataDrivenRenderers;
    ::ll::TypedStorage<8, 24, std::vector<BakedDataDrivenRenderDataInfrequentAccess>> mDataDrivenRenderersInfrequentData;
    ::ll::TypedStorage<8, 24, std::vector<DataDrivenRenderCounts>> mDataDrivenRendererCounts;
    ::ll::TypedStorage<8, 24, std::vector<BakedResourceOffsets>> mRenderControllerResourceOffsets;
    ::ll::TypedStorage<8, 24, std::vector<BakedResourceExtendedOffsets>> mRenderControllerResourceExtendedOffsets;
    ::ll::TypedStorage<8, 24, std::vector<BakedRenderControllerUniformData>> mRenderControllerUniformData;
    ::ll::TypedStorage<8, 24, std::vector<BakedRenderControllerPartVisibilityData>> mRenderControllerPartVisibility;
    // clang-format on
    // NOLINTEND
};
