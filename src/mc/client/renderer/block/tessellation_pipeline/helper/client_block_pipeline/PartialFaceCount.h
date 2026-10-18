#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlockPipeline {

#if defined(LL_PLAT_A) // @header-generator platform
struct PartialFaceCount
: public ::type_safe::strong_typedef<ClientBlockPipeline::PartialFaceCount, ulong>,
  public ::type_safe::strong_typedef_op::equality_comparison<ClientBlockPipeline::PartialFaceCount> {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct PartialFaceCount
: public ::type_safe::strong_typedef<::ClientBlockPipeline::PartialFaceCount, uint64>,
  public ::type_safe::strong_typedef_op::equality_comparison<::ClientBlockPipeline::PartialFaceCount> {};
#else // @header-generator platform
struct PartialFaceCount {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ClientBlockPipeline
