#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/AssetEncryptionMode.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/ContentIdentity.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/Result.h"
#include "mc/resources/DirectoryPackAccessStrategy.h"
#include "mc/resources/PackAccessAssetGenerationResult.h"
#include "mc/resources/PackAccessStrategyType.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
class IPackIOProvider;
class PackAccessStrategy;
class ResourceLocation;
struct EncryptedAssetInfo;
struct StreamableAssetSource;
namespace Bedrock::Resources::Archive { class Reader; }
namespace Core { class InputFileStream; }
namespace Core { class Path; }
namespace Core { class PathView; }
// clang-format on

class EncryptedFileAccessStrategy : public ::DirectoryPackAccessStrategy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<IPackIOProvider>>> mIO;
    ::ll::TypedStorage<8, 24, ::ContentIdentity>                                mContentIdentity;
    ::ll::UntypedStorage<8, 24>                                                 mKeyProvider;
    // NOLINTEND

public:
    // prevent constructor by default
    EncryptedFileAccessStrategy();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~EncryptedFileAccessStrategy();

    virtual bool isWritable() const;

    virtual bool isTrusted() const;

    virtual bool hasAsset(::Core::Path const&, bool, bool) const;

    virtual bool getAsset(::Core::Path const&, std::string&, bool) const;

    virtual ::PackAccessStrategyType getStrategyType() const;

    virtual std::unique_ptr<PackAccessStrategy> createSubPack(::Core::Path const&) const;

    virtual ::PackAccessAssetGenerationResult generateAssetSet();

    virtual ::ContentIdentity readContentIdentity() const;

    virtual bool isAssetExtractionViable() const;

    virtual ::Bedrock::Result<StreamableAssetSource, std::error_code> getStreamableSource(::Core::Path const&, std::optional<Core::PathView>) const;

    virtual std::unique_ptr<Bedrock::Resources::Archive::Reader> _loadArchive(::Core::Path const&) const;

    virtual std::string _getContentsFile();

    virtual std::string _getRawContentsFile() const;

    virtual std::string _getEncryptedAssetStream(::Core::Path const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EncryptedFileAccessStrategy(
        ::ResourceLocation const&,
        ::ContentIdentity const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&,
        bool,
        ::IPackIOProvider const&,
        std::optional<std::unordered_map<Core::Path, EncryptedAssetInfo>>
    );

    MCNAPI std::string _decryptContentsFile(std::string);

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> _getKeyProvider() const;

    MCNAPI std::unique_ptr<Bedrock::Resources::Archive::Reader>
           _loadArchive(::Core::PathView, std::string const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _getContentIdentityFromEncryptedStream(std::string&, ::ContentIdentity&);

    MCNAPI static bool
    _transformStream(std::string&, std::string const&, ::ContentIdentity const&, ::AssetEncryptionMode, ulong);

    MCNAPI static bool
    _transformStream(::gsl::span<const char>, ::gsl::span<char>, std::string const&, ulong&, ::AssetEncryptionMode);

    MCNAPI static bool contentFileExists(::Core::Path const&);

    MCNAPI static bool isValidEncryptedPack(::Core::Path const&, ::ContentIdentity&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ResourceLocation const&,
        ::ContentIdentity const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&,
        bool,
        ::IPackIOProvider const&,
        std::optional<std::unordered_map<Core::Path, EncryptedAssetInfo>>
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
    MCNAPI bool $isWritable() const;

    MCNAPI bool $isTrusted() const;

    MCNAPI bool $hasAsset(::Core::Path const&, bool, bool) const;

    MCNAPI bool $getAsset(::Core::Path const&, std::string&, bool) const;

    MCNAPI ::PackAccessStrategyType $getStrategyType() const;

    MCNAPI std::unique_ptr<PackAccessStrategy> $createSubPack(::Core::Path const&) const;

    MCNAPI ::PackAccessAssetGenerationResult $generateAssetSet();

    MCNAPI ::ContentIdentity $readContentIdentity() const;

    MCNAPI bool $isAssetExtractionViable() const;

    MCNAPI ::Bedrock::Result<StreamableAssetSource, std::error_code>
    $getStreamableSource(::Core::Path const&, std::optional<Core::PathView>) const;

    MCNAPI std::unique_ptr<Bedrock::Resources::Archive::Reader> $_loadArchive(::Core::Path const&) const;

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
