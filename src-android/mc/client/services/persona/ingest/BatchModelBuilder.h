#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IContentAcquisition;
class IStoreCatalogRepository;
// clang-format on

namespace persona::ingest {

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

} // namespace persona::ingest
