#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/Result.h"
#include "mc/resources/PackAccessStrategy.h"
#include "mc/resources/PackAccessStrategyType.h"

// auto generated forward declare list
// clang-format off
class PackAssetSet;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ResourceLocation;
#endif // @header-generator platform
struct StreamableAssetSource;
namespace Bedrock::Resources { class PreloadedPathHandle; }
namespace Bedrock::Resources::Archive { class Reader; }
namespace Core { class FileHandlePool; }
namespace Core { class Path; }
namespace Core { class PathView; }
// clang-format on

class DirectoryPackAccessStrategy : public ::PackAccessStrategy {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // DirectoryPackAccessStrategy inner types define
    using AssetReader = std::function<std::string(const Core::Path&)>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 48, ::ResourceLocation const> mPackLocation;
    ::ll::UntypedStorage<8, 24>                         mPackPath;
    ::ll::TypedStorage<8, 24, std::string const>        mPackName;
    ::ll::UntypedStorage<8, 48>                         mReader;
    ::ll::UntypedStorage<1, 16>                         mRecurse;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 56> mUnkee374a;
    ::ll::UntypedStorage<8, 32> mUnk7f19e8;
    ::ll::UntypedStorage<8, 32> mUnka60262;
    ::ll::UntypedStorage<8, 64> mUnk8d8c35;
    ::ll::UntypedStorage<1, 1>  mUnk5799dd;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    DirectoryPackAccessStrategy& operator=(DirectoryPackAccessStrategy const&);
    DirectoryPackAccessStrategy(DirectoryPackAccessStrategy const&);
#endif // @header-generator platform
    DirectoryPackAccessStrategy();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~DirectoryPackAccessStrategy();
#else // @header-generator platform
    virtual ~DirectoryPackAccessStrategy() /*override*/;
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
    virtual std::unique_ptr<PackAccessStrategy> createSubPack(::Core::Path const&) const;
#else // @header-generator platform
    virtual ::std::unique_ptr<::PackAccessStrategy> createSubPack(::Core::Path const& subPath) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canRecurse() const;
#else // @header-generator platform
    virtual bool canRecurse() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void unload();
#else // @header-generator platform
    virtual void unload() /*override*/;
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
    MCNAPI DirectoryPackAccessStrategy(
#if defined(LL_PLAT_A) // @header-generator platform
        ::ResourceLocation const&,
        bool,
        std::function<std::string(const Core::Path&)>,
        ::gsl::not_null<std::shared_ptr<Core::FileHandlePool>>
#else // @header-generator platform
        ::ResourceLocation const&                                  packLocation,
        bool                                                       recurse,
        ::std::function<::std::string(::Core::Path const&)>        reader,
        ::gsl::not_null<::std::shared_ptr<::Core::FileHandlePool>> handlePool
#endif // @header-generator platform
    );

    MCNAPI DirectoryPackAccessStrategy(
#if defined(LL_PLAT_A) // @header-generator platform
        std::unique_ptr<PackAssetSet>&&,
        ::ResourceLocation const&,
        bool,
        std::function<std::string(const Core::Path&)>,
        ::gsl::not_null<std::shared_ptr<Core::FileHandlePool>>
#else // @header-generator platform
        ::std::unique_ptr<::PackAssetSet>&&                        assetSet,
        ::ResourceLocation const&                                  packLocation,
        bool                                                       recurse,
        ::std::function<::std::string(::Core::Path const&)>        reader,
        ::gsl::not_null<::std::shared_ptr<::Core::FileHandlePool>> handlePool
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
#if defined(LL_PLAT_A) // @header-generator platform
        ::ResourceLocation const&,
        bool,
        std::function<std::string(const Core::Path&)>,
        ::gsl::not_null<std::shared_ptr<Core::FileHandlePool>>
#else // @header-generator platform
        ::ResourceLocation const&                                  packLocation,
        bool                                                       recurse,
        ::std::function<::std::string(::Core::Path const&)>        reader,
        ::gsl::not_null<::std::shared_ptr<::Core::FileHandlePool>> handlePool
#endif // @header-generator platform
    );

    MCNAPI void* $ctor(
#if defined(LL_PLAT_A) // @header-generator platform
        std::unique_ptr<PackAssetSet>&&,
        ::ResourceLocation const&,
        bool,
        std::function<std::string(const Core::Path&)>,
        ::gsl::not_null<std::shared_ptr<Core::FileHandlePool>>
#else // @header-generator platform
        ::std::unique_ptr<::PackAssetSet>&&                        assetSet,
        ::ResourceLocation const&                                  packLocation,
        bool                                                       recurse,
        ::std::function<::std::string(::Core::Path const&)>        reader,
        ::gsl::not_null<::std::shared_ptr<::Core::FileHandlePool>> handlePool
#endif // @header-generator platform
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
    MCNAPI std::unique_ptr<PackAccessStrategy> $createSubPack(::Core::Path const&) const;
#else // @header-generator platform
    MCNAPI ::std::unique_ptr<::PackAccessStrategy> $createSubPack(::Core::Path const& subPath) const;
#endif // @header-generator platform

    MCNAPI bool $canRecurse() const;

    MCNAPI void $unload();

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
