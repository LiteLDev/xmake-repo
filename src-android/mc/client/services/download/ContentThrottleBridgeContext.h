#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/download/IContentThrottleBridgeContext.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IContentAcquisition;
// clang-format on

class ContentThrottleBridgeContext : public ::IContentThrottleBridgeContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mContentAcquisition;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentThrottleBridgeContext();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContentThrottleBridgeContext();

    virtual ::Bedrock::Threading::Async<bool> beginLargeFileTransaction(ulong, std::vector<std::string>&&);

    virtual void endLargeFileTransaction();

    virtual ::IContentAcquisition& getContentAcquisition();

    virtual bool shouldSaveAsZip() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Threading::Async<bool> $beginLargeFileTransaction(ulong, std::vector<std::string>&&);

    MCNAPI void $endLargeFileTransaction();

    MCNAPI ::IContentAcquisition& $getContentAcquisition();

    MCNAPI bool $shouldSaveAsZip() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
