#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/function_ref.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/resources/PackInstance.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class ContentIdentity;
#if defined(LL_PLAT_A) // @header-generator platform
class ContentTierIncompatibleReason;
#else // @header-generator platform
#endif // @header-generator platform
class ContentTierInfo;
class IResourcePackRepository;
class LoadedResourceData;
#if defined(LL_PLAT_A) // @header-generator platform
class PackManifest;
class PackReport;
#else // @header-generator platform
class PackInstance;
#endif // @header-generator platform
class PackSourceReport;
class ResourceLocation;
#if defined(LL_PLAT_A) // @header-generator platform
class ResourcePack;
class ResourcePackMergeStrategy;
#else // @header-generator platform
#endif // @header-generator platform
struct PackIdVersion;
struct PackInstanceId;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ResourcePackMergeStrategy;
#endif // @header-generator platform
// clang-format on

class ResourcePackStack {
public:
    // ResourcePackStack inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using PackInstanceStack = std::vector<PackInstance>;
#else // @header-generator platform
    using PackInstanceStack = ::std::vector<::PackInstance>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<PackInstance>>        mStack;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PackSourceReport>> mPackSourceReport;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::PackInstance>>        mStack;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PackSourceReport>> mPackSourceReport;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    LLAPI void
    add(PackInstance                                                        packInstance,
        Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository const> const& repo,
        bool                                                                isDependent);

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ResourcePackStack();

#endif
public:
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~ResourcePackStack();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool loadAllVersionsOf(::ResourceLocation const&, ::brstd::function_ref<bool (const PackInstance&)>, ::ResourcePackMergeStrategy&) const;
#else // @header-generator platform
    virtual ::std::vector<::LoadedResourceData> loadAllVersionsOf(::ResourceLocation const& resourceLocation) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool loadAllVersionsOf(::ResourceLocation const&, ::ResourcePackMergeStrategy&) const;
#else // @header-generator platform
    virtual bool
    loadAllVersionsOf(::ResourceLocation const& resourceLocation, ::ResourcePackMergeStrategy& mergeStrategy) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<LoadedResourceData> loadAllVersionsOf(::ResourceLocation const&) const;
    // clang-format on
#else // @header-generator platform
    virtual bool loadAllVersionsOf(
        ::ResourceLocation const&                          resourceLocation,
        ::brstd::function_ref<bool(::PackInstance const&)> packInstanceFilter,
        ::ResourcePackMergeStrategy&                       mergeStrategy
    ) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ResourcePackStack(
        std::vector<PackInstance> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IResourcePackRepository>> const&
    );
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ResourcePackStack(
        ::std::vector<::PackInstance> const&                                  packs,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository const> const& repo
    );

    MCAPI ResourcePackStack(
        ::std::vector<::PackInstanceId> const&                                identities,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository const> const& repo,
        bool                                                                  anyVersion
    );

    MCAPI void _setLoadingReport(::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository const> const& repo);

    MCAPI void ensureSupportedSubpacks(::ContentTierInfo const& contentInfoTier);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ResourcePackStack(
        std::vector<PackInstanceId> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IResourcePackRepository>> const&,
        bool
    );
#else // @header-generator platform
    MCAPI ::std::vector<::std::string> getPackTelemetryNamesWithVersion(::PackType type) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _setLoadingReport(::gsl::not_null<Bedrock::NonOwnerPointer<const IResourcePackRepository>> const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::std::vector<::PackInstance> getPacksWhereAssetExtractionNotViable(
        ::std::function<::std::string(::ContentIdentity const&)> getContentKey,
        ::std::string const&                                     sourceContext
    ) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    add(::PackInstance, ::gsl::not_null<Bedrock::NonOwnerPointer<const IResourcePackRepository>> const&, bool);
#else // @header-generator platform
    MCAPI void getSplitStacks(::ResourcePackStack& clientStack, ::ResourcePackStack& serverStack) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::std::vector<::PackInstanceId> getStackAsIdentities() const;

    MCAPI bool isOnStack(::PackIdVersion const& packIdentity) const;

    MCAPI void removeInvalidPacks();

    MCAPI void serialize(::std::ostream& fileStream) const;

    MCAPI bool supportsVibrantVisuals() const;
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _populateDependencies(
        std::vector<PackInstance>&,
        ::PackInstance&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IResourcePackRepository>> const&,
        bool
#else // @header-generator platform
    MCAPI static void _populateDependencies(
        ::std::vector<::PackInstance>&                                        packStack,
        ::PackInstance&                                                       packInstance,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository const> const& repo,
        bool                                                                  isDependent
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unique_ptr<ResourcePackStack> deserialize(
        std::string_view,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IResourcePackRepository>> const&,
        std::optional<std::string>
#else // @header-generator platform
    MCAPI static ::std::unique_ptr<::ResourcePackStack> deserialize(
        ::std::string_view                                                    fileData,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository const> const& repo,
        ::std::optional<::std::string>                                        levelId
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unique_ptr<ResourcePackStack> deserialize(
        std::vector<PackInstanceId> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IResourcePackRepository>> const&,
        std::optional<std::string>
    );

    MCNAPI static std::vector<PackInstanceId> deserialize(std::string_view);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::std::unique_ptr<::ResourcePackStack> deserialize(
        ::std::vector<::PackInstanceId> const&                                ids,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository const> const& repo,
        ::std::optional<::std::string>                                        levelId
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        std::vector<PackInstance> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IResourcePackRepository>> const&
    );

    MCNAPI void* $ctor(
        std::vector<PackInstanceId> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IResourcePackRepository>> const&,
        bool
    );
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::std::vector<::PackInstance> const&                                  packs,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository const> const& repo
    );

    MCAPI void* $ctor(
        ::std::vector<::PackInstanceId> const&                                identities,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository const> const& repo,
        bool                                                                  anyVersion
    );
#endif
#endif // @header-generator platform
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

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $loadAllVersionsOf(
        ::ResourceLocation const&,
        ::brstd::function_ref<bool(const PackInstance&)>,
        ::ResourcePackMergeStrategy&
#else // @header-generator platform
    MCAPI ::std::vector<::LoadedResourceData> $loadAllVersionsOf(::ResourceLocation const& resourceLocation) const;

    MCAPI bool
    $loadAllVersionsOf(::ResourceLocation const& resourceLocation, ::ResourcePackMergeStrategy& mergeStrategy) const;

    MCAPI bool $loadAllVersionsOf(
        ::ResourceLocation const&                          resourceLocation,
        ::brstd::function_ref<bool(::PackInstance const&)> packInstanceFilter,
        ::ResourcePackMergeStrategy&                       mergeStrategy
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $loadAllVersionsOf(::ResourceLocation const&, ::ResourcePackMergeStrategy&) const;
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<LoadedResourceData> $loadAllVersionsOf(::ResourceLocation const&) const;
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
