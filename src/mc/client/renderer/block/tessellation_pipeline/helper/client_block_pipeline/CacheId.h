#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace ClientBlockPipeline {

#if defined(LL_PLAT_A) // @header-generator platform
struct CacheId : public ::type_safe::strong_typedef<ClientBlockPipeline::CacheId, ushort> {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ClientBlockPipeline::CacheId index(::BlockPos const&);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct CacheId : public ::type_safe::strong_typedef<::ClientBlockPipeline::CacheId, ushort> {};
#else // @header-generator platform
struct CacheId {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ClientBlockPipeline
