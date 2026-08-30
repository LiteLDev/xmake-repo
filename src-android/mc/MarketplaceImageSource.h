#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/ILayoutImageSource.h"
#include "mc/LayoutImageResult.h"
#include "mc/deps/core/threading/SharedAsync.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ContentCatalogService;
// clang-format on

class MarketplaceImageSource : public ::ILayoutImageSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mCatalogService;
    ::ll::UntypedStorage<8, 40> mDownloadsByUrl;
    // NOLINTEND
};
