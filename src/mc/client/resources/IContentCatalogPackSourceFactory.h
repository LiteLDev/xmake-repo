#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ContentCatalogPackSource;
class ContentCatalogService;
class IEntitlementManager;
namespace ContentManagerUtils { class ISourcesAsyncReloader; }
// clang-format on

class IContentCatalogPackSourceFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IContentCatalogPackSourceFactory() = default;

    virtual ::ContentCatalogPackSource& createContentCatalogPackSource(::gsl::not_null<Bedrock::NonOwnerPointer<ContentCatalogService>> const&, ::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>, std::weak_ptr<ContentManagerUtils::ISourcesAsyncReloader>&&, bool) = 0;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
class IContentCatalogPackSourceFactory {};
#endif // @header-generator platform
