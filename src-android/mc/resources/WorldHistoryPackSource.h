#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/resources/PackSource.h"
#include "mc/resources/WorldPacksHistoryFile.h"

// auto generated forward declare list
// clang-format off
class Pack;
class WorldPackHistory;
struct PackIdVersion;
struct PackSourceLoadOptions;
struct PackSourceLoadResult;
struct WorldHistoryPackSourceOptions;
namespace Core { class Path; }
namespace mce { class UUID; }
// clang-format on

class WorldHistoryPackSource : public ::PackSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                        mPathToHistoryFile;
    ::ll::TypedStorage<1, 1, ::PackType const>         mPackType;
    ::ll::TypedStorage<8, 24, ::WorldPacksHistoryFile> mWorldHistoryPacksFile;
    ::ll::TypedStorage<1, 1, bool>                     mDiscovered;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldHistoryPackSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldHistoryPackSource();

    virtual ::PackOrigin getPackOrigin() const;

    virtual ::PackType getPackType() const;

    virtual ::PackSourceLoadResult _loadImpl(::PackSourceLoadOptions&&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit WorldHistoryPackSource(::WorldHistoryPackSourceOptions);

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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::WorldHistoryPackSourceOptions);
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
