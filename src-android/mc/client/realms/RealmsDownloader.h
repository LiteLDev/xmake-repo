#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
// clang-format on

namespace Realms {

class RealmsDownloader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>             mClient;
    ::ll::TypedStorage<8, 240, ::TaskGroup> mDownloadRealmTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsDownloader();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~RealmsDownloader();

    virtual void downloadRealm(ulong, std::string const&, std::string const&, int, std::string const&, std::string const&, std::function<void (bool)>);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RealmsDownloader(::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $downloadRealm(
        ulong,
        std::string const&,
        std::string const&,
        int,
        std::string const&,
        std::string const&,
        std::function<void(bool)>
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Realms
