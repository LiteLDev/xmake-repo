#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/Result.h"
#include "mc/platform/UUID.h"
#include "mc/resources/PackAccessAssetGenerationResult.h"
#include "mc/resources/PackAccessStrategy.h"
#include "mc/resources/PackAccessStrategyType.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class IContentKeyProvider;
class IFileAccess;
class IPackIOProvider;
struct StreamableAssetSource;
namespace Core { class Path; }
namespace Core { class PathView; }
// clang-format on

class DirectoryPackWithEncryptionAccessStrategy : public ::PackAccessStrategy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                      mPackName;
    ::ll::TypedStorage<8, 48, ::ResourceLocation>                               mPackLocation;
    ::ll::UntypedStorage<8, 24>                                                 mPackPath;
    ::ll::TypedStorage<8, 48, ::ResourceLocation>                               mBlobLocation;
    ::ll::TypedStorage<8, 16, ::mce::UUID>                                      mPackId;
    ::ll::UntypedStorage<8, 24>                                                 mKeyProvider;
    ::ll::UntypedStorage<8, 24>                                                 mFileAccess;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PackAccessStrategy>>               mEncryptedBlobAccessStrategy;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<IPackIOProvider>>> mIO;
    // NOLINTEND

public:
    // prevent constructor by default
    DirectoryPackWithEncryptionAccessStrategy();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~DirectoryPackWithEncryptionAccessStrategy();

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

    virtual std::unique_ptr<PackAccessStrategy> createSubPack(::Core::Path const&) const;

    virtual ::PackAccessAssetGenerationResult generateAssetSet();

    virtual void unload();

    virtual ::ContentIdentity readContentIdentity() const;

    virtual ::Bedrock::Result<StreamableAssetSource, std::error_code> getStreamableSource(::Core::Path const&, std::optional<Core::PathView>) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DirectoryPackWithEncryptionAccessStrategy(
        ::ResourceLocation const&,
        ::ResourceLocation const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&,
        ::IFileAccess&,
        ::IPackIOProvider const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ResourceLocation const&,
        ::ResourceLocation const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&,
        ::IFileAccess&,
        ::IPackIOProvider const&
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

    MCNAPI std::unique_ptr<PackAccessStrategy> $createSubPack(::Core::Path const&) const;

    MCNAPI ::PackAccessAssetGenerationResult $generateAssetSet();

    MCNAPI void $unload();

    MCNAPI ::ContentIdentity $readContentIdentity() const;

    MCNAPI ::Bedrock::Result<StreamableAssetSource, std::error_code>
    $getStreamableSource(::Core::Path const&, std::optional<Core::PathView>) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
