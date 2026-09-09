#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class ContentTierIncompatibleReason;
class ContentTierInfo;
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
    ::ll::TypedStorage<8, 8, std::unique_ptr<PackManifest>>                                   mManifest;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PackAccessStrategy>>                             mAccessStrategy;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SubpackInfoCollection>>                          mSubpackInfoStack;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PackMetadata>>                                   mMetadata;
    ::ll::TypedStorage<8, 8, std::unique_ptr<const ::PackCommand::UpgradeLegacyDependencies>> mDependenciesUpgrade;
    ::ll::TypedStorage<1, 1, uchar>                                                           mRevision;
    // NOLINTEND

public:
    // prevent constructor by default
    Pack& operator=(Pack const&);
    Pack(Pack const&);
    Pack();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Pack(
        std::unique_ptr<PackManifest>,
        std::unique_ptr<PackAccessStrategy>,
        std::unique_ptr<SubpackInfoCollection>,
        std::unique_ptr<PackMetadata>
    );

    MCNAPI void _loadLocalizationFiles();

    MCNAPI ::PackAccessStrategy const* getAccessStrategy() const;

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
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<Pack> createPack(
        ::ResourceLocation const&,
        ::PackType,
        ::PackOrigin,
        ::IPackManifestFactory&,
        ::Bedrock::NonOwnerPointer<const IContentKeyProvider>,
        ::PackSourceReport*,
        ::Core::Path const&
    );

    MCNAPI static std::unique_ptr<Pack> createPack(
        ::IPackIOProvider const&,
        ::ResourceLocation const&,
        ::PackType,
        ::PackOrigin,
        ::IPackManifestFactory&,
        ::Bedrock::NonOwnerPointer<const IContentKeyProvider>,
        ::PackSourceReport*,
        ::Core::Path const&
    );

    MCNAPI static std::unique_ptr<PackMetadata>
    createPackMetadata(::PackType, ::PackManifest&, ::PackAccessStrategy const&, ::PackReport&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Core::PathBuffer<std::string> const& EDUCATION_METADATA_FILE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::unique_ptr<PackManifest>,
        std::unique_ptr<PackAccessStrategy>,
        std::unique_ptr<SubpackInfoCollection>,
        std::unique_ptr<PackMetadata>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
