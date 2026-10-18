#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/PackAccessState.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/file/PathBuffer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/threading/SharedLockbox.h"
#include "mc/deps/resource_processing/PreloadState.h"
#else // @header-generator platform
#include "mc/deps/core/string/BasicStackString.h"
#endif // @header-generator platform
#include "mc/platform/Result.h"
#include "mc/resources/PackAccessAssetGenerationResult.h"
#include "mc/resources/PackAccessStrategyType.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class PackAssetSet;
class ResourceLocation;
#if defined(LL_PLAT_A) // @header-generator platform
struct EncryptedAssetInfo;
#else // @header-generator platform
#endif // @header-generator platform
struct StreamableAssetSource;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock::Resources { class PreloadCache; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Bedrock::Resources { class PreloadedPathHandle; }
namespace Bedrock::Resources::Archive { class Reader; }
namespace Core { class FileHandlePool; }
namespace Core { class Path; }
namespace Core { class PathView; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { template<typename T0, int T1> class BasicStackString; }
namespace Json { class Value; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class PackAccessStrategy {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // PackAccessStrategy inner types define
    using EnumerationCallback = std::function<void(const Core::Path&)>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::shared_ptr<Core::FileHandlePool>>                              mHandlePool;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<Bedrock::Resources::PreloadCache>>> mPreloaded;
    ::ll::UntypedStorage<8, 152>                                                                  mAssetSet;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk962cf5;
    ::ll::UntypedStorage<8, 16> mUnk2ff3dc;
    ::ll::UntypedStorage<8, 16> mUnkb0ada6;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    PackAccessStrategy& operator=(PackAccessStrategy const&);
    PackAccessStrategy(PackAccessStrategy const&);
#endif // @header-generator platform
    PackAccessStrategy();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~PackAccessStrategy();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getPackSize() const = 0;
#else // @header-generator platform
    virtual uint64 getPackSize() const = 0;
#endif // @header-generator platform

    virtual ::ResourceLocation const& getPackLocation() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getPackName() const = 0;
#else // @header-generator platform
    virtual ::std::string const& getPackName() const = 0;
#endif // @header-generator platform

    virtual bool isWritable() const = 0;

    virtual bool isTrusted() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasAsset(::Core::Path const&, bool, bool) const = 0;
#else // @header-generator platform
    virtual bool hasAsset(::Core::Path const& packRelativePath, bool trustedContentOnly, bool caseSensative) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasFolder(::Core::Path const&) const = 0;
#else // @header-generator platform
    virtual bool hasFolder(::Core::Path const& packRelativePath) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool getAsset(::Core::Path const&, std::string&, bool) const = 0;
#else // @header-generator platform
    virtual bool
    getAsset(::Core::Path const& packRelativePath, ::std::string& result, bool trustedContentOnly) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void forEachIn(::Core::Path const&, std::function<void (const Core::Path&)>, bool) const = 0;
#else // @header-generator platform
    virtual void forEachIn(
        ::Core::Path const&                        packRelativePath,
        ::std::function<void(::Core::Path const&)> callback,
        bool                                       recurseAnyways
    ) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void forEachInAssetSet(::Core::Path const&, std::function<void (const Core::Path&)>) const;
#else // @header-generator platform
    virtual void
    forEachInAssetSet(::Core::Path const& packRelativePath, ::std::function<void(::Core::Path const&)> callback) const;
#endif // @header-generator platform

    virtual ::PackAccessStrategyType getStrategyType() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> const& getSubPath() const;
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> const& getSubPath() const;
#endif // @header-generator platform

    virtual bool supportsSignatureVerification() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<PackAccessStrategy> createSubPack(::Core::Path const&) const = 0;
#else // @header-generator platform
    virtual ::std::unique_ptr<::PackAccessStrategy> createSubPack(::Core::Path const& subPath) const = 0;
#endif // @header-generator platform

    virtual ::PackAccessAssetGenerationResult generateAssetSet();

    virtual ::PackAccessAssetGenerationResult regenerateAssetSet();

    virtual bool canRecurse() const;

    virtual void unload() = 0;

    virtual ::ContentIdentity readContentIdentity() const;

