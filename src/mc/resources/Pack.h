#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class ContentIdentity;
class ContentTierIncompatibleReason;
class ContentTierInfo;
#else // @header-generator platform
#endif // @header-generator platform
class IContentKeyProvider;
class IPackIOProvider;
class IPackManifestFactory;
class PackAccessStrategy;
class PackManifest;
class PackMetadata;
class PackReport;
class PackSourceReport;
class ResourceLocation;
class SubpackInfoCollection;
namespace Core { class Path; }
namespace PackCommand { struct UpgradeLegacyDependencies; }
// clang-format on

class Pack {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<PackManifest>>                                   mManifest;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PackAccessStrategy>>                             mAccessStrategy;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SubpackInfoCollection>>                          mSubpackInfoStack;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PackMetadata>>                                   mMetadata;
    ::ll::TypedStorage<8, 8, std::unique_ptr<const ::PackCommand::UpgradeLegacyDependencies>> mDependenciesUpgrade;
    ::ll::TypedStorage<1, 1, uchar>                                                           mRevision;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PackManifest>>                                 mManifest;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PackAccessStrategy>>                           mAccessStrategy;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SubpackInfoCollection>>                        mSubpackInfoStack;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PackMetadata>>                                 mMetadata;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PackCommand::UpgradeLegacyDependencies const>> mDependenciesUpgrade;
    ::ll::TypedStorage<1, 1, uchar>                                                             mRevision;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    Pack& operator=(Pack const&);
    Pack(Pack const&);
#else // @header-generator platform
#endif // @header-generator platform
    Pack();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Pack(
        std::unique_ptr<PackManifest>,
        std::unique_ptr<PackAccessStrategy>,
        std::unique_ptr<SubpackInfoCollection>,
        std::unique_ptr<PackMetadata>
#else // @header-generator platform
    MCAPI Pack(
        ::std::unique_ptr<::PackManifest>          manifest,
        ::std::unique_ptr<::PackAccessStrategy>    accessStrategy,
        ::std::unique_ptr<::SubpackInfoCollection> subpacks,
        ::std::unique_ptr<::PackMetadata>          metadata
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _loadLocalizationFiles();
#else // @header-generator platform
    MCAPI void move(::Pack&& pack);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PackAccessStrategy const* getAccessStrategy() const;
#else // @header-generator platform
    MCAPI void upgradeLegacyDependencies(::std::unique_ptr<::PackCommand::UpgradeLegacyDependencies const> upgrade);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PackAccessStrategy* getAccessStrategy();

    MCNAPI uchar getCurrentRevision() const;

    MCNAPI ::PackManifest const& getManifest() const;

    MCNAPI ::Bedrock::NonOwnerPointer<const PackManifest> const getManifestPtr() const;

    MCNAPI ::SubpackInfoCollection const* getSubpackInfoStack() const;

    MCNAPI void move(::Pack&&);

    MCNAPI void setManifestPackCapabilitiesTrusted();

    MCNAPI void setManifestSourceIdentity(::ContentIdentity const&);

    MCNAPI void setManifestTitleLocked(bool);

    MCNAPI void upgradeLegacyDependencies(std::unique_ptr<const ::PackCommand::UpgradeLegacyDependencies>);

    MCNAPI ~Pack();
#else // @header-generator platform
    MCAPI ~Pack();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unique_ptr<Pack> createPack(
        ::ResourceLocation const&,
        ::PackType,
        ::PackOrigin,
        ::IPackManifestFactory&,
        ::Bedrock::NonOwnerPointer<const IContentKeyProvider>,
        ::PackSourceReport*,
        ::Core::Path const&
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::std::unique_ptr<::Pack> createPack(
        ::ResourceLocation const&                               fileLocation,
        ::PackType                                              type,
        ::PackOrigin                                            origin,
        ::IPackManifestFactory&                                 manifestFactory,
        ::Bedrock::NonOwnerPointer<::IContentKeyProvider const> keyProvider,
        ::PackSourceReport*                                     report,
        ::Core::Path const&                                     zipSubDir
    );
#endif

    MCAPI static ::std::unique_ptr<::Pack> createPack(
        ::IPackIOProvider const&                                io,
        ::ResourceLocation const&                               fileLocation,
        ::PackType                                              type,
        ::PackOrigin                                            origin,
        ::IPackManifestFactory&                                 manifestFactory,
        ::Bedrock::NonOwnerPointer<::IContentKeyProvider const> keyProvider,
        ::PackSourceReport*                                     report,
        ::Core::Path const&                                     zipSubDir
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unique_ptr<Pack> createPack(
        ::IPackIOProvider const&,
        ::ResourceLocation const&,
        ::PackType,
        ::PackOrigin,
        ::IPackManifestFactory&,
        ::Bedrock::NonOwnerPointer<const IContentKeyProvider>,
        ::PackSourceReport*,
        ::Core::Path const&
#else // @header-generator platform
    MCAPI static ::std::unique_ptr<::PackMetadata> createPackMetadata(
        ::PackType                  type,
        ::PackManifest&             manifest,
        ::PackAccessStrategy const& accessStrategy,
        ::PackReport&               report
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform

    MCNAPI static std::unique_ptr<PackMetadata>
    createPackMetadata(::PackType, ::PackManifest&, ::PackAccessStrategy const&, ::PackReport&);
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Core::PathBuffer<std::string> const& EDUCATION_METADATA_FILE();
#else // @header-generator platform
    MCAPI static ::Core::PathBuffer<::std::string> const& EDUCATION_METADATA_FILE();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        std::unique_ptr<PackManifest>,
        std::unique_ptr<PackAccessStrategy>,
        std::unique_ptr<SubpackInfoCollection>,
        std::unique_ptr<PackMetadata>
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::unique_ptr<::PackManifest>          manifest,
        ::std::unique_ptr<::PackAccessStrategy>    accessStrategy,
        ::std::unique_ptr<::SubpackInfoCollection> subpacks,
        ::std::unique_ptr<::PackMetadata>          metadata
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
