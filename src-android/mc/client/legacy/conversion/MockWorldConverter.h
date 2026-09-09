#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/legacy/conversion/WorldConverter.h"
#include "mc/client/legacy/conversion/WorldConverterBlobType.h"
#include "mc/platform/brstd/future.h"
#include "mc/platform/brstd/promise.h"
#include "mc/platform/brstd/shared_future.h"

// auto generated forward declare list
// clang-format off
namespace Legacy { struct WorldConversionReport; }
// clang-format on

namespace Legacy {

class MockWorldConverter : public ::Legacy::WorldConverter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                                              mBlobRequests;
    ::ll::TypedStorage<8, 8, std::unique_ptr<brstd::promise<void>>>                          mAddPromise;
    ::ll::TypedStorage<8, 8, std::unique_ptr<brstd::promise<Legacy::WorldConversionReport>>> mCompletionPromise;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~MockWorldConverter();

    virtual ::brstd::shared_future<void> addBlob(std::string const&, ::Legacy::WorldConverterBlobType, std::vector<uchar>&&);

    virtual ::brstd::future<Legacy::WorldConversionReport> complete();
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::brstd::shared_future<void>
    $addBlob(std::string const&, ::Legacy::WorldConverterBlobType, std::vector<uchar>&&);

    MCNAPI ::brstd::future<Legacy::WorldConversionReport> $complete();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Legacy
