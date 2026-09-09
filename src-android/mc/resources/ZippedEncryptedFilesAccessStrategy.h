#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/Result.h"
#include "mc/resources/EncryptedFileAccessStrategy.h"
#include "mc/resources/PackAccessStrategyType.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class IContentKeyProvider;
class IPackIOProvider;
class PackAccessStrategy;
class ResourceLocation;
struct StreamableAssetSource;
namespace Bedrock::Resources { class PreloadedPathHandle; }
namespace Core { class Path; }
namespace Core { class PathView; }
// clang-format on

class ZippedEncryptedFilesAccessStrategy : public ::EncryptedFileAccessStrategy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                   mSubPath;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PackAccessStrategy>> mZipAccessStrategy;
    // NOLINTEND

public:
    // prevent constructor by default
    ZippedEncryptedFilesAccessStrategy();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ZippedEncryptedFilesAccessStrategy();

    virtual ::ResourceLocation const& getPackLocation() const;

    virtual bool hasFolder(::Core::Path const&) const;

    virtual void forEachIn(::Core::Path const&, std::function<void (const Core::Path&)>, bool) const;

    virtual ::PackAccessStrategyType getStrategyType() const;

    virtual ::Core::PathBuffer<std::string> const& getSubPath() const;

    virtual bool supportsSignatureVerification() const;

    virtual std::unique_ptr<PackAccessStrategy> createSubPack(::Core::Path const&) const;

    virtual void unload();

    virtual ::Bedrock::Result<StreamableAssetSource, std::error_code> getStreamableSource(::Core::Path const&, std::optional<Core::PathView>) const;

    virtual std::vector<Bedrock::Resources::PreloadedPathHandle> _preloadSubFolders(::Core::Path const&) const;

    virtual std::string _getContentsFile();

    virtual std::string _getRawContentsFile() const;

    virtual std::string _getEncryptedAssetStream(::Core::Path const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ZippedEncryptedFilesAccessStrategy(
        ::ResourceLocation const&,
        ::ContentIdentity const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&,
        ::IPackIOProvider const&,
        ::Core::Path const&,
        std::unique_ptr<PackAccessStrategy>
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool
    isValidZippedEncryptedPack(::IPackIOProvider const&, ::Core::Path const&, ::ContentIdentity&, ::Core::Path const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ResourceLocation const&,
        ::ContentIdentity const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&,
        ::IPackIOProvider const&,
        ::Core::Path const&,
        std::unique_ptr<PackAccessStrategy>
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
    MCNAPI ::ResourceLocation const& $getPackLocation() const;

    MCNAPI bool $hasFolder(::Core::Path const&) const;

    MCNAPI void $forEachIn(::Core::Path const&, std::function<void(const Core::Path&)>, bool) const;

    MCNAPI ::PackAccessStrategyType $getStrategyType() const;

    MCNAPI ::Core::PathBuffer<std::string> const& $getSubPath() const;

    MCNAPI bool $supportsSignatureVerification() const;

    MCNAPI std::unique_ptr<PackAccessStrategy> $createSubPack(::Core::Path const&) const;

    MCNAPI void $unload();

    MCNAPI ::Bedrock::Result<StreamableAssetSource, std::error_code>
    $getStreamableSource(::Core::Path const&, std::optional<Core::PathView>) const;

    MCNAPI std::vector<Bedrock::Resources::PreloadedPathHandle> $_preloadSubFolders(::Core::Path const&) const;

    MCNAPI std::string $_getContentsFile();

    MCNAPI std::string $_getRawContentsFile() const;

    MCNAPI std::string $_getEncryptedAssetStream(::Core::Path const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
