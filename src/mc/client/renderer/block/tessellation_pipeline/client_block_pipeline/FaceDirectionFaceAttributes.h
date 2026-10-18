#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/client_block_pipeline/FaceAttribute.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/client_block_pipeline/FaceAttribute.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ClientBlockPipeline {

#if defined(LL_PLAT_A) // @header-generator platform
struct FaceDirectionFaceAttributes : public ::ClientBlockPipeline::FaceAttribute<uchar> {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct FaceDirectionFaceAttributes : public ::ClientBlockPipeline::FaceAttribute<uchar> {};
#else // @header-generator platform
struct FaceDirectionFaceAttributes {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ClientBlockPipeline
