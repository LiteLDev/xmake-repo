#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/ExternalServerFileError.h"
#include "mc/client/game/IExternalServerFile.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
struct ExternalServer;
namespace Core { class Path; }
// clang-format on

class ExternalServerFile : public ::IExternalServerFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<int, std::unique_ptr<ExternalServer>>> mExternalServers;
    ::ll::UntypedStorage<8, 24>                                                         mExternalServersFilePath;
    // NOLINTEND

public:
    // prevent constructor by default
    ExternalServerFile();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ExternalServerFile();

    virtual void load();

    virtual void save();

    virtual std::unordered_map<int, std::unique_ptr<ExternalServer>> const& getExternalServers();

    virtual ::nonstd::expected<int, ExternalServerFileError> addServer(std::string const&, std::string const&, int);

    virtual std::optional<ExternalServerFileError> editServer(int, std::string const&, std::string const&, int, bool);

    virtual bool findAndEditServer(std::string const&, std::string const&, int, bool);

    virtual void removeServer(int);

    virtual void updateTimeStamp(int);

    virtual std::tuple<std::string, std::string, int> getServerInfo(int);

    virtual bool _supportsManualAddedServers() const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ExternalServerFile(::Core::Path const&);

    MCNAPI bool _hasDuplicateServer(std::string const&, int, std::optional<int>) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::Path const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $load();

    MCNAPI void $save();

    MCNAPI std::unordered_map<int, std::unique_ptr<ExternalServer>> const& $getExternalServers();

    MCNAPI ::nonstd::expected<int, ExternalServerFileError> $addServer(std::string const&, std::string const&, int);

    MCNAPI std::optional<ExternalServerFileError> $editServer(int, std::string const&, std::string const&, int, bool);

    MCNAPI bool $findAndEditServer(std::string const&, std::string const&, int, bool);

    MCNAPI void $removeServer(int);

    MCNAPI void $updateTimeStamp(int);

    MCNAPI std::tuple<std::string, std::string, int> $getServerInfo(int);

    MCNAPI bool $_supportsManualAddedServers() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class ExternalServerFile {};
#endif // @header-generator platform
