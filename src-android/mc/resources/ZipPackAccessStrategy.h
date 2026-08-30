#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/Result.h"
#include "mc/resources/PackAccessStrategy.h"
#include "mc/resources/PackAccessStrategyType.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class IFileAccess;
struct StreamableAssetSource;
struct ZipPackArgs;
namespace Bedrock::Resources { class PreloadedPathHandle; }
namespace Bedrock::Resources::Archive { class Reader; }
namespace Core { class Path; }
namespace Core { class PathView; }
namespace Core { class UnzipFile; }
// clang-format on

class ZipPackAccessStrategy : public ::PackAccessStrategy {
public:
    // ZipPackAccessStrategy inner types define
    using MaybeOwnedFileAccess =
        std::variant<gsl::not_null<Bedrock::NonOwnerPointer<IFileAccess>>, gsl::not_null<std::shared_ptr<IFileAccess>>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>                                mFileAccess;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Core::UnzipFile>> mZipFile;
    ::ll::TypedStorage<4, 40, std::recursive_mutex>            mMutex;
    ::ll::TypedStorage<8, 48, ::ResourceLocation const>        mArchiveLocation;
    ::ll::UntypedStorage<8, 24>                                mSubPath;
    ::ll::TypedStorage<8, 24, std::string const>               mPackName;
    ::ll::TypedStorage<1, 1, bool const>                       mIsTrusted;
    ::ll::TypedStorage<1, 1, bool const>                       mIsWritable;
    // NOLINTEND

public:
    // prevent constructor by default
    ZipPackAccessStrategy();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ZipPackAccessStrategy();

    virtual ulong getPackSize() const;

    virtual ::ResourceLocation const& getPackLocation() const;

    virtual std::string const& getPackName() const;

    virtual bool isWritable() const;

    virtual bool isTrusted() const;

    virtual bool hasAsset(::Core::Path const&, bool, bool) const;

    virtual bool hasFolder(::Core::Path const&) const;

    virtual bool getAsset(::Core::Path const&, std::string&, bool) const;

    virtual void forEachIn(::Core::Path const&, std::function<void (const Core::Path&)>, bool) const;

    virtual ::PackAccessStrategyType getStrategyType() const;

    virtual ::Core::PathBuffer<std::string> const& getSubPath() const;

    virtual bool supportsSignatureVerification() const;

    virtual std::unique_ptr<PackAccessStrategy> createSubPack(::Core::Path const&) const;

    virtual void unload();

    virtual ::ContentIdentity readContentIdentity() const;

    virtual ::Bedrock::Result<StreamableAssetSource, std::error_code> getStreamableSource(::Core::Path const&, std::optional<Core::PathView>) const;

    virtual std::unique_ptr<Bedrock::Resources::Archive::Reader> _loadArchive(::Core::Path const&) const;

    virtual std::vector<Bedrock::Resources::PreloadedPathHandle> _preloadSubFolders(::Core::Path const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ZipPackAccessStrategy(
        std::variant<gsl::not_null<Bedrock::NonOwnerPointer<IFileAccess>>, gsl::not_null<std::shared_ptr<IFileAccess>>>,
        ::ZipPackArgs&&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::variant<gsl::not_null<Bedrock::NonOwnerPointer<IFileAccess>>, gsl::not_null<std::shared_ptr<IFileAccess>>>,
        ::ZipPackArgs&&
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
    MCNAPI ulong $getPackSize() const;

    MCNAPI ::ResourceLocation const& $getPackLocation() const;

    MCNAPI std::string const& $getPackName() const;

    MCNAPI bool $isWritable() const;

    MCNAPI bool $isTrusted() const;

    MCNAPI bool $hasAsset(::Core::Path const&, bool, bool) const;

    MCNAPI bool $hasFolder(::Core::Path const&) const;

    MCNAPI bool $getAsset(::Core::Path const&, std::string&, bool) const;

    MCNAPI void $forEachIn(::Core::Path const&, std::function<void(const Core::Path&)>, bool) const;

    MCNAPI ::PackAccessStrategyType $getStrategyType() const;

    MCNAPI ::Core::PathBuffer<std::string> const& $getSubPath() const;

    MCNAPI bool $supportsSignatureVerification() const;

    MCNAPI std::unique_ptr<PackAccessStrategy> $createSubPack(::Core::Path const&) const;

    MCNAPI void $unload();

    MCNAPI ::ContentIdentity $readContentIdentity() const;

    MCNAPI ::Bedrock::Result<StreamableAssetSource, std::error_code>
    $getStreamableSource(::Core::Path const&, std::optional<Core::PathView>) const;

    MCNAPI std::unique_ptr<Bedrock::Resources::Archive::Reader> $_loadArchive(::Core::Path const&) const;

    MCNAPI std::vector<Bedrock::Resources::PreloadedPathHandle> $_preloadSubFolders(::Core::Path const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
