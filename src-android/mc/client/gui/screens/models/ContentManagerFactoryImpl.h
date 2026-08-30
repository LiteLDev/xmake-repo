#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentFlags.h"
#include "mc/client/gui/screens/models/ContentManagerFactoryArgs.h"
#include "mc/client/gui/screens/models/ContentType.h"
#include "mc/client/gui/screens/models/IContentManagerFactory.h"
#include "mc/client/gui/screens/models/IPackManagerContentQueries.h"
#include "mc/client/resources/ContentCatalogPackSource.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class CachedHostPackIdProvider;
class CompositePackSource;
class ContentTierInfo;
class IContentTierManager;
class Pack;
class PackSource;
class StoreCatalogRepository;
struct ContentSource;
struct InvalidPacksFilterGroup;
struct InvalidResourceSource;
struct PackManagerContentSourceArgs;
struct PackManagerContentSourceData;
struct RealmsUnknownPackSources;
struct WorldContentSource;
struct WorldTemplateSource;
namespace ContentManagerUtils { class ISourcesAsyncReloader; }
namespace Core { class Path; }
namespace Realms { class RealmsServicePackSource; }
namespace Realms { struct Content; }
namespace Realms { struct RealmId; }
namespace mce { class UUID; }
// clang-format on

class ContentManagerFactoryImpl : public ::IContentManagerFactory {
public:
    // ContentManagerFactoryImpl inner types declare
    // clang-format off
    class PackManagerContentQueriesImpl;
    // clang-format on

    // ContentManagerFactoryImpl inner types define
    class PackManagerContentQueriesImpl : public ::IPackManagerContentQueries {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mStoreCatalog;
        ::ll::UntypedStorage<8, 24> mContentTierManager;
        // NOLINTEND

    public:
        // prevent constructor by default
        PackManagerContentQueriesImpl();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~PackManagerContentQueriesImpl();

        virtual ::ContentTierInfo getContentTierInfo() const;

        virtual std::string const* getStoreCatalogItemAvailableDateByPackIdentityAndType(::mce::UUID const&) const;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI ::ContentTierInfo $getContentTierInfo() const;

        MCNAPI std::string const* $getStoreCatalogItemAvailableDateByPackIdentityAndType(::mce::UUID const&) const;
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 184, ::ContentManagerFactoryArgs> mArgs;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentManagerFactoryImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ContentManagerFactoryImpl();

    virtual std::unique_ptr<WorldContentSource> createWorldContentSource() const;

    virtual std::unique_ptr<WorldTemplateSource> createWorldTemplateSource() const;

    virtual std::unique_ptr<InvalidResourceSource> createInvalidResourceSource(::InvalidPacksFilterGroup const&) const;

    virtual std::unique_ptr<ContentSource> createWorldPackManagerContentSource(std::string const&, ::Core::PathBuffer<std::string>, ::ContentFlags, std::vector<PackManagerContentSourceData>&&, std::weak_ptr<CachedHostPackIdProvider>) const;

    virtual std::unique_ptr<ContentSource> createRealmPackManagerContentSource(long, ::ContentFlags, std::vector<PackManagerContentSourceData>&&) const;

    virtual std::unique_ptr<ContentSource> createRealmsWorldPackManagerContentSource(::Realms::RealmId, std::vector<Realms::Content>&&, ::ContentFlags, std::vector<PackManagerContentSourceData>&&) const;

    virtual std::unique_ptr<ContentSource> createPackManagerContentSource(::ContentType, ::ContentFlags, std::vector<PackManagerContentSourceData>&&) const;

    virtual ::PackSource* getInPackagePackSource(::PackType) const;

    virtual ::PackSource* getDirectoryPackSource(::Core::Path const&, ::PackType) const;

    virtual ::PackSource& createDirectoryPackSource(::Core::Path const&, ::PackType, ::PackOrigin) const;

    virtual ::PackSource& createWorldTemplatePackSource(::mce::UUID const&, ::PackType, ::PackOrigin) const;

    virtual ::ContentCatalogPackSource& createContentCatalogPackSource(std::weak_ptr<ContentManagerUtils::ISourcesAsyncReloader>&&, bool) const;

    virtual ::PackSource& createWorldHistoryPackSource(::Core::Path const&, ::PackType) const;

    virtual ::RealmsUnknownPackSources& getRealmsUnknownPackSources() const;

    virtual std::unique_ptr<Realms::RealmsServicePackSource> createRealmsServicePackSource(long, ::PackType, std::vector<gsl::not_null<std::shared_ptr<Pack>>>&&) const;

    virtual std::unique_ptr<CompositePackSource> createCompositePackSource(std::vector<PackSource*>) const;

    virtual bool allowsResourcePackDevelopment() const;

    virtual ::Bedrock::NonOwnerPointer<AppPlatform> getPlatform() const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::PackManagerContentSourceArgs
    createPackManagerArgs(::ContentType, ::ContentFlags, std::vector<PackManagerContentSourceData>&&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<WorldContentSource> $createWorldContentSource() const;

    MCNAPI std::unique_ptr<WorldTemplateSource> $createWorldTemplateSource() const;

    MCNAPI std::unique_ptr<InvalidResourceSource> $createInvalidResourceSource(::InvalidPacksFilterGroup const&) const;

    MCNAPI std::unique_ptr<ContentSource> $createWorldPackManagerContentSource(
        std::string const&,
        ::Core::PathBuffer<std::string>,
        ::ContentFlags,
        std::vector<PackManagerContentSourceData>&&,
        std::weak_ptr<CachedHostPackIdProvider>
    ) const;

    MCNAPI std::unique_ptr<ContentSource>
    $createRealmPackManagerContentSource(long, ::ContentFlags, std::vector<PackManagerContentSourceData>&&) const;

    MCNAPI std::unique_ptr<ContentSource> $createRealmsWorldPackManagerContentSource(
        ::Realms::RealmId,
        std::vector<Realms::Content>&&,
        ::ContentFlags,
        std::vector<PackManagerContentSourceData>&&
    ) const;

    MCNAPI std::unique_ptr<ContentSource>
    $createPackManagerContentSource(::ContentType, ::ContentFlags, std::vector<PackManagerContentSourceData>&&) const;

    MCNAPI ::PackSource* $getInPackagePackSource(::PackType) const;

    MCNAPI ::PackSource* $getDirectoryPackSource(::Core::Path const&, ::PackType) const;

    MCNAPI ::PackSource& $createDirectoryPackSource(::Core::Path const&, ::PackType, ::PackOrigin) const;

    MCNAPI ::PackSource& $createWorldTemplatePackSource(::mce::UUID const&, ::PackType, ::PackOrigin) const;

    MCNAPI ::ContentCatalogPackSource&
    $createContentCatalogPackSource(std::weak_ptr<ContentManagerUtils::ISourcesAsyncReloader>&&, bool) const;

    MCNAPI ::PackSource& $createWorldHistoryPackSource(::Core::Path const&, ::PackType) const;

    MCNAPI ::RealmsUnknownPackSources& $getRealmsUnknownPackSources() const;

    MCNAPI std::unique_ptr<Realms::RealmsServicePackSource>
           $createRealmsServicePackSource(long, ::PackType, std::vector<gsl::not_null<std::shared_ptr<Pack>>>&&) const;

    MCNAPI std::unique_ptr<CompositePackSource> $createCompositePackSource(std::vector<PackSource*>) const;

    MCNAPI bool $allowsResourcePackDevelopment() const;

    MCNAPI ::Bedrock::NonOwnerPointer<AppPlatform> $getPlatform() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
