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
#include "mc/resources/PackStats.h"

// auto generated forward declare list
// clang-format off
class ContentTierIncompatibleReason;
class ContentTierInfo;
class PackManifest;
class PackSettings;
class ResourceLocation;
class ResourcePack;
class SemVersion;
struct BehaviorPackContents;
struct ResourcePackContents;
struct StreamableAssetSource;
namespace Bedrock::Resources { class PreloadedPathHandle; }
namespace Core { class Path; }
namespace Core { class PathView; }
namespace Json { class Value; }
namespace mce { class UUID; }
// clang-format on

class PackInstance {
public:
    // PackInstance inner types define
    using Callback = std::function<void(const Core::Path&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 224>                                              mPackReport;
    ::ll::TypedStorage<8, 8, ::PackSettings*>                                 mPackSettings;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<ResourcePack>>> mPack;
    ::ll::TypedStorage<4, 16, ::PackStats>                                    mStats;
    ::ll::TypedStorage<4, 4, int>                                             mSubpackIndex;
    ::ll::TypedStorage<1, 1, uchar>                                           mRevision;
    // NOLINTEND

public:
    // prevent constructor by default
    PackInstance();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PackInstance(::gsl::not_null<std::shared_ptr<ResourcePack>>, std::string const&, bool, ::PackSettings*);

    MCNAPI void forEachIn(::Core::Path const&, std::function<void(const Core::Path&)>, bool) const;

    MCNAPI void forEachInAssetSet(::Core::Path const&, std::function<void(const Core::Path&)>, bool) const;

    MCNAPI void generateAssetSet();

    MCNAPI ::PackAccessState getAccessState() const;

    MCNAPI uint getFileCount() const;

    MCNAPI std::string const& getFolderName() const;

    MCNAPI ::ResourceFileSystem getIconFileSytem() const;

    MCNAPI ::Core::PathBuffer<std::string> getIconPath(::PackIconType) const;

    MCNAPI ::Core::PathBuffer<std::string> const& getIconZipPath() const;

    MCNAPI double getLoadTime() const;

    MCNAPI ::PackManifest const& getManifest() const;

    MCNAPI ::PackCategory getPackCategory() const;

    MCNAPI ::mce::UUID const getPackId() const;

    MCNAPI ::PackOrigin getPackOrigin() const;

    MCNAPI ::PackSettings const* getPackSettings() const;

    MCNAPI ::PackStats const& getPackStats() const;

    MCNAPI ::PackStats& getPackStats();

    MCNAPI ::Core::PathBuffer<std::string> const& getRelativePathWithinZip() const;

    MCNAPI bool getResource(::Core::Path const&, std::string&) const;

    MCNAPI ::ResourceLocation const& getResourceLocation() const;

    MCNAPI int getSubpackCount() const;

    MCNAPI std::string const& getSubpackFolderName() const;

    MCNAPI int getSubpackIndex() const;

    MCNAPI ::ContentTierInfo getTierInfo() const;

    MCNAPI ::SemVersion const& getVersion() const;

    MCNAPI bool hasIcon(::PackIconType) const;

    MCNAPI bool hasResource(::Core::Path const&) const;

    MCNAPI bool isBaseGamePack() const;

    MCNAPI bool isSlicePack() const;

    MCNAPI bool isTrusted() const;

    MCNAPI bool isType(::PackType) const;

    MCNAPI bool isZipped() const;

    MCNAPI bool operator==(::PackInstance const&) const;

    MCNAPI ::Bedrock::Resources::PreloadedPathHandle preloadArchive(::Core::Path const&) const;

    MCNAPI std::vector<Bedrock::Resources::PreloadedPathHandle> preloadPath(::Core::Path const&) const;

    MCNAPI ~PackInstance();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<std::shared_ptr<ResourcePack>>, std::string const&, bool, ::PackSettings*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
