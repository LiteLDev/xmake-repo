#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/resource/ResourceLocation.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/Result.h"
#include "mc/resources/PackAccessStrategy.h"
#include "mc/resources/PackAccessStrategyType.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class IFileAccess;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ResourceLocation;
#endif // @header-generator platform
struct StreamableAssetSource;
struct ZipPackArgs;
namespace Bedrock::Resources { class PreloadedPathHandle; }
namespace Bedrock::Resources::Archive { class Reader; }
namespace Core { class Path; }
namespace Core { class PathView; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { class UnzipFile; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ZipPackAccessStrategy : public ::PackAccessStrategy {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // ZipPackAccessStrategy inner types define
    using MaybeOwnedFileAccess =
        std::variant<gsl::not_null<Bedrock::NonOwnerPointer<IFileAccess>>, gsl::not_null<std::shared_ptr<IFileAccess>>>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 32>                                mFileAccess;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Core::UnzipFile>> mZipFile;
    ::ll::TypedStorage<4, 40, std::recursive_mutex>            mMutex;
    ::ll::TypedStorage<8, 48, ::ResourceLocation const>        mArchiveLocation;
    ::ll::UntypedStorage<8, 24>                                mSubPath;
    ::ll::TypedStorage<8, 24, std::string const>               mPackName;
    ::ll::TypedStorage<1, 1, bool const>                       mIsTrusted;
    ::ll::TypedStorage<1, 1, bool const>                       mIsWritable;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk18fd21;
    ::ll::UntypedStorage<8, 8>  mUnkf758b1;
    ::ll::UntypedStorage<8, 80> mUnkea609d;
    ::ll::UntypedStorage<8, 56> mUnkadd3fa;
    ::ll::UntypedStorage<8, 32> mUnkfb82e0;
    ::ll::UntypedStorage<8, 32> mUnk21066c;
    ::ll::UntypedStorage<1, 1>  mUnkcea598;
    ::ll::UntypedStorage<1, 1>  mUnk773214;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ZipPackAccessStrategy& operator=(ZipPackAccessStrategy const&);
    ZipPackAccessStrategy(ZipPackAccessStrategy const&);
#endif // @header-generator platform
    ZipPackAccessStrategy();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ZipPackAccessStrategy();
#else // @header-generator platform
    virtual ~ZipPackAccessStrategy() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getPackSize() const;
#else // @header-generator platform
    virtual uint64 getPackSize() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ResourceLocation const& getPackLocation() const;
#else // @header-generator platform
    virtual ::ResourceLocation const& getPackLocation() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getPackName() const;
#else // @header-generator platform
    virtual ::std::string const& getPackName() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isWritable() const;
#else // @header-generator platform
    virtual bool isWritable() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isTrusted() const;
#else // @header-generator platform
    virtual bool isTrusted() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasAsset(::Core::Path const&, bool, bool) const;
#else // @header-generator platform
    virtual bool hasAsset(::Core::Path const& packRelativePath, bool trustedContentOnly, bool caseSensative) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasFolder(::Core::Path const&) const;
#else // @header-generator platform
    virtual bool hasFolder(::Core::Path const& packRelativePath) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool getAsset(::Core::Path const&, std::string&, bool) const;
#else // @header-generator platform
    virtual bool getAsset(::Core::Path const& packRelativePath, ::std::string& result, bool trustedContentOnly) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void forEachIn(::Core::Path const&, std::function<void (const Core::Path&)>, bool) const;
#else // @header-generator platform
    virtual void forEachIn(
        ::Core::Path const&                        packRelativePath,
        ::std::function<void(::Core::Path const&)> callback,
        bool                                       recurseAnyways
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::PackAccessStrategyType getStrategyType() const;
#else // @header-generator platform
    virtual ::PackAccessStrategyType getStrategyType() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> const& getSubPath() const;
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> const& getSubPath() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool supportsSignatureVerification() const;
#else // @header-generator platform
    virtual bool supportsSignatureVerification() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<PackAccessStrategy> createSubPack(::Core::Path const&) const;
#else // @header-generator platform
    virtual ::std::unique_ptr<::PackAccessStrategy> createSubPack(::Core::Path const& subPath) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void unload();
#else // @header-generator platform
    virtual void unload() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ContentIdentity readContentIdentity() const;
#else // @header-generator platform
    virtual ::ContentIdentity readContentIdentity() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<StreamableAssetSource, std::error_code> getStreamableSource(::Core::Path const&, std::optional<Core::PathView>) const;
#else // @header-generator platform
    virtual ::Bedrock::Result<::StreamableAssetSource>
    getStreamableSource(::Core::Path const& packRelativePath, ::std::optional<::Core::PathView> tempDirectory) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<Bedrock::Resources::Archive::Reader> _loadArchive(::Core::Path const&) const;
#else // @header-generator platform
    virtual ::std::unique_ptr<::Bedrock::Resources::Archive::Reader>
    _loadArchive(::Core::Path const& packRelativePath) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<Bedrock::Resources::PreloadedPathHandle> _preloadSubFolders(::Core::Path const&) const;
    // clang-format on
#else // @header-generator platform
    virtual ::std::vector<::Bedrock::Resources::PreloadedPathHandle>
    _preloadSubFolders(::Core::Path const& packRelativePath) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MCNAPI ZipPackAccessStrategy(::gsl::not_null<::std::shared_ptr<::IFileAccess>> fileAccess, ::ZipPackArgs&& args);

#endif // @header-generator platform
    MCNAPI ZipPackAccessStrategy(
#if defined(LL_PLAT_A) // @header-generator platform
        std::variant<gsl::not_null<Bedrock::NonOwnerPointer<IFileAccess>>, gsl::not_null<std::shared_ptr<IFileAccess>>>,
        ::ZipPackArgs&&
#else // @header-generator platform
        ::std::variant<::Bedrock::NotNullNonOwnerPtr<::IFileAccess>, ::gsl::not_null<::std::shared_ptr<::IFileAccess>>>
                        fileAccess,
        ::ZipPackArgs&& args
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    MCNAPI bool initZipFile() const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        std::variant<gsl::not_null<Bedrock::NonOwnerPointer<IFileAccess>>, gsl::not_null<std::shared_ptr<IFileAccess>>>,
        ::ZipPackArgs&&
    );
    // NOLINTEND
#else // @header-generator platform
    MCNAPI void* $ctor(::gsl::not_null<::std::shared_ptr<::IFileAccess>> fileAccess, ::ZipPackArgs&& args);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(
        ::std::variant<::Bedrock::NotNullNonOwnerPtr<::IFileAccess>, ::gsl::not_null<::std::shared_ptr<::IFileAccess>>>
                        fileAccess,
        ::ZipPackArgs&& args
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $getPackSize() const;
#else // @header-generator platform
    MCNAPI uint64 $getPackSize() const;
#endif // @header-generator platform

    MCNAPI ::ResourceLocation const& $getPackLocation() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& $getPackName() const;
#else // @header-generator platform
    MCNAPI ::std::string const& $getPackName() const;
#endif // @header-generator platform

    MCNAPI bool $isWritable() const;

    MCNAPI bool $isTrusted() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasAsset(::Core::Path const&, bool, bool) const;
#else // @header-generator platform
    MCNAPI bool $hasAsset(::Core::Path const& packRelativePath, bool trustedContentOnly, bool caseSensative) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasFolder(::Core::Path const&) const;
#else // @header-generator platform
    MCNAPI bool $hasFolder(::Core::Path const& packRelativePath) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $getAsset(::Core::Path const&, std::string&, bool) const;
#else // @header-generator platform
    MCNAPI bool $getAsset(::Core::Path const& packRelativePath, ::std::string& result, bool trustedContentOnly) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $forEachIn(::Core::Path const&, std::function<void(const Core::Path&)>, bool) const;
#else // @header-generator platform
    MCNAPI void $forEachIn(
        ::Core::Path const&                        packRelativePath,
        ::std::function<void(::Core::Path const&)> callback,
        bool                                       recurseAnyways
    ) const;
#endif // @header-generator platform

    MCNAPI ::PackAccessStrategyType $getStrategyType() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathBuffer<std::string> const& $getSubPath() const;
#else // @header-generator platform
    MCNAPI ::Core::PathBuffer<::std::string> const& $getSubPath() const;
#endif // @header-generator platform

    MCNAPI bool $supportsSignatureVerification() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<PackAccessStrategy> $createSubPack(::Core::Path const&) const;
#else // @header-generator platform
    MCNAPI ::std::unique_ptr<::PackAccessStrategy> $createSubPack(::Core::Path const& subPath) const;
#endif // @header-generator platform

    MCNAPI void $unload();

    MCNAPI ::ContentIdentity $readContentIdentity() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<StreamableAssetSource, std::error_code>
    $getStreamableSource(::Core::Path const&, std::optional<Core::PathView>) const;
#else // @header-generator platform
    MCNAPI ::Bedrock::Result<::StreamableAssetSource>
    $getStreamableSource(::Core::Path const& packRelativePath, ::std::optional<::Core::PathView> tempDirectory) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<Bedrock::Resources::Archive::Reader> $_loadArchive(::Core::Path const&) const;
#else // @header-generator platform
    MCNAPI ::std::unique_ptr<::Bedrock::Resources::Archive::Reader>
    $_loadArchive(::Core::Path const& packRelativePath) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<Bedrock::Resources::PreloadedPathHandle> $_preloadSubFolders(::Core::Path const&) const;
    // NOLINTEND
#else // @header-generator platform
    MCNAPI ::std::vector<::Bedrock::Resources::PreloadedPathHandle>
    $_preloadSubFolders(::Core::Path const& packRelativePath) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
