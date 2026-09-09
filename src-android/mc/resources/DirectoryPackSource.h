#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/resources/PackSource.h"

// auto generated forward declare list
// clang-format off
class IPackIOProvider;
class Pack;
struct DirectoryPackSourceOptions;
struct PackSourceLoadOptions;
struct PackSourceLoadResult;
namespace Core { class Path; }
namespace PackCommand { class IPackCommandPipeline; }
namespace flighting { class IFlightReader; }
// clang-format on

class DirectoryPackSource : public ::PackSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                  mPath;
    ::ll::TypedStorage<1, 1, ::PackType const>   mPackType;
    ::ll::TypedStorage<1, 1, ::PackOrigin const> mPackOrigin;
    ::ll::TypedStorage<1, 1, bool>               mDiscovered;
    ::ll::TypedStorage<1, 1, bool const>         mIsRediscoverable;
    ::ll::TypedStorage<1, 1, bool const>         mIsDevDirectory;
    ::ll::UntypedStorage<8, 24>                  mCommands;
    // NOLINTEND

public:
    // prevent constructor by default
    DirectoryPackSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DirectoryPackSource();

    virtual ::PackOrigin getPackOrigin() const;

    virtual ::PackType getPackType() const;

    virtual ::PackSourceLoadResult _loadImpl(::PackSourceLoadOptions&&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DirectoryPackSource(::DirectoryPackSourceOptions);

    MCNAPI void addPack(std::shared_ptr<Pack>&&);

    MCNAPI ::Bedrock::Threading::Async<void> addPacks(std::vector<gsl::not_null<std::shared_ptr<Pack>>>&&);

    MCNAPI void deleteAllPacksAndReset();

    MCNAPI bool isCopyable() const;

    MCNAPI bool removePack(::Core::Path const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void checkAndRemoveIncompletePacks(::Core::Path const&);

    MCNAPI static void checkAndRemoveIncompletePacks(::Core::Path const&, ::IPackIOProvider const&, bool);

    MCNAPI static void purgeOptimizedPremiumPacksIfRequested(
        bool,
        ::Core::Path const&,
        ::IPackIOProvider const*,
        ::brstd::function_ref<
            void(std::string_view, const std::string&, PackType, PackOrigin, const std::string&, long)>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::DirectoryPackSourceOptions);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::PackOrigin $getPackOrigin() const;

    MCNAPI ::PackType $getPackType() const;

    MCNAPI ::PackSourceLoadResult $_loadImpl(::PackSourceLoadOptions&&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
