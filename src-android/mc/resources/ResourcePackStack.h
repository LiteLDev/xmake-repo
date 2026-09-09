#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/resources/PackInstance.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class ContentTierIncompatibleReason;
class ContentTierInfo;
class IResourcePackRepository;
class LoadedResourceData;
class PackManifest;
class PackReport;
class PackSourceReport;
class ResourceLocation;
class ResourcePack;
class ResourcePackMergeStrategy;
struct PackIdVersion;
struct PackInstanceId;
// clang-format on

class ResourcePackStack {
public:
    // ResourcePackStack inner types define
    using PackInstanceStack = std::vector<PackInstance>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<PackInstance>>        mStack;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PackSourceReport>> mPackSourceReport;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ResourcePackStack();

    virtual bool loadAllVersionsOf(::ResourceLocation const&, ::brstd::function_ref<bool (const PackInstance&)>, ::ResourcePackMergeStrategy&) const;

    virtual bool loadAllVersionsOf(::ResourceLocation const&, ::ResourcePackMergeStrategy&) const;

    virtual std::vector<LoadedResourceData> loadAllVersionsOf(::ResourceLocation const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ResourcePackStack(
        std::vector<PackInstance> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IResourcePackRepository>> const&
    );

    MCNAPI ResourcePackStack(
        std::vector<PackInstanceId> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IResourcePackRepository>> const&,
        bool
    );

    MCNAPI void _setLoadingReport(::gsl::not_null<Bedrock::NonOwnerPointer<const IResourcePackRepository>> const&);

    MCNAPI void
    add(::PackInstance, ::gsl::not_null<Bedrock::NonOwnerPointer<const IResourcePackRepository>> const&, bool);

    MCNAPI ::ContentTierIncompatibleReason canSupportPacks(::ContentTierInfo const&) const;

    MCNAPI void ensureSupportedSubpacks(::ContentTierInfo const&);

    MCNAPI std::vector<std::string> getPackTelemetryNamesWithVersion(::PackType) const;

    MCNAPI std::vector<PackInstance>
    getPacksWhereAssetExtractionNotViable(std::function<std::string(const ContentIdentity&)>, std::string const&) const;

    MCNAPI void getSplitStacks(::ResourcePackStack&, ::ResourcePackStack&) const;

    MCNAPI std::vector<PackInstanceId> getStackAsIdentities() const;

    MCNAPI bool hasPlatformLockedContent() const;

    MCNAPI bool hasRestrictedContent() const;

    MCNAPI bool isOnStack(::PackIdVersion const&) const;

    MCNAPI void iteratePacks(std::function<void(const PackInstance&)> const&) const;

    MCNAPI void removeDuplicates();

    MCNAPI bool removeIf(std::function<bool(const PackInstance&)> const&);

    MCNAPI void removeInvalidPacks();

    MCNAPI void removeUnsupportedPacks(::ContentTierInfo const&);

    MCNAPI void serialize(std::basic_ostream<char, std::char_traits<char>>&) const;

    MCNAPI bool supportsVibrantVisuals() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _populateDependencies(
        std::vector<PackInstance>&,
        ::PackInstance&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IResourcePackRepository>> const&,
        bool
    );

    MCNAPI static std::unique_ptr<ResourcePackStack> deserialize(
        std::string_view,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IResourcePackRepository>> const&,
        std::optional<std::string>
    );

    MCNAPI static std::unique_ptr<ResourcePackStack> deserialize(
        std::vector<PackInstanceId> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IResourcePackRepository>> const&,
        std::optional<std::string>
    );

    MCNAPI static std::vector<PackInstanceId> deserialize(std::string_view);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::vector<PackInstance> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IResourcePackRepository>> const&
    );

    MCNAPI void* $ctor(
        std::vector<PackInstanceId> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IResourcePackRepository>> const&,
        bool
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
    MCNAPI bool $loadAllVersionsOf(
        ::ResourceLocation const&,
        ::brstd::function_ref<bool(const PackInstance&)>,
        ::ResourcePackMergeStrategy&
    ) const;

    MCNAPI bool $loadAllVersionsOf(::ResourceLocation const&, ::ResourcePackMergeStrategy&) const;

    MCNAPI std::vector<LoadedResourceData> $loadAllVersionsOf(::ResourceLocation const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
