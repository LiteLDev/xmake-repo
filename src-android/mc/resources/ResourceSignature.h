#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class PackAccessStrategy;
namespace Core { class Path; }
// clang-format on

class ResourceSignature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::string>> mSignatureFileContents;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _areKnownFilesValid(::PackAccessStrategy const&, bool);

    MCNAPI bool areKnownFilesValid(::PackAccessStrategy const&);

    MCNAPI bool areKnownFilesValidRequireSignatureExists(::PackAccessStrategy const&);

    MCNAPI ~ResourceSignature();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Core::PathBuffer<std::string> const& SIGNATURE_FILENAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
