#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/threading/Async.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/resources/PackSource.h"

// auto generated forward declare list
// clang-format off
class IPackIOProvider;
#if defined(LL_PLAT_A) // @header-generator platform
class Pack;
#else // @header-generator platform
#endif // @header-generator platform
struct DirectoryPackSourceOptions;
struct PackSourceLoadOptions;
struct PackSourceLoadResult;
namespace Core { class Path; }
namespace PackCommand { class IPackCommandPipeline; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace flighting { class IFlightReader; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class DirectoryPackSource : public ::PackSource {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                  mPath;
    ::ll::TypedStorage<1, 1, ::PackType const>   mPackType;
    ::ll::TypedStorage<1, 1, ::PackOrigin const> mPackOrigin;
    ::ll::TypedStorage<1, 1, bool>               mDiscovered;
    ::ll::TypedStorage<1, 1, bool const>         mIsRediscoverable;
    ::ll::TypedStorage<1, 1, bool const>         mIsDevDirectory;
    ::ll::UntypedStorage<8, 24>                  mCommands;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                               mPath;
    ::ll::TypedStorage<1, 1, ::PackType const>                                                 mPackType;
    ::ll::TypedStorage<1, 1, ::PackOrigin const>                                               mPackOrigin;
    ::ll::TypedStorage<1, 1, bool>                                                             mDiscovered;
    ::ll::TypedStorage<1, 1, bool const>                                                       mIsRediscoverable;
    ::ll::TypedStorage<1, 1, bool const>                                                       mIsDevDirectory;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::PackCommand::IPackCommandPipeline>> mCommands;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    DirectoryPackSource();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~DirectoryPackSource();
#else // @header-generator platform
    virtual ~DirectoryPackSource() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::PackOrigin getPackOrigin() const;
#else // @header-generator platform
    virtual ::PackOrigin getPackOrigin() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::PackType getPackType() const;
#else // @header-generator platform
    virtual ::PackType getPackType() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::PackSourceLoadResult _loadImpl(::PackSourceLoadOptions&&);
#else // @header-generator platform
    virtual ::PackSourceLoadResult _loadImpl(::PackSourceLoadOptions&& options) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit DirectoryPackSource(::DirectoryPackSourceOptions);
#else // @header-generator platform
    MCAPI explicit DirectoryPackSource(::DirectoryPackSourceOptions options);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addPack(std::shared_ptr<Pack>&&);

    MCNAPI ::Bedrock::Threading::Async<void> addPacks(std::vector<gsl::not_null<std::shared_ptr<Pack>>>&&);

    MCNAPI void deleteAllPacksAndReset();

    MCNAPI bool isCopyable() const;

    MCNAPI bool removePack(::Core::Path const&);
#else // @header-generator platform
    MCAPI void deleteAllPacksAndReset();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void checkAndRemoveIncompletePacks(::Core::Path const&);
#else // @header-generator platform
    MCAPI static void checkAndRemoveIncompletePacks(::Core::Path const& path);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void checkAndRemoveIncompletePacks(::Core::Path const&, ::IPackIOProvider const&, bool);
#else // @header-generator platform
    MCAPI static void checkAndRemoveIncompletePacks(
        ::Core::Path const&      path,
        ::IPackIOProvider const& io,
        bool                     saveEncryptedWorldTemplatePacksAsZips
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void purgeOptimizedPremiumPacksIfRequested(
        bool,
        ::Core::Path const&,
        ::IPackIOProvider const*,
#else // @header-generator platform
    MCAPI static void purgeOptimizedPremiumPacksIfRequested(
        bool                     purgeRequested,
        ::Core::Path const&      path,
        ::IPackIOProvider const* io,
#endif // @header-generator platform
        ::brstd::function_ref<
#if defined(LL_PLAT_A) // @header-generator platform
            void(std::string_view, const std::string&, PackType, PackOrigin, const std::string&, long)>
#else // @header-generator platform
            void(::std::string_view, ::std::string const&, ::PackType, ::PackOrigin, ::std::string const&, int64)>
            reportPackDeleted
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::DirectoryPackSourceOptions);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::DirectoryPackSourceOptions options);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PackOrigin $getPackOrigin() const;
#else // @header-generator platform
    MCFOLD ::PackOrigin $getPackOrigin() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PackType $getPackType() const;
#else // @header-generator platform
    MCFOLD ::PackType $getPackType() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PackSourceLoadResult $_loadImpl(::PackSourceLoadOptions&&);
#else // @header-generator platform
    MCAPI ::PackSourceLoadResult $_loadImpl(::PackSourceLoadOptions&& options);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
