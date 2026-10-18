#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/AssetEncryptionMode.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/ContentIdentity.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/Result.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/resources/AssetEncryptionMode.h"
#endif // @header-generator platform
#include "mc/resources/DirectoryPackAccessStrategy.h"
#include "mc/resources/PackAccessAssetGenerationResult.h"
#include "mc/resources/PackAccessStrategyType.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ContentIdentity;
#endif // @header-generator platform
class IContentKeyProvider;
class IPackIOProvider;
class PackAccessStrategy;
class ResourceLocation;
struct EncryptedAssetInfo;
struct StreamableAssetSource;
namespace Bedrock::Resources::Archive { class Reader; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { class InputFileStream; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Core { class Path; }
namespace Core { class PathView; }
// clang-format on

class EncryptedFileAccessStrategy : public ::DirectoryPackAccessStrategy {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<IPackIOProvider>>> mIO;
    ::ll::TypedStorage<8, 24, ::ContentIdentity>                                mContentIdentity;
    ::ll::UntypedStorage<8, 24>                                                 mKeyProvider;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk564fc9;
    ::ll::UntypedStorage<8, 24> mUnkcc53ff;
    ::ll::UntypedStorage<8, 24> mUnk265e3d;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    EncryptedFileAccessStrategy& operator=(EncryptedFileAccessStrategy const&);
    EncryptedFileAccessStrategy(EncryptedFileAccessStrategy const&);
#endif // @header-generator platform
    EncryptedFileAccessStrategy();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~EncryptedFileAccessStrategy();
#else // @header-generator platform
    virtual ::PackAccessAssetGenerationResult generateAssetSet() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isWritable() const;
#else // @header-generator platform
    virtual bool isTrusted() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isTrusted() const;
#else // @header-generator platform
    virtual bool isWritable() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasAsset(::Core::Path const&, bool, bool) const;
#else // @header-generator platform
    virtual bool hasAsset(::Core::Path const& packRelativePath, bool trustedContentOnly, bool caseSensative) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool getAsset(::Core::Path const&, std::string&, bool) const;
#else // @header-generator platform
    virtual bool getAsset(::Core::Path const& packRelativePath, ::std::string& result, bool trustedContentOnly) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::PackAccessStrategyType getStrategyType() const;
#else // @header-generator platform
    virtual ::std::unique_ptr<::PackAccessStrategy> createSubPack(::Core::Path const& subPath) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<PackAccessStrategy> createSubPack(::Core::Path const&) const;
#else // @header-generator platform
    virtual bool isAssetExtractionViable() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::PackAccessAssetGenerationResult generateAssetSet();
#else // @header-generator platform
    virtual ::Bedrock::Result<::StreamableAssetSource>
    getStreamableSource(::Core::Path const& packRelativePath, ::std::optional<::Core::PathView> tempDirectory) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ContentIdentity readContentIdentity() const;
#else // @header-generator platform
    virtual ::PackAccessStrategyType getStrategyType() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isAssetExtractionViable() const;
#else // @header-generator platform
    virtual ::ContentIdentity readContentIdentity() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<StreamableAssetSource, std::error_code> getStreamableSource(::Core::Path const&, std::optional<Core::PathView>) const;
#else // @header-generator platform
    virtual ::std::string _getContentsFile();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<Bedrock::Resources::Archive::Reader> _loadArchive(::Core::Path const&) const;
#else // @header-generator platform
    virtual ::std::string _getRawContentsFile() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string _getContentsFile();
#else // @header-generator platform
    virtual ::std::string _getEncryptedAssetStream(::Core::Path const& packRelativePath) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string _getRawContentsFile() const;

