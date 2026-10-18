#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/sdl/ModalButtonInfo.h"
#include "mc/client/store/sidebar/Type.h"

// auto generated forward declare list
// clang-format off
class StoreVisualStyleContainer;
// clang-format on

namespace SDL {

struct Page {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                       mPageId;
    ::ll::TypedStorage<8, 24, std::string>                       mPageName;
    ::ll::TypedStorage<8, 24, std::string>                       mInventoryVersion;
    ::ll::TypedStorage<8, 24, std::string>                       mUserListVersion;
    ::ll::TypedStorage<4, 4, ::sidebar::navigationLayout::Type>  mSidebarLayout;
    ::ll::TypedStorage<1, 1, bool>                               mPageRefresh;
    ::ll::TypedStorage<4, 4, int>                                mRowCount;
    ::ll::TypedStorage<4, 4, int>                                mItemCount;
    ::ll::TypedStorage<4, 4, int>                                mImageCount;
    ::ll::UntypedStorage<8, 40>                                  mVisualStyleContainer;
    ::ll::TypedStorage<8, 24, std::vector<SDL::ModalButtonInfo>> mModalButtons;
    // NOLINTEND
};

} // namespace SDL
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
