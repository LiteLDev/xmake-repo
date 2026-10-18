#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/client_block_pipeline/FaceAttribute.h"
#include "mc/deps/core/math/Vec2.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/client_block_pipeline/FaceAttribute.h"

// auto generated forward declare list
// clang-format off
class Vec2;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ClientBlockPipeline {

#if defined(LL_PLAT_A) // @header-generator platform
struct LightUvFaceAttributes : public ::ClientBlockPipeline::FaceAttribute<Vec2> {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct LightUvFaceAttributes : public ::ClientBlockPipeline::FaceAttribute<::Vec2> {};
#else // @header-generator platform
struct LightUvFaceAttributes {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ClientBlockPipeline
