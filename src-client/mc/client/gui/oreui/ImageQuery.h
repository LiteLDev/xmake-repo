#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/FetchStatus.h"
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ILayoutImageSource;
namespace OreUI { class IResourceAllowList; }
// clang-format on

namespace OreUI {

class ImageQuery : public ::OreUI::QueryBase<OreUI::ImageQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152>            mFetchStatus;
    ::ll::UntypedStorage<8, 168>            mLocalPath;
    ::ll::UntypedStorage<8, 24>             mImageSource;
    ::ll::UntypedStorage<8, 24>             mResourceAllowList;
    ::ll::TypedStorage<8, 240, ::TaskGroup> mTaskGroup;
    // NOLINTEND
};

} // namespace OreUI
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
