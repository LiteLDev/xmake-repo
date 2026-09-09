#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IFileAccess;
struct zlib_filefunc64_32_def_s;
// clang-format on

class ZlibFileAccessWrapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<zlib_filefunc64_32_def_s>> mZipAPI;
    ::ll::UntypedStorage<8, 24>                                         mFileAccess;
    // NOLINTEND

public:
    // prevent constructor by default
    ZlibFileAccessWrapper();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ZlibFileAccessWrapper(::gsl::not_null<Bedrock::NonOwnerPointer<IFileAccess>>);

    MCNAPI ::zlib_filefunc64_32_def_s* getZipFunctions() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<IFileAccess>>);
    // NOLINTEND
};
