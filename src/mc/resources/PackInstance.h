#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/PackAccessState.h"
#include "mc/client/gui/screens/controllers/PackCategory.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/resource/ResourceFileSystem.h"
#include "mc/resources/PackIconType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/resources/PackReport.h"
#include "mc/resources/PackStats.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class ContentTierIncompatibleReason;
class ContentTierInfo;
class PackManifest;
#else // @header-generator platform
#endif // @header-generator platform
class PackSettings;
#if defined(LL_PLAT_A) // @header-generator platform
class ResourceLocation;
#else // @header-generator platform
#endif // @header-generator platform
class ResourcePack;
#if defined(LL_PLAT_A) // @header-generator platform
class SemVersion;
struct BehaviorPackContents;
struct ResourcePackContents;
struct StreamableAssetSource;
namespace Bedrock::Resources { class PreloadedPathHandle; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Core { class Path; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { class PathView; }
namespace Json { class Value; }
namespace mce { class UUID; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class PackInstance {
public:
    // PackInstance inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using Callback = std::function<void(const Core::Path&)>;
#else // @header-generator platform
    using Callback = ::std::function<void(::Core::Path const&)>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 224>                                              mPackReport;
    ::ll::TypedStorage<8, 8, ::PackSettings*>                                 mPackSettings;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<ResourcePack>>> mPack;
    ::ll::TypedStorage<4, 16, ::PackStats>                                    mStats;
    ::ll::TypedStorage<4, 4, int>                                             mSubpackIndex;
    ::ll::TypedStorage<1, 1, uchar>                                           mRevision;
#else // @header-generator platform
    ::ll::TypedStorage<8, 248, ::PackReport>                                      mPackReport;
    ::ll::TypedStorage<8, 8, ::PackSettings*>                                     mPackSettings;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::ResourcePack>>> mPack;
    ::ll::TypedStorage<4, 16, ::PackStats>                                        mStats;
    ::ll::TypedStorage<4, 4, int>                                                 mSubpackIndex;
    ::ll::TypedStorage<1, 1, uchar>                                               mRevision;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    PackInstance();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PackInstance(::gsl::not_null<std::shared_ptr<ResourcePack>>, std::string const&, bool, ::PackSettings*);
#else // @header-generator platform
    MCAPI PackInstance(
        ::gsl::not_null<::std::shared_ptr<::ResourcePack>> pack,
        int                                                subpackIndex,
        bool                                               isDependent,
        ::PackSettings*                                    packSettings
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void forEachIn(::Core::Path const&, std::function<void(const Core::Path&)>, bool) const;
#else // @header-generator platform
    MCAPI PackInstance(
        ::gsl::not_null<::std::shared_ptr<::ResourcePack>> pack,
        ::std::string const&                               subpackName,
        bool                                               isDependent,
        ::PackSettings*                                    packSettings
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void forEachInAssetSet(::Core::Path const&, std::function<void(const Core::Path&)>, bool) const;
#else // @header-generator platform
    MCAPI bool hasResource(::Core::Path const& resourceName) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ~PackInstance();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::gsl::not_null<std::shared_ptr<ResourcePack>>, std::string const&, bool, ::PackSettings*);
#else // @header-generator platform
    MCAPI void* $ctor(
        ::gsl::not_null<::std::shared_ptr<::ResourcePack>> pack,
        int                                                subpackIndex,
        bool                                               isDependent,
        ::PackSettings*                                    packSettings
    );

    MCAPI void* $ctor(
        ::gsl::not_null<::std::shared_ptr<::ResourcePack>> pack,
        ::std::string const&                               subpackName,
        bool                                               isDependent,
        ::PackSettings*                                    packSettings
    );
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
};
