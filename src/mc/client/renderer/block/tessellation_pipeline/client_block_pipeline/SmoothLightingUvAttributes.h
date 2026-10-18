#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/client_block_pipeline/FaceAttribute.h"
#include "mc/client/renderer/block/tessellation_pipeline/client_block_pipeline/QuadVertexBrightnessUvs.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/client_block_pipeline/FaceAttribute.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlockPipeline { struct QuadVertexBrightnessUvs; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ClientBlockPipeline {

#if defined(LL_PLAT_A) // @header-generator platform
struct SmoothLightingUvAttributes
: public ::ClientBlockPipeline::FaceAttribute<ClientBlockPipeline::QuadVertexBrightnessUvs> {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct SmoothLightingUvAttributes
: public ::ClientBlockPipeline::FaceAttribute<::ClientBlockPipeline::QuadVertexBrightnessUvs> {};
#else // @header-generator platform
struct SmoothLightingUvAttributes {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ClientBlockPipeline
