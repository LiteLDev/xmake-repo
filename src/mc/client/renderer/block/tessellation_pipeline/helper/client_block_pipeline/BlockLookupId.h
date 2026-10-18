#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlockPipeline {

#if defined(LL_PLAT_A) // @header-generator platform
struct BlockLookupId : public ::type_safe::strong_typedef<ClientBlockPipeline::BlockLookupId, ushort>,
                       public ::type_safe::strong_typedef_op::equality_comparison<ClientBlockPipeline::BlockLookupId> {
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct BlockLookupId
: public ::type_safe::strong_typedef<::ClientBlockPipeline::BlockLookupId, ushort>,
  public ::type_safe::strong_typedef_op::equality_comparison<::ClientBlockPipeline::BlockLookupId> {};
#else // @header-generator platform
struct BlockLookupId {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ClientBlockPipeline
