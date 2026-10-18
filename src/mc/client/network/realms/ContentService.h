#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/network/realms/ContentType.h"
#include "mc/client/network/realms/GenericStatus.h"
#include "mc/deps/core/resource/PackType.h"

// auto generated forward declare list
// clang-format off
class IStoreCatalogItem;
namespace Realms { class IContentApi; }
namespace Realms { struct Content; }
namespace Realms { struct RealmId; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
class ContentService {
public:
    // ContentService inner types define
    using GenericCallback = std::function<void(Realms::GenericStatus)>;

    using FetchAppliedContentCallback = std::function<void(Realms::GenericStatus, std::vector<Realms::Content>)>;

    using CheckIfPackExistInCloudCallback = std::function<void(Realms::GenericStatus, bool)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<Realms::IContentApi>> mContentApi;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentService();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void applyContent(
        ::Realms::RealmId const,
        std::vector<Realms::Content> const&,
        std::function<void(Realms::GenericStatus)>,
        bool
    );

    MCNAPI void
    checkIfPackExistInCloud(std::string const&, std::string const&, std::function<void(Realms::GenericStatus, bool)>);

    MCNAPI void fetchAppliedContent(
        ::Realms::RealmId const,
        std::function<void(Realms::GenericStatus, std::vector<Realms::Content>)>
    );

    MCNAPI void getApplicableContent(::IStoreCatalogItem const&, std::vector<Realms::Content>&, bool);

    MCNAPI ::Realms::ContentType getContentType(::PackType const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool hasWorldTemplate(::IStoreCatalogItem const&);

    MCNAPI static bool isContentApplicable(::IStoreCatalogItem const&, bool);
    // NOLINTEND
};
#else // @header-generator platform
class ContentService {};
#endif // @header-generator platform

} // namespace Realms
