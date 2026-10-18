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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                                   mSubPath;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PackAccessStrategy>> mZipAccessStrategy;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk8b98ee;
    ::ll::UntypedStorage<8, 8>  mUnk75a4be;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ZippedEncryptedFilesAccessStrategy& operator=(ZippedEncryptedFilesAccessStrategy const&);
    ZippedEncryptedFilesAccessStrategy(ZippedEncryptedFilesAccessStrategy const&);
#endif // @header-generator platform
    ZippedEncryptedFilesAccessStrategy();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ZippedEncryptedFilesAccessStrategy();
#else // @header-generator platform
    virtual ::ResourceLocation const& getPackLocation() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ResourceLocation const& getPackLocation() const;
#else // @header-generator platform
    virtual bool hasFolder(::Core::Path const& packRelativePath) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasFolder(::Core::Path const&) const;
#else // @header-generator platform
    virtual void forEachIn(
        ::Core::Path const&                        packRelativePath,
        ::std::function<void(::Core::Path const&)> callback,
        bool                                       recurseAnyways
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void forEachIn(::Core::Path const&, std::function<void (const Core::Path&)>, bool) const;
#else // @header-generator platform
    virtual ::PackAccessStrategyType getStrategyType() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::PackAccessStrategyType getStrategyType() const;
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> const& getSubPath() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> const& getSubPath() const;
#else // @header-generator platform
    virtual bool supportsSignatureVerification() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool supportsSignatureVerification() const;
#else // @header-generator platform
    virtual void unload() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<PackAccessStrategy> createSubPack(::Core::Path const&) const;
#else // @header-generator platform
    virtual ::Bedrock::Result<::StreamableAssetSource>
    getStreamableSource(::Core::Path const& packRelativePath, ::std::optional<::Core::PathView> tempDirectory) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void unload();
#else // @header-generator platform
    virtual ::std::unique_ptr<::PackAccessStrategy> createSubPack(::Core::Path const& subPath) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<StreamableAssetSource, std::error_code> getStreamableSource(::Core::Path const&, std::optional<Core::PathView>) const;
#else // @header-generator platform
    virtual ::std::string _getContentsFile() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<Bedrock::Resources::PreloadedPathHandle> _preloadSubFolders(::Core::Path const&) const;
#else // @header-generator platform
    virtual ::std::string _getRawContentsFile() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string _getContentsFile();
#else // @header-generator platform
    virtual ::std::string _getEncryptedAssetStream(::Core::Path const& packRelativePath) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string _getRawContentsFile() const;

    virtual std::string _getEncryptedAssetStream(::Core::Path const&) const;
    // clang-format on
#else // @header-generator platform
    virtual ::std::vector<::Bedrock::Resources::PreloadedPathHandle>
    _preloadSubFolders(::Core::Path const& packRelativePath) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ZippedEncryptedFilesAccessStrategy(
#if defined(LL_PLAT_A) // @header-generator platform
        ::ResourceLocation const&,
        ::ContentIdentity const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&,
        ::IPackIOProvider const&,
        ::Core::Path const&,
        std::unique_ptr<PackAccessStrategy>
#else // @header-generator platform
        ::ResourceLocation const&                                         archiveLocation,
        ::ContentIdentity const&                                          contentIdentity,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::IPackIOProvider const&                                          io,
        ::Core::Path const&                                               subPath,
        ::std::unique_ptr<::PackAccessStrategy>                           zipSubPack
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool
    isValidZippedEncryptedPack(::IPackIOProvider const&, ::Core::Path const&, ::ContentIdentity&, ::Core::Path const&);
#else // @header-generator platform
    MCNAPI static bool isValidZippedEncryptedPack(
        ::IPackIOProvider const& io,
        ::Core::Path const&      pathToPack,
        ::ContentIdentity&       contentIdentity,
        ::Core::Path const&      subPath
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
#if defined(LL_PLAT_A) // @header-generator platform
        ::ResourceLocation const&,
        ::ContentIdentity const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&,
        ::IPackIOProvider const&,
        ::Core::Path const&,
        std::unique_ptr<PackAccessStrategy>
#else // @header-generator platform
        ::ResourceLocation const&                                         archiveLocation,
        ::ContentIdentity const&                                          contentIdentity,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::IPackIOProvider const&                                          io,
        ::Core::Path const&                                               subPath,
        ::std::unique_ptr<::PackAccessStrategy>                           zipSubPack
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ResourceLocation const& $getPackLocation() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasFolder(::Core::Path const&) const;
#else // @header-generator platform
    MCNAPI bool $hasFolder(::Core::Path const& packRelativePath) const;
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
#endif // @header-generator platform
    MCNAPI void $unload();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<StreamableAssetSource, std::error_code>
    $getStreamableSource(::Core::Path const&, std::optional<Core::PathView>) const;
#else // @header-generator platform
    MCNAPI ::Bedrock::Result<::StreamableAssetSource>
    $getStreamableSource(::Core::Path const& packRelativePath, ::std::optional<::Core::PathView> tempDirectory) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<Bedrock::Resources::PreloadedPathHandle> $_preloadSubFolders(::Core::Path const&) const;
#else // @header-generator platform
    MCNAPI ::std::unique_ptr<::PackAccessStrategy> $createSubPack(::Core::Path const& subPath) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $_getContentsFile();
#else // @header-generator platform
    MCNAPI ::std::string $_getContentsFile();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $_getRawContentsFile() const;
#else // @header-generator platform
    MCNAPI ::std::string $_getRawContentsFile() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $_getEncryptedAssetStream(::Core::Path const&) const;
    // NOLINTEND
#else // @header-generator platform
    MCNAPI ::std::string $_getEncryptedAssetStream(::Core::Path const& packRelativePath) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCNAPI ::std::vector<::Bedrock::Resources::PreloadedPathHandle>
    $_preloadSubFolders(::Core::Path const& packRelativePath) const;


#endif // @header-generator platform
    // NOLINTEND
};
