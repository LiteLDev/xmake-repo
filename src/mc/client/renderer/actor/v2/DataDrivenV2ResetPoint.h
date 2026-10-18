#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct DataDrivenV2ResetPoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> mProcessedDataDrivenRenderers_DataDrivenRenderersCount;
    ::ll::TypedStorage<8, 8, ulong> mProcessedDataDrivenRenderers_DataDrivenRenderersInfrequentDataCount;
    ::ll::TypedStorage<8, 8, ulong> mProcessedDataDrivenRenderers_DataDrivenRendererCountsCount;
    ::ll::TypedStorage<8, 8, ulong> mProcessedDataDrivenRenderers_RenderControllerResourceOffsetsCount;
    ::ll::TypedStorage<8, 8, ulong> mProcessedDataDrivenRenderers_RenderControllerResourceExtendedOffsetsCount;
    ::ll::TypedStorage<8, 8, ulong> mProcessedDataDrivenRenderers_RenderControllerUniformDataCount;
    ::ll::TypedStorage<8, 8, ulong> mProcessedDataDrivenRenderers_RenderControllerPartVisibilityCount;
    ::ll::TypedStorage<8, 8, ulong> mRenderControllerResources_SkeletonResourcesCount;
    ::ll::TypedStorage<8, 8, ulong> mRenderControllerResources_AssociatedGeometryCount;
    ::ll::TypedStorage<8, 8, ulong> mRenderControllerResources_MeshResourcesCount;
    ::ll::TypedStorage<8, 8, ulong> mRenderControllerResources_GeometryDataCount;
    ::ll::TypedStorage<8, 8, ulong> mRenderControllerResources_BakedMaterialsCount;
    ::ll::TypedStorage<8, 8, ulong> mRenderControllerResources_BakedTexturesCount;
    ::ll::TypedStorage<8, 8, ulong> mRenderControllerResources_DynamicResourceExpressionsCount;
    ::ll::TypedStorage<8, 8, ulong> mRenderControllerResources_ExtendedResourcesCount;
    ::ll::TypedStorage<8, 8, ulong> mRenderControllerResources_PartVisibilityExpressionsCount;
    ::ll::TypedStorage<8, 8, ulong> mRenderControllerResources_RenderControllerExpressionsCount;
    ::ll::TypedStorage<8, 8, ulong> mRenderControllerResources_RenderControllerConstantsCount;
    ::ll::TypedStorage<8, 8, ulong> mRenderControllerResources_LightMultiplierExpressionsCount;
    ::ll::TypedStorage<8, 8, ulong> mRenderControllerResources_LightMultiplierConstantsCount;
    ::ll::TypedStorage<8, 8, ulong> mDataDrivenRendererResources_SetupExpressionNodesCount;
    ::ll::TypedStorage<8, 8, ulong> mDataDrivenRendererResources_GlobalScaleExpressionNodesCount;
    ::ll::TypedStorage<8, 8, ulong> mDataDrivenRendererResources_GlobalScaleConstantsCount;
    ::ll::TypedStorage<8, 8, ulong> mDataDrivenRendererResources_ConditionalControllerExpressionOffsetsCount;
    ::ll::TypedStorage<8, 8, ulong> mDataDrivenRendererResources_ConditionalControllerExpressionsCount;
    ::ll::TypedStorage<8, 8, ulong> mDataDrivenRendererResources_TempComponentsCount;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct DataDrivenV2ResetPoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> mProcessedDataDrivenRenderers_DataDrivenRenderersCount;
    ::ll::TypedStorage<8, 8, uint64> mProcessedDataDrivenRenderers_DataDrivenRenderersInfrequentDataCount;
    ::ll::TypedStorage<8, 8, uint64> mProcessedDataDrivenRenderers_DataDrivenRendererCountsCount;
    ::ll::TypedStorage<8, 8, uint64> mProcessedDataDrivenRenderers_RenderControllerResourceOffsetsCount;
    ::ll::TypedStorage<8, 8, uint64> mProcessedDataDrivenRenderers_RenderControllerResourceExtendedOffsetsCount;
    ::ll::TypedStorage<8, 8, uint64> mProcessedDataDrivenRenderers_RenderControllerUniformDataCount;
    ::ll::TypedStorage<8, 8, uint64> mProcessedDataDrivenRenderers_RenderControllerPartVisibilityCount;
    ::ll::TypedStorage<8, 8, uint64> mRenderControllerResources_SkeletonResourcesCount;
    ::ll::TypedStorage<8, 8, uint64> mRenderControllerResources_AssociatedGeometryCount;
    ::ll::TypedStorage<8, 8, uint64> mRenderControllerResources_MeshResourcesCount;
    ::ll::TypedStorage<8, 8, uint64> mRenderControllerResources_GeometryDataCount;
    ::ll::TypedStorage<8, 8, uint64> mRenderControllerResources_BakedMaterialsCount;
    ::ll::TypedStorage<8, 8, uint64> mRenderControllerResources_BakedTexturesCount;
    ::ll::TypedStorage<8, 8, uint64> mRenderControllerResources_DynamicResourceExpressionsCount;
    ::ll::TypedStorage<8, 8, uint64> mRenderControllerResources_ExtendedResourcesCount;
    ::ll::TypedStorage<8, 8, uint64> mRenderControllerResources_PartVisibilityExpressionsCount;
    ::ll::TypedStorage<8, 8, uint64> mRenderControllerResources_RenderControllerExpressionsCount;
    ::ll::TypedStorage<8, 8, uint64> mRenderControllerResources_RenderControllerConstantsCount;
    ::ll::TypedStorage<8, 8, uint64> mRenderControllerResources_LightMultiplierExpressionsCount;
    ::ll::TypedStorage<8, 8, uint64> mRenderControllerResources_LightMultiplierConstantsCount;
    ::ll::TypedStorage<8, 8, uint64> mDataDrivenRendererResources_SetupExpressionNodesCount;
    ::ll::TypedStorage<8, 8, uint64> mDataDrivenRendererResources_GlobalScaleExpressionNodesCount;
    ::ll::TypedStorage<8, 8, uint64> mDataDrivenRendererResources_GlobalScaleConstantsCount;
    ::ll::TypedStorage<8, 8, uint64> mDataDrivenRendererResources_ConditionalControllerExpressionOffsetsCount;
    ::ll::TypedStorage<8, 8, uint64> mDataDrivenRendererResources_ConditionalControllerExpressionsCount;
    ::ll::TypedStorage<8, 8, uint64> mDataDrivenRendererResources_TempComponentsCount;
    // NOLINTEND
};
#else // @header-generator platform
struct DataDrivenV2ResetPoint {};
#endif // @header-generator platform
#endif // @header-generator platform
