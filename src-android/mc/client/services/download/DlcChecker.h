#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/download/DlcCheckResult.h"
#include "mc/client/services/download/DlcDownloadResult.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DlcDependency;
class IAppPlatform;
class IContentAcquisition;
class IDlcBatchModel;
class IDlcBatcher;
class IDlcValidation;
class IEntitlementManager;
class IStoreCatalogRepository;
struct DlcValidationState;
// clang-format on

class DlcChecker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mStorageCheckActive;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::DlcCheckResult check(
        std::shared_ptr<DlcValidationState>,
        ::IDlcValidation&,
        ::IDlcBatchModel&,
        ::IContentAcquisition&,
        ::IStoreCatalogRepository&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>,
        std::weak_ptr<bool>,
        ::Bedrock::NonOwnerPointer<IAppPlatform> const&
    );

    MCNAPI ::DlcDownloadResult download(std::shared_ptr<DlcValidationState>, ::IDlcBatcher&) const;

    MCNAPI bool hasExpiredRealmsPlusSubscription(::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>) const;

    MCNAPI bool hasRealmsPlusDlcDependencies(std::vector<DlcDependency> const&, ::IStoreCatalogRepository const&) const;

    MCNAPI void setStorageCheckActive(bool);
    // NOLINTEND
};
