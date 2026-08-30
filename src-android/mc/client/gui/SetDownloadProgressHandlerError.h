#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/resources/ImportFailure.h"
#include "mc/client/services/ms_graph/GraphResponse.h"
#include "mc/util/DownloadError.h"

struct SetDownloadProgressHandlerError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> id;
    ::ll::UntypedStorage<8, 48> setSyncError;
    ::ll::UntypedStorage<8, 48> setDownloadError;
    ::ll::UntypedStorage<8, 48> setGraphError;
    ::ll::UntypedStorage<8, 48> setImportError;
    // NOLINTEND

public:
    // prevent constructor by default
    SetDownloadProgressHandlerError& operator=(SetDownloadProgressHandlerError const&);
    SetDownloadProgressHandlerError(SetDownloadProgressHandlerError const&);
    SetDownloadProgressHandlerError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SetDownloadProgressHandlerError();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
