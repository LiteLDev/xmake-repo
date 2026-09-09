#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/platform/Result.h"
#include "mc/resources/PackAccessStrategy.h"
#include "mc/resources/PackAccessStrategyType.h"

// auto generated forward declare list
// clang-format off
class PackAssetSet;
struct StreamableAssetSource;
namespace Bedrock::Resources { class PreloadedPathHandle; }
namespace Bedrock::Resources::Archive { class Reader; }
namespace Core { class FileHandlePool; }
namespace Core { class Path; }
namespace Core { class PathView; }
// clang-format on

class DirectoryPackAccessStrategy : public ::PackAccessStrategy {
public:
    // DirectoryPackAccessStrategy inner types define
    using AssetReader = std::function<std::string(const Core::Path&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::ResourceLocation const> mPackLocation;
    ::ll::UntypedStorage<8, 24>                         mPackPath;
    ::ll::TypedStorage<8, 24, std::string const>        mPackName;
    ::ll::UntypedStorage<8, 48>                         mReader;
    ::ll::UntypedStorage<1, 16>                         mRecurse;
    // NOLINTEND

public:
    // prevent constructor by default
    DirectoryPackAccessStrategy();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~DirectoryPackAccessStrategy();

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

    virtual bool canRecurse() const;

    virtual void unload();

    virtual ::Bedrock::Result<StreamableAssetSource, std::error_code> getStreamableSource(::Core::Path const&, std::optional<Core::PathView>) const;

    virtual std::unique_ptr<Bedrock::Resources::Archive::Reader> _loadArchive(::Core::Path const&) const;

    virtual std::vector<Bedrock::Resources::PreloadedPathHandle> _preloadSubFolders(::Core::Path const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DirectoryPackAccessStrategy(
        ::ResourceLocation const&,
        bool,
        std::function<std::string(const Core::Path&)>,
        ::gsl::not_null<std::shared_ptr<Core::FileHandlePool>>
    );

    MCNAPI DirectoryPackAccessStrategy(
        std::unique_ptr<PackAssetSet>&&,
        ::ResourceLocation const&,
        bool,
        std::function<std::string(const Core::Path&)>,
        ::gsl::not_null<std::shared_ptr<Core::FileHandlePool>>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ResourceLocation const&,
        bool,
        std::function<std::string(const Core::Path&)>,
        ::gsl::not_null<std::shared_ptr<Core::FileHandlePool>>
    );

    MCNAPI void* $ctor(
        std::unique_ptr<PackAssetSet>&&,
        ::ResourceLocation const&,
        bool,
        std::function<std::string(const Core::Path&)>,
        ::gsl::not_null<std::shared_ptr<Core::FileHandlePool>>
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

    MCNAPI bool $canRecurse() const;

    MCNAPI void $unload();

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