    virtual bool isAssetExtractionViable() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<StreamableAssetSource, std::error_code> getStreamableSource(::Core::Path const&, std::optional<Core::PathView>) const = 0;
#else // @header-generator platform
    virtual ::Bedrock::Result<::StreamableAssetSource> getStreamableSource(
        ::Core::Path const&               packRelativePath,
        ::std::optional<::Core::PathView> tempDirectory
    ) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<Bedrock::Resources::Archive::Reader> _loadArchive(::Core::Path const&) const;
#else // @header-generator platform
    virtual ::std::unique_ptr<::Bedrock::Resources::Archive::Reader>
    _loadArchive(::Core::Path const& packRelativePath) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<Bedrock::Resources::PreloadedPathHandle> _preloadSubFolders(::Core::Path const&) const;
    // clang-format on
#else // @header-generator platform
    virtual ::std::vector<::Bedrock::Resources::PreloadedPathHandle>
    _preloadSubFolders(::Core::Path const& packRelativePath) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PackAccessStrategy(std::unique_ptr<PackAssetSet>&&, ::gsl::not_null<std::shared_ptr<Core::FileHandlePool>>);
#else // @header-generator platform
    MCNAPI PackAccessStrategy(
        ::std::unique_ptr<::PackAssetSet>&&                        assetSet,
        ::gsl::not_null<::std::shared_ptr<::Core::FileHandlePool>> handlePool
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EncryptedAssetInfo const* _getEncryptedAssetInfo(::Core::Path const&) const;
#else // @header-generator platform
    MCNAPI ::Bedrock::Resources::PreloadedPathHandle preloadArchive(::Core::Path const& packRelativePath) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Resources::PreloadState
    _getPreloaded(::Core::Path const&, ::Core::Path const&, std::string&) const;

    MCNAPI ::Bedrock::Resources::PreloadState _hasPreloaded(::Core::Path const&) const;

    MCNAPI ::Bedrock::Resources::PreloadState _hasPreloadedFallback(::Core::Path const&, ::Core::Path const&) const;

    MCNAPI bool _isInAssetSet(::Core::Path const&) const;

    MCNAPI bool _isInAssetSetCaseInsensative(::Core::Path const&) const;

    MCNAPI ::PackAccessState getAccessState() const;

    MCNAPI bool hasGeneratedAssetSet() const;

    MCNAPI bool isAssetSetEmpty() const;

    MCNAPI ::Bedrock::Resources::PreloadedPathHandle preloadArchive(::Core::Path const&) const;

    MCNAPI std::vector<Bedrock::Resources::PreloadedPathHandle> preloadPath(::Core::Path const&) const;
#else // @header-generator platform
    MCNAPI ::std::vector<::Bedrock::Resources::PreloadedPathHandle>
    preloadPath(::Core::Path const& packRelativePath) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Core::PathBuffer<Core::BasicStackString<char, 1024>> const& ARCHIVE_EXTENSION();
#else // @header-generator platform
    MCNAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& ARCHIVE_EXTENSION();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Core::PathBuffer<Core::BasicStackString<char, 1024>> const& ARCHIVE_FOLDER();
#else // @header-generator platform
    MCNAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& ARCHIVE_FOLDER();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Core::PathBuffer<std::string> const& PACK_IMPORT_LOCK_FILE();
#else // @header-generator platform
    MCNAPI static ::Core::PathBuffer<::std::string> const& PACK_IMPORT_LOCK_FILE();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::unique_ptr<PackAssetSet>&&, ::gsl::not_null<std::shared_ptr<Core::FileHandlePool>>);
#else // @header-generator platform
    MCNAPI void* $ctor(
        ::std::unique_ptr<::PackAssetSet>&&                        assetSet,
        ::gsl::not_null<::std::shared_ptr<::Core::FileHandlePool>> handlePool
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $forEachInAssetSet(::Core::Path const&, std::function<void(const Core::Path&)>) const;
#else // @header-generator platform
    MCNAPI void
    $forEachInAssetSet(::Core::Path const& packRelativePath, ::std::function<void(::Core::Path const&)> callback) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathBuffer<std::string> const& $getSubPath() const;
#else // @header-generator platform
    MCNAPI ::Core::PathBuffer<::std::string> const& $getSubPath() const;
#endif // @header-generator platform

    MCNAPI bool $supportsSignatureVerification() const;

    MCNAPI ::PackAccessAssetGenerationResult $generateAssetSet();

    MCNAPI ::PackAccessAssetGenerationResult $regenerateAssetSet();

    MCNAPI bool $canRecurse() const;

    MCNAPI ::ContentIdentity $readContentIdentity() const;

    MCNAPI bool $isAssetExtractionViable() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<Bedrock::Resources::Archive::Reader> $_loadArchive(::Core::Path const&) const;
#else // @header-generator platform
    MCNAPI ::std::unique_ptr<::Bedrock::Resources::Archive::Reader>
    $_loadArchive(::Core::Path const& packRelativePath) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<Bedrock::Resources::PreloadedPathHandle> $_preloadSubFolders(::Core::Path const&) const;
#else // @header-generator platform
    MCNAPI ::std::vector<::Bedrock::Resources::PreloadedPathHandle>
    $_preloadSubFolders(::Core::Path const& packRelativePath) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
