#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/PackAccessState.h"
#include "mc/client/gui/screens/controllers/PackCategory.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/file/PathBuffer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/resource/ResourceFileSystem.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/resources/PackIconType.h"
#include "mc/resources/PackReport.h"
#include "mc/resources/ResourceSignature.h"

// auto generated forward declare list
// clang-format off
class Pack;
class PackAccessStrategy;
#if defined(LL_PLAT_A) // @header-generator platform
class PackManifest;
class PackMetadata;
class ResourceLocation;
class SemVersion;
class SubpackInfoCollection;
#else // @header-generator platform
#endif // @header-generator platform
struct BehaviorPackContents;
#if defined(LL_PLAT_A) // @header-generator platform
struct PackIdVersion;
#else // @header-generator platform
#endif // @header-generator platform
struct ResourcePackContents;
struct StreamableAssetSource;
#if defined(LL_PLAT_A) // @header-generator platform
struct SubpackInfo;
#else // @header-generator platform
#endif // @header-generator platform
namespace Bedrock::Resources { class PreloadedPathHandle; }
namespace Core { class Path; }
namespace Core { class PathView; }
namespace Json { class Value; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace mce { class UUID; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ResourcePack {
public:
    // ResourcePack inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using Callback = std::function<void(const Core::Path&)>;
#else // @header-generator platform
    using Callback = ::std::function<void(::Core::Path const&)>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                        mHidden;
    ::ll::TypedStorage<1, 1, bool>                                        mError;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<Pack>>>     mPack;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PackAccessStrategy>>         mSubpackAccessStrategy;
    ::ll::UntypedStorage<8, 224>                                          mPackReport;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<Pack>>>         mSubPacks;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<ResourcePack>>> mSubResourcePacks;
    ::ll::UntypedStorage<8, 24>                                           mIconPath;
    ::ll::TypedStorage<8, 8, double>                                      mLoadTime;
    ::ll::TypedStorage<1, 1, bool>                                        mIsBaseGamePack;
    ::ll::TypedStorage<1, 1, bool>                                        mIsSlicePack;
    ::ll::TypedStorage<8, 40, ::ResourceSignature>                        mResourceSignature;
    ::ll::TypedStorage<1, 1, bool>                                        mIsMarkedForRemoval;
    ::ll::TypedStorage<8, 8, std::atomic<double>>                         mAssetReadMs;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>>                          mAssetReadBytes;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                              mHidden;
    ::ll::TypedStorage<1, 1, bool>                                              mError;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::Pack>>>       mPack;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PackAccessStrategy>>           mSubpackAccessStrategy;
    ::ll::TypedStorage<8, 248, ::PackReport>                                    mPackReport;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::Pack>>>         mSubPacks;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::ResourcePack>>> mSubResourcePacks;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                mIconPath;
    ::ll::TypedStorage<8, 8, double>                                            mLoadTime;
    ::ll::TypedStorage<1, 1, bool>                                              mIsBaseGamePack;
    ::ll::TypedStorage<1, 1, bool>                                              mIsSlicePack;
    ::ll::TypedStorage<8, 64, ::ResourceSignature>                              mResourceSignature;
    ::ll::TypedStorage<1, 1, bool>                                              mIsMarkedForRemoval;
    ::ll::TypedStorage<8, 8, ::std::atomic<double>>                             mAssetReadMs;
    ::ll::TypedStorage<8, 8, ::std::atomic<uint64>>                             mAssetReadBytes;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePack();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ResourcePack(::gsl::not_null<std::shared_ptr<Pack>>);
#else // @header-generator platform
    MCAPI explicit ResourcePack(::gsl::not_null<::std::shared_ptr<::Pack>> pack);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _createSubpacks();
#else // @header-generator platform
    MCAPI void _createSubpacks();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _gatherBehaviorPackTelemetry(::BehaviorPackContents&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void _gatherBehaviorPackTelemetry(::BehaviorPackContents& counts) const;

    MCAPI void _gatherResourcePackTelemetry(::ResourcePackContents& counts) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _gatherResourcePackTelemetry(::ResourcePackContents&) const;
#else // @header-generator platform
    MCAPI bool areKnownFilesValid();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _supportsPreload() const;
#else // @header-generator platform
    MCAPI void forEachIn(
        ::Core::Path const&                        filePath,
        ::std::function<void(::Core::Path const&)> callback,
        int                                        subpackIndex,
        bool                                       recurseAnyways
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool areKnownFilesValid();
#else // @header-generator platform
    MCAPI void forEachInAssetSet(
        ::Core::Path const&                        filePath,
        ::std::function<void(::Core::Path const&)> callback,
        int                                        subpackIndex
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void forEachIn(::Core::Path const&, std::function<void(const Core::Path&)>, int, bool) const;
#else // @header-generator platform
    MCAPI void generateAssetSet();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void forEachInAssetSet(::Core::Path const&, std::function<void(const Core::Path&)>, int) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::Core::PathBuffer<::std::string> getIconPath(::PackIconType iconType) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void generateAssetSet();
#else // @header-generator platform
    MCAPI bool getResource(::Core::Path const& resourceName, ::std::string& resourceStream, int subpackIndex) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint getFileCount() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::std::optional<::StreamableAssetSource> getStreamableSource(
        ::Core::Path const&               resourceName,
        int                               subpackIndex,
        ::std::optional<::Core::PathView> tempDirectory
    ) const;

    MCAPI ::Json::Value getTexturesList(int subpackIndex) const;

    MCAPI bool hasExtraResourcesForLocale(::std::string const& code, int subpackIndex) const;

    MCAPI bool hasIcon(::PackIconType iconType) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ResourceFileSystem getIconFileSytem() const;
#else // @header-generator platform
    MCAPI bool isAssetExtractionViable() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathBuffer<std::string> getIconPath(::PackIconType) const;
#else // @header-generator platform
    MCAPI ::Bedrock::Resources::PreloadedPathHandle
    preloadArchive(::Core::Path const& packRelativePath, int subpackIndex) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathBuffer<std::string> const& getIconZipPath() const;
#else // @header-generator platform
    MCAPI ::std::vector<::Bedrock::Resources::PreloadedPathHandle>
    preloadPath(::Core::Path const& packRelativePath, int subpackIndex, bool) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PackManifest const& getManifest() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void regenerateAssetSet();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PackCategory getPackCategory() const;

    MCNAPI ::mce::UUID const& getPackId() const;

    MCNAPI ::PackIdVersion const& getPackIdentity() const;

    MCNAPI bool getResource(::Core::Path const&, std::string&, int) const;

    MCNAPI ::ResourceLocation const& getResourceLocation() const;

    MCNAPI std::optional<StreamableAssetSource>
           getStreamableSource(::Core::Path const&, int, std::optional<Core::PathView>) const;

    MCNAPI ::Json::Value getTexturesList(int) const;

    MCNAPI ::SemVersion const& getVersion() const;

    MCNAPI bool hasExtraResourcesForLocale(std::string const&, int) const;

    MCNAPI bool hasIcon(::PackIconType) const;

    MCNAPI bool hasResource(::Core::Path const&, int) const;

    MCNAPI bool isAssetExtractionViable() const;

    MCNAPI bool isMarkedForRemoval() const;

    MCNAPI bool isType(::PackType) const;

    MCNAPI ::Bedrock::Resources::PreloadedPathHandle preloadArchive(::Core::Path const&, int) const;

    MCNAPI std::vector<Bedrock::Resources::PreloadedPathHandle> preloadPath(::Core::Path const&, int, bool) const;

    MCNAPI void regenerateAssetSet();

    MCNAPI void setAsSlicePack();

    MCNAPI void setLocale(std::string const&);

    MCNAPI ~ResourcePack();
#else // @header-generator platform
    MCAPI void setLocale(::std::string const& code);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Core::PathBuffer<std::string> const& RESOURCE_PACK_BUG_ICON_PATH();
#else // @header-generator platform
    MCAPI static ::Core::PathBuffer<::std::string> const& RESOURCE_PACK_BUG_ICON_PATH();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Core::PathBuffer<std::string> const& RESOURCE_PACK_ICON_PATH();
#else // @header-generator platform
    MCAPI static ::Core::PathBuffer<::std::string> const& RESOURCE_PACK_ICON_PATH();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::gsl::not_null<std::shared_ptr<Pack>>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::gsl::not_null<::std::shared_ptr<::Pack>> pack);
#endif // @header-generator platform
    // NOLINTEND
};
