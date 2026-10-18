#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/download/IDlcValidation.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class DlcDependency;
class DlcId;
class IContentKeyProvider;
class IContentManager;
class IEntitlementManager;
class IPackManifestFactory;
class IPackSourceFactory;
class IResourcePackRepository;
class IStoreCatalogRepository;
class IWorldTemplateManager;
struct PackIdVersion;
// clang-format on

class DlcValidation : public ::IDlcValidation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IContentManager&>         mContentManager;
    ::ll::TypedStorage<8, 8, ::IResourcePackRepository&> mResourcePackRepository;
    ::ll::UntypedStorage<8, 24>                          mEntitlementManager;
    ::ll::TypedStorage<8, 8, ::IWorldTemplateManager&>   mWorldTemplateManager;
    ::ll::UntypedStorage<8, 8>                           mStoreCatalogRepository;
    ::ll::TypedStorage<8, 8, ::IPackManifestFactory&>    mPackManifestFactory;
    ::ll::TypedStorage<8, 8, ::IPackSourceFactory&>      mPackSourceFactory;
    ::ll::UntypedStorage<8, 24>                          mContentKeyProvider;
    // NOLINTEND

public:
    // prevent constructor by default
    DlcValidation& operator=(DlcValidation const&);
    DlcValidation(DlcValidation const&);
    DlcValidation();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~DlcValidation();

    virtual std::vector<DlcDependency> collectDlcDependenciesForWorld(std::string const&, ::PackIdVersion const&, bool);

    virtual bool getNextUnownedDlcDependency(std::vector<DlcDependency> const&, ::DlcDependency&) const;

    virtual std::vector<DlcDependency> getMissingOwnedDlcDependencies(std::vector<DlcDependency> const&) const;

    virtual bool hasUnownedDlcDependencies(std::vector<DlcDependency> const&) const;

    virtual bool hasOwnedMissingDlcDependencies(std::vector<DlcDependency> const&) const;

    virtual ::DlcDependency getMissingOwnedDlcWorldTemplateDependency(std::vector<DlcDependency> const&, bool) const;

    virtual bool hasOwnedMissingDlcWorldTemplateDependency(std::vector<DlcDependency> const&, bool) const;

    virtual bool hasMissingContentKeyForDependencies(std::vector<DlcDependency> const&) const;

    virtual std::vector<DlcDependency> getDlcDependenciesMissingContentKey(std::vector<DlcDependency> const&) const;

    virtual bool hasPerformanceIssues(std::vector<DlcId> const&) const;

    virtual bool hasEntitlementFor(::ContentIdentity const&) const;

    virtual ::IPackManifestFactory& getPackManifestFactory();

    virtual ::IPackSourceFactory& getPackSourceFactory();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> getKeyProvider() const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DlcValidation(
        ::IContentManager&,
        ::IResourcePackRepository&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>,
        ::IWorldTemplateManager&,
        ::IStoreCatalogRepository&,
        ::IPackManifestFactory&,
        ::IPackSourceFactory&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&
    );

    MCNAPI bool _isPackContentKeyMissingOrInvalid(::DlcDependency const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::IContentManager&,
        ::IResourcePackRepository&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>,
        ::IWorldTemplateManager&,
        ::IStoreCatalogRepository&,
        ::IPackManifestFactory&,
        ::IPackSourceFactory&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::vector<DlcDependency> $collectDlcDependenciesForWorld(std::string const&, ::PackIdVersion const&, bool);

    MCNAPI bool $getNextUnownedDlcDependency(std::vector<DlcDependency> const&, ::DlcDependency&) const;

    MCNAPI std::vector<DlcDependency> $getMissingOwnedDlcDependencies(std::vector<DlcDependency> const&) const;

    MCNAPI bool $hasUnownedDlcDependencies(std::vector<DlcDependency> const&) const;

    MCNAPI bool $hasOwnedMissingDlcDependencies(std::vector<DlcDependency> const&) const;

    MCNAPI ::DlcDependency $getMissingOwnedDlcWorldTemplateDependency(std::vector<DlcDependency> const&, bool) const;

    MCNAPI bool $hasOwnedMissingDlcWorldTemplateDependency(std::vector<DlcDependency> const&, bool) const;

    MCNAPI bool $hasMissingContentKeyForDependencies(std::vector<DlcDependency> const&) const;

    MCNAPI std::vector<DlcDependency> $getDlcDependenciesMissingContentKey(std::vector<DlcDependency> const&) const;

    MCNAPI bool $hasPerformanceIssues(std::vector<DlcId> const&) const;

    MCNAPI bool $hasEntitlementFor(::ContentIdentity const&) const;

    MCNAPI ::IPackManifestFactory& $getPackManifestFactory();

    MCNAPI ::IPackSourceFactory& $getPackSourceFactory();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> $getKeyProvider() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class DlcValidation {};
#endif // @header-generator platform
