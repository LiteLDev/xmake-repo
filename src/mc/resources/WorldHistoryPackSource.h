#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/PathBuffer.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/resources/PackSource.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/resources/WorldPacksHistoryFile.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Pack;
class WorldPackHistory;
#if defined(LL_PLAT_A) // @header-generator platform
struct PackIdVersion;
#else // @header-generator platform
#endif // @header-generator platform
struct PackSourceLoadOptions;
struct PackSourceLoadResult;
struct WorldHistoryPackSourceOptions;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { class Path; }
namespace mce { class UUID; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class WorldHistoryPackSource : public ::PackSource {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                        mPathToHistoryFile;
    ::ll::TypedStorage<1, 1, ::PackType const>         mPackType;
    ::ll::TypedStorage<8, 24, ::WorldPacksHistoryFile> mWorldHistoryPacksFile;
    ::ll::TypedStorage<1, 1, bool>                     mDiscovered;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk521049;
    ::ll::UntypedStorage<1, 1>  mUnk712674;
    ::ll::UntypedStorage<8, 24> mUnk4f8c50;
    ::ll::UntypedStorage<1, 1>  mUnkb16dc9;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    WorldHistoryPackSource& operator=(WorldHistoryPackSource const&);
    WorldHistoryPackSource(WorldHistoryPackSource const&);
#endif // @header-generator platform
    WorldHistoryPackSource();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~WorldHistoryPackSource();
#else // @header-generator platform
    virtual ~WorldHistoryPackSource() /*override*/ = default;
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
    MCNAPI explicit WorldHistoryPackSource(::WorldHistoryPackSourceOptions);
#else // @header-generator platform
    MCNAPI explicit WorldHistoryPackSource(::WorldHistoryPackSourceOptions options);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    _addPackFromHistoryPack(std::vector<gsl::not_null<std::shared_ptr<Pack>>>&, ::WorldPackHistory const&) const;

    MCNAPI ::Core::PathBuffer<std::string> const& getPathToWorld() const;

    MCNAPI ::Bedrock::Threading::Async<void> saveHistoryFile();

    MCNAPI void setSourceUUIDForPackHistory(::PackIdVersion const&, ::mce::UUID const&);

    MCNAPI ::Bedrock::Threading::Async<void> trackNewPacksIfNotTracked(std::vector<WorldPackHistory>&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Core::PathBuffer<std::string> generateHistoryFilePath(::Core::Path const&, ::PackType);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void _addPackFromHistoryPack(
        ::std::vector<::gsl::not_null<::std::shared_ptr<::Pack>>>& packs,
        ::WorldPackHistory const&                                  worldPackHistory
    ) const;

    MCNAPI ::Bedrock::Threading::Async<void> saveHistoryFile();

    MCNAPI ::Bedrock::Threading::Async<void>
    trackNewPacksIfNotTracked(::std::vector<::WorldPackHistory>&& worldPackHistory);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::WorldHistoryPackSourceOptions);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(::WorldHistoryPackSourceOptions options);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::PackOrigin $getPackOrigin() const;

    MCNAPI ::PackType $getPackType() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PackSourceLoadResult $_loadImpl(::PackSourceLoadOptions&&);
#else // @header-generator platform
    MCNAPI ::PackSourceLoadResult $_loadImpl(::PackSourceLoadOptions&& options);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
