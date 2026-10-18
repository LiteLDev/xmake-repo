#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/resources/ImportFailure.h"
#include "mc/client/services/ms_graph/GraphResponse.h"
#include "mc/util/DownloadError.h"

struct SetDownloadProgressHandlerError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string const>                             id;
    ::ll::TypedStorage<8, 64, ::std::function<void(::MSGraph::GraphResponse)>> setSyncError;
    ::ll::TypedStorage<8, 64, ::std::function<void(::DownloadError)>>          setDownloadError;
    ::ll::TypedStorage<8, 64, ::std::function<void(::MSGraph::GraphResponse)>> setGraphError;
    ::ll::TypedStorage<8, 64, ::std::function<void(::ImportFailure)>>          setImportError;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~SetDownloadProgressHandlerError();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct SetDownloadProgressHandlerError {};
#endif // @header-generator platform
#endif // @header-generator platform
