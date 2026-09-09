#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

struct PDFOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>            orderedFilenames;
    ::ll::UntypedStorage<8, 24>            destination;
    ::ll::TypedStorage<8, 24, std::string> title;
    // NOLINTEND

public:
    // prevent constructor by default
    PDFOptions& operator=(PDFOptions const&);
    PDFOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PDFOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
