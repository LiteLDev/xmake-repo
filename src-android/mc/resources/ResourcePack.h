#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/PackAccessState.h"
#include "mc/client/gui/screens/controllers/PackCategory.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/resource/ResourceFileSystem.h"
#include "mc/resources/PackIconType.h"
#include "mc/resources/PackReport.h"
#include "mc/resources/ResourceSignature.h"

// auto generated forward declare list
// clang-format off
class Pack;
class PackAccessStrategy;
class PackManifest;
class PackMetadata;
class ResourceLocation;
class SemVersion;
class SubpackInfoCollection;
struct BehaviorPackContents;
struct PackIdVersion;
struct ResourcePackContents;
struct StreamableAssetSource;
struct SubpackInfo;
namespace Bedrock::Resources { class PreloadedPathHandle; }
namespace Core { class Path; }
namespace Core { class PathView; }
namespace Json { class Value; }
namespace mce { class UUID; }
// clang-format on

class ResourcePack {
public:
    // ResourcePack inner types define
    using Callback = std::function<void(const Core::Path&)>;

public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePack();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ResourcePack(::gsl::not_null<std::shared_ptr<Pack>>);

    MCNAPI void _createSubpacks();

    MCNAPI void _gatherBehaviorPackTelemetry(::BehaviorPackContents&) const;

    MCNAPI void _gatherResourcePackTelemetry(::ResourcePackContents&) const;

    MCNAPI bool _supportsPreload() const;

    MCNAPI bool areKnownFilesValid();

    MCNAPI void forEachIn(::Core::Path const&, std::function<void(const Core::Path&)>, int, bool) const;

    MCNAPI void forEachInAssetSet(::Core::Path const&, std::function<void(const Core::Path&)>, int) const;

    MCNAPI void generateAssetSet();

    MCNAPI uint getFileCount() const;

    MCNAPI ::ResourceFileSystem getIconFileSytem() const;

    MCNAPI ::Core::PathBuffer<std::string> getIconPath(::PackIconType) const;

    MCNAPI ::Core::PathBuffer<std::string> const& getIconZipPath() const;

    MCNAPI ::PackManifest const& getManifest() const;

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
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Core::PathBuffer<std::string> const& RESOURCE_PACK_BUG_ICON_PATH();

    MCNAPI static ::Core::PathBuffer<std::string> const& RESOURCE_PACK_ICON_PATH();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<std::shared_ptr<Pack>>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
