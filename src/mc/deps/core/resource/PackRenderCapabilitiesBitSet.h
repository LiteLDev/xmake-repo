#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
#include "mc/deps/core/renderer/RenderCapability.h"

#if defined(LL_PLAT_A) // @header-generator platform
class PackRenderCapabilitiesBitSet : public ::Bedrock::EnumSet<RenderCapability, (RenderCapability)14> {};
#else // @header-generator platform
class PackRenderCapabilitiesBitSet : public ::Bedrock::EnumSet<::RenderCapability, 14> {};
#endif // @header-generator platform
