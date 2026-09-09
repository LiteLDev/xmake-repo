#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/PDPSectionType.h"
#include "mc/client/services/catalog/StoreSearchInfo.h"

// auto generated forward declare list
// clang-format off
class CustomDocumentModifier;
class StoreVisualStyle;
namespace Json { class Value; }
namespace sidebar { class NavigationDocument; }
// clang-format on

struct StoreConfigCustom {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                  mStoreVersion;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                            mGlobalNotTags;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<PDPSectionType, std::string>>> mPDPLayout;
    ::ll::UntypedStorage<8, 24>                                                    mNavigationDocument;
    ::ll::UntypedStorage<8, 24>                                                    mUpsellVisualStyles;
    ::ll::TypedStorage<8, 152, ::StoreSearchInfo>                                  mSearchInfo;
    ::ll::TypedStorage<8, 24, std::string>                                         mLatestTextureVersion;
    // NOLINTEND
};
