#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class DlcDependency;
class DlcId;
class IContentKeyProvider;
class IPackManifestFactory;
class IPackSourceFactory;
struct PackIdVersion;
// clang-format on

class IDlcValidation {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IDlcValidation() = default;

    virtual std::vector<DlcDependency> collectDlcDependenciesForWorld(std::string const&, ::PackIdVersion const&, bool) = 0;

    virtual bool getNextUnownedDlcDependency(std::vector<DlcDependency> const&, ::DlcDependency&) const = 0;

    virtual std::vector<DlcDependency> getMissingOwnedDlcDependencies(std::vector<DlcDependency> const&) const = 0;

    virtual bool hasUnownedDlcDependencies(std::vector<DlcDependency> const&) const = 0;

    virtual bool hasOwnedMissingDlcDependencies(std::vector<DlcDependency> const&) const = 0;

    virtual ::DlcDependency getMissingOwnedDlcWorldTemplateDependency(std::vector<DlcDependency> const&, bool) const = 0;

    virtual bool hasOwnedMissingDlcWorldTemplateDependency(std::vector<DlcDependency> const&, bool) const = 0;

    virtual bool hasMissingContentKeyForDependencies(std::vector<DlcDependency> const&) const = 0;

    virtual std::vector<DlcDependency> getDlcDependenciesMissingContentKey(std::vector<DlcDependency> const&) const = 0;

    virtual bool hasPerformanceIssues(std::vector<DlcId> const&) const = 0;

    virtual bool hasEntitlementFor(::ContentIdentity const&) const = 0;

    virtual ::IPackManifestFactory& getPackManifestFactory() = 0;

    virtual ::IPackSourceFactory& getPackSourceFactory() = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> getKeyProvider() const = 0;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
class IDlcValidation {};
#endif // @header-generator platform
