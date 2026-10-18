#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Services { struct ServiceError; }
namespace Bedrock::Services::layout::api { class ILayoutApi; }
namespace Bedrock::Services::layout::model { struct BulkFabsResponseData; }
namespace Bedrock::Services::layout::model { struct LayoutResponseData; }
// clang-format on

class LayoutService : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 240, ::TaskGroup> mTaskGroup;
    ::ll::UntypedStorage<8, 8>              mLayoutApi;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LayoutService();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LayoutService();

    MCNAPI void setLayoutApi(std::unique_ptr<Bedrock::Services::layout::api::ILayoutApi>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class LayoutService {};
#endif // @header-generator platform
