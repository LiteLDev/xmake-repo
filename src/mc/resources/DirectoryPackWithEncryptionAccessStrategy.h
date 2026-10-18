#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/Result.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/UUID.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/resources/PackAccessAssetGenerationResult.h"
#include "mc/resources/PackAccessStrategy.h"
#include "mc/resources/PackAccessStrategyType.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class IContentKeyProvider;
class IFileAccess;
class IPackIOProvider;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ResourceLocation;
#endif // @header-generator platform
struct StreamableAssetSource;
namespace Core { class Path; }
namespace Core { class PathView; }
// clang-format on

class DirectoryPackWithEncryptionAccessStrategy : public ::PackAccessStrategy {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                      mPackName;
    ::ll::TypedStorage<8, 48, ::ResourceLocation>                               mPackLocation;
    ::ll::UntypedStorage<8, 24>                                                 mPackPath;
    ::ll::TypedStorage<8, 48, ::ResourceLocation>                               mBlobLocation;
    ::ll::TypedStorage<8, 16, ::mce::UUID>                                      mPackId;
    ::ll::UntypedStorage<8, 24>                                                 mKeyProvider;
    ::ll::UntypedStorage<8, 24>                                                 mFileAccess;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PackAccessStrategy>>               mEncryptedBlobAccessStrategy;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<IPackIOProvider>>> mIO;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkd15dc5;
    ::ll::UntypedStorage<8, 56> mUnk863770;
    ::ll::UntypedStorage<8, 32> mUnk5a317a;
    ::ll::UntypedStorage<8, 56> mUnke45de1;
    ::ll::UntypedStorage<8, 16> mUnk1b31b5;
    ::ll::UntypedStorage<8, 24> mUnkdf74db;
    ::ll::UntypedStorage<8, 24> mUnk9e54a2;
    ::ll::UntypedStorage<8, 8>  mUnk8f7696;
    ::ll::UntypedStorage<8, 8>  mUnk178f2b;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    DirectoryPackWithEncryptionAccessStrategy& operator=(DirectoryPackWithEncryptionAccessStrategy const&);
    DirectoryPackWithEncryptionAccessStrategy(DirectoryPackWithEncryptionAccessStrategy const&);
#endif // @header-generator platform
    DirectoryPackWithEncryptionAccessStrategy();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~DirectoryPackWithEncryptionAccessStrategy();
#else // @header-generator platform
    virtual ~DirectoryPackWithEncryptionAccessStrategy() /*override*/ = default;
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
    virtual void
    forEachIn(::Core::Path const& packRelativePath, ::std::function<void(::Core::Path const&)> callback, bool) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::PackAccessStrategyType getStrategyType() const;
#else // @header-generator platform
    virtual ::PackAccessStrategyType getStrategyType() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<PackAccessStrategy> createSubPack(::Core::Path const&) const;
#else // @header-generator platform
    virtual ::std::unique_ptr<::PackAccessStrategy> createSubPack(::Core::Path const& subPath) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::PackAccessAssetGenerationResult generateAssetSet();
#else // @header-generator platform
    virtual ::PackAccessAssetGenerationResult generateAssetSet() /*override*/;
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
    // clang-format on
#else // @header-generator platform
    virtual ::Bedrock::Result<::StreamableAssetSource>
    getStreamableSource(::Core::Path const&, ::std::optional<::Core::PathView>) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DirectoryPackWithEncryptionAccessStrategy(
#if defined(LL_PLAT_A) // @header-generator platform
        ::ResourceLocation const&,
        ::ResourceLocation const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&,
        ::IFileAccess&,
        ::IPackIOProvider const&
#else // @header-generator platform
        ::ResourceLocation const&                                         packLocation,
        ::ResourceLocation const&                                         encryptedContentLocation,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::IFileAccess&                                                    fileAccess,
        ::IPackIOProvider const&                                          io
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
#if defined(LL_PLAT_A) // @header-generator platform
        ::ResourceLocation const&,
        ::ResourceLocation const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&,
        ::IFileAccess&,
        ::IPackIOProvider const&
#else // @header-generator platform
        ::ResourceLocation const&                                         packLocation,
        ::ResourceLocation const&                                         encryptedContentLocation,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::IFileAccess&                                                    fileAccess,
        ::IPackIOProvider const&                                          io
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
    MCNAPI void
    $forEachIn(::Core::Path const& packRelativePath, ::std::function<void(::Core::Path const&)> callback, bool) const;
#endif // @header-generator platform

    MCNAPI ::PackAccessStrategyType $getStrategyType() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<PackAccessStrategy> $createSubPack(::Core::Path const&) const;
#else // @header-generator platform
    MCNAPI ::std::unique_ptr<::PackAccessStrategy> $createSubPack(::Core::Path const& subPath) const;
#endif // @header-generator platform

    MCNAPI ::PackAccessAssetGenerationResult $generateAssetSet();

    MCNAPI void $unload();

    MCNAPI ::ContentIdentity $readContentIdentity() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<StreamableAssetSource, std::error_code>
    $getStreamableSource(::Core::Path const&, std::optional<Core::PathView>) const;
    // NOLINTEND
#else // @header-generator platform
    MCNAPI ::Bedrock::Result<::StreamableAssetSource>
    $getStreamableSource(::Core::Path const&, ::std::optional<::Core::PathView>) const;
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
