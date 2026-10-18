#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ContentCatalogService;
class ILayoutImageSource;
class MarketplaceImageSource;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_C) // @header-generator platform
class LazyLayoutImageSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::Bedrock::NotNullNonOwnerPtr<::ContentCatalogService>()>>
                                                                          mGetContentCatalogServiceProvider;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::MarketplaceImageSource>> mImageSource;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ILayoutImageSource> getOrCreate();
    // NOLINTEND
};
#else // @header-generator platform
class LazyLayoutImageSource {};
#endif // @header-generator platform

} // namespace OreUI
#endif // @header-generator platform
