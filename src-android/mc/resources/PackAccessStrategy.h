#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/PackAccessState.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/SharedLockbox.h"
#include "mc/deps/resource_processing/PreloadState.h"
#include "mc/platform/Result.h"
#include "mc/resources/PackAccessAssetGenerationResult.h"
#include "mc/resources/PackAccessStrategyType.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class PackAssetSet;
class ResourceLocation;
struct EncryptedAssetInfo;
struct StreamableAssetSource;
namespace Bedrock::Resources { class PreloadCache; }
namespace Bedrock::Resources { class PreloadedPathHandle; }
namespace Bedrock::Resources::Archive { class Reader; }
namespace Core { class FileHandlePool; }
namespace Core { class Path; }
namespace Core { class PathView; }
namespace Core { template<typename T0, int T1> class BasicStackString; }
namespace Json { class Value; }
// clang-format on

class PackAccessStrategy {
public:
    // PackAccessStrategy inner types define
    using EnumerationCallback = std::function<void(const Core::Path&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Core::FileHandlePool>>                              mHandlePool;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<Bedrock::Resources::PreloadCache>>> mPreloaded;
    ::ll::UntypedStorage<8, 152>                                                                  mAssetSet;
    // NOLINTEND

public:
    // prevent constructor by default
    PackAccessStrategy();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~PackAccessStrategy();

    virtual ulong getPackSize() const = 0;

    virtual ::ResourceLocation const& getPackLocation() const = 0;

    virtual std::string const& getPackName() const = 0;

    virtual bool isWritable() const = 0;

    virtual bool isTrusted() const = 0;

    virtual bool hasAsset(::Core::Path const&, bool, bool) const = 0;

    virtual bool hasFolder(::Core::Path const&) const = 0;

    virtual bool getAsset(::Core::Path const&, std::string&, bool) const = 0;

    virtual void forEachIn(::Core::Path const&, std::function<void (const Core::Path&)>, bool) const = 0;

    virtual void forEachInAssetSet(::Core::Path const&, std::function<void (const Core::Path&)>) const;

    virtual ::PackAccessStrategyType getStrategyType() const = 0;

    virtual ::Core::PathBuffer<std::string> const& getSubPath() const;

    virtual bool supportsSignatureVerification() const;

    virtual std::unique_ptr<PackAccessStrategy> createSubPack(::Core::Path const&) const = 0;

    virtual ::PackAccessAssetGenerationResult generateAssetSet();

    virtual ::PackAccessAssetGenerationResult regenerateAssetSet();

    virtual bool canRecurse() const;

    virtual void unload() = 0;

    virtual ::ContentIdentity readContentIdentity() const;

    virtual bool isAssetExtractionViable() const;

    virtual ::Bedrock::Result<StreamableAssetSource, std::error_code> getStreamableSource(::Core::Path const&, std::optional<Core::PathView>) const = 0;

    virtual std::unique_ptr<Bedrock::Resources::Archive::Reader> _loadArchive(::Core::Path const&) const;

    virtual std::vector<Bedrock::Resources::PreloadedPathHandle> _preloadSubFolders(::Core::Path const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PackAccessStrategy(std::unique_ptr<PackAssetSet>&&, ::gsl::not_null<std::shared_ptr<Core::FileHandlePool>>);

    MCNAPI ::EncryptedAssetInfo const* _getEncryptedAssetInfo(::Core::Path const&) const;

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
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Core::PathBuffer<Core::BasicStackString<char, 1024>> const& ARCHIVE_EXTENSION();

    MCNAPI static ::Core::PathBuffer<Core::BasicStackString<char, 1024>> const& ARCHIVE_FOLDER();

    MCNAPI static ::Core::PathBuffer<std::string> const& PACK_IMPORT_LOCK_FILE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::unique_ptr<PackAssetSet>&&, ::gsl::not_null<std::shared_ptr<Core::FileHandlePool>>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $forEachInAssetSet(::Core::Path const&, std::function<void(const Core::Path&)>) const;

    MCNAPI ::Core::PathBuffer<std::string> const& $getSubPath() const;

    MCNAPI bool $supportsSignatureVerification() const;

    MCNAPI ::PackAccessAssetGenerationResult $generateAssetSet();

    MCNAPI ::PackAccessAssetGenerationResult $regenerateAssetSet();

    MCNAPI bool $canRecurse() const;

    MCNAPI ::ContentIdentity $readContentIdentity() const;

    MCNAPI bool $isAssetExtractionViable() const;

    MCNAPI std::unique_ptr<Bedrock::Resources::Archive::Reader> $_loadArchive(::Core::Path const&) const;

    MCNAPI std::vector<Bedrock::Resources::PreloadedPathHandle> $_preloadSubFolders(::Core::Path const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