    virtual std::string _getEncryptedAssetStream(::Core::Path const&) const;
    // clang-format on
#else // @header-generator platform
    virtual ::std::unique_ptr<::Bedrock::Resources::Archive::Reader>
    _loadArchive(::Core::Path const& packRelativePath) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EncryptedFileAccessStrategy(
#if defined(LL_PLAT_A) // @header-generator platform
        ::ResourceLocation const&,
        ::ContentIdentity const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&,
        bool,
        ::IPackIOProvider const&,
        std::optional<std::unordered_map<Core::Path, EncryptedAssetInfo>>
#else // @header-generator platform
        ::ResourceLocation const&                                                 resourceLocation,
        ::ContentIdentity const&                                                  contentIdentity,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const&         keyProvider,
        bool                                                                      canRecurse,
        ::IPackIOProvider const&                                                  io,
        ::std::optional<::std::unordered_map<::Core::Path, ::EncryptedAssetInfo>> assetSet
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string _decryptContentsFile(std::string);
#else // @header-generator platform
    MCNAPI ::std::string _decryptContentsFile(::std::string contents);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> _getKeyProvider() const;

    MCNAPI std::unique_ptr<Bedrock::Resources::Archive::Reader>
           _loadArchive(::Core::PathView, std::string const&) const;
#else // @header-generator platform
    MCNAPI ::std::unique_ptr<::Bedrock::Resources::Archive::Reader>
    _loadArchive(::Core::PathView packRelativeArchiveFile, ::std::string const& key) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool _getContentIdentityFromEncryptedStream(std::string&, ::ContentIdentity&);

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI static bool
#if defined(LL_PLAT_A) // @header-generator platform
    _transformStream(std::string&, std::string const&, ::ContentIdentity const&, ::AssetEncryptionMode, ulong);
#else // @header-generator platform
    _getContentIdentityFromEncryptedStream(::std::string& stream, ::ContentIdentity& contentIdentity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool
    _transformStream(::gsl::span<const char>, ::gsl::span<char>, std::string const&, ulong&, ::AssetEncryptionMode);
#else // @header-generator platform
    MCNAPI static bool _transformStream(
        ::gsl::span<char const> input,
        ::gsl::span<char>       output,
        ::std::string const&    key,
        uint64&                 bytesWritten,
        ::AssetEncryptionMode   mode
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool contentFileExists(::Core::Path const&);
#else // @header-generator platform
    MCNAPI static bool _transformStream(
        ::std::string&           stream,
        ::std::string const&     key,
        ::ContentIdentity const& contentIdentity,
        ::AssetEncryptionMode    mode,
        uint64                   offset
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool isValidEncryptedPack(::Core::Path const&, ::ContentIdentity&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI static bool contentFileExists(::Core::Path const& pathToPack);
#endif

    MCNAPI static bool isValidEncryptedPack(::Core::Path const& pathToPack, ::ContentIdentity& contentIdentity);
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
        bool,
        ::IPackIOProvider const&,
        std::optional<std::unordered_map<Core::Path, EncryptedAssetInfo>>
#else // @header-generator platform
        ::ResourceLocation const&                                                 resourceLocation,
        ::ContentIdentity const&                                                  contentIdentity,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const&         keyProvider,
        bool                                                                      canRecurse,
        ::IPackIOProvider const&                                                  io,
        ::std::optional<::std::unordered_map<::Core::Path, ::EncryptedAssetInfo>> assetSet
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
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isWritable() const;
#else // @header-generator platform
    MCNAPI ::PackAccessAssetGenerationResult $generateAssetSet();
#endif // @header-generator platform

    MCNAPI bool $isTrusted() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasAsset(::Core::Path const&, bool, bool) const;
#else // @header-generator platform
    MCNAPI bool $isWritable() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $getAsset(::Core::Path const&, std::string&, bool) const;
#else // @header-generator platform
    MCNAPI bool $hasAsset(::Core::Path const& packRelativePath, bool trustedContentOnly, bool caseSensative) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PackAccessStrategyType $getStrategyType() const;
#else // @header-generator platform
    MCNAPI bool $getAsset(::Core::Path const& packRelativePath, ::std::string& result, bool trustedContentOnly) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<PackAccessStrategy> $createSubPack(::Core::Path const&) const;

    MCNAPI ::PackAccessAssetGenerationResult $generateAssetSet();

    MCNAPI ::ContentIdentity $readContentIdentity() const;
#else // @header-generator platform
    MCNAPI ::std::unique_ptr<::PackAccessStrategy> $createSubPack(::Core::Path const& subPath) const;
#endif // @header-generator platform

    MCNAPI bool $isAssetExtractionViable() const;

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
    MCNAPI ::PackAccessStrategyType $getStrategyType() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $_getContentsFile();
#else // @header-generator platform
    MCNAPI ::ContentIdentity $readContentIdentity() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $_getRawContentsFile() const;
#else // @header-generator platform
    MCNAPI ::std::string $_getContentsFile();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $_getEncryptedAssetStream(::Core::Path const&) const;
#else // @header-generator platform
    MCNAPI ::std::string $_getRawContentsFile() const;

    MCNAPI ::std::string $_getEncryptedAssetStream(::Core::Path const& packRelativePath) const;

    MCNAPI ::std::unique_ptr<::Bedrock::Resources::Archive::Reader>
    $_loadArchive(::Core::Path const& packRelativePath) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
