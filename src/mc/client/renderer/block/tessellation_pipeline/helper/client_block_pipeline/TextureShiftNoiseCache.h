#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/ArrayCache.h"
#include "mc/util/NewType.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/ArrayCache.h"
#include "mc/util/NewType.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ClientBlockPipeline {

#if defined(LL_PLAT_A) // @header-generator platform
struct TextureShiftNoiseCache : public ::NewType<ClientBlockPipeline::ArrayCache<float>> {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct TextureShiftNoiseCache : public ::NewType<::ClientBlockPipeline::ArrayCache<float>> {};
#else // @header-generator platform
struct TextureShiftNoiseCache {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ClientBlockPipeline
