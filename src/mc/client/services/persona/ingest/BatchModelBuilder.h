#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class IContentAcquisition;
class IStoreCatalogRepository;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace persona::ingest {

#if defined(LL_PLAT_A) // @header-generator platform
class BatchModelBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IContentAcquisition&> mContentAcquisition;
    ::ll::UntypedStorage<8, 8>                       mStoreRepository;
    // NOLINTEND

public:
    // prevent constructor by default
    BatchModelBuilder& operator=(BatchModelBuilder const&);
    BatchModelBuilder(BatchModelBuilder const&);
    BatchModelBuilder();
};
#else // @header-generator platform
class BatchModelBuilder {};
#endif // @header-generator platform

} // namespace persona::ingest
