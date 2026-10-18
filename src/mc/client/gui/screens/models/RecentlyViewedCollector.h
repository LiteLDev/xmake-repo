#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/CatalogPackCollector.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ContentCatalogService;
class IEntitlementManager;
class PersonaClient;
class SkinPackModel;
namespace mce { class UUID; }
// clang-format on

class RecentlyViewedCollector : public ::CatalogPackCollector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mOrderedRecentSkinPackIds;
    // NOLINTEND

public:
    // prevent constructor by default
    RecentlyViewedCollector();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~RecentlyViewedCollector() = default;

    virtual void collect(::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>, ::PersonaClient&, std::vector<std::shared_ptr<SkinPackModel>>&, std::unordered_set<mce::UUID>&);
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/CatalogPackCollector.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IEntitlementManager;
class PersonaClient;
class SkinPackModel;
namespace mce { class UUID; }
// clang-format on

class RecentlyViewedCollector : public ::CatalogPackCollector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mOrderedRecentSkinPackIds;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RecentlyViewedCollector() /*override*/ = default;

    virtual void collect(
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>,
        ::PersonaClient&,
        ::std::vector<::std::shared_ptr<::SkinPackModel>>&,
        ::std::unordered_set<::mce::UUID>&
    ) /*override*/;
    // NOLINTEND
};
#else // @header-generator platform
class RecentlyViewedCollector {};
#endif // @header-generator platform
#endif // @header-generator platform
