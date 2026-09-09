#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct PDFError;
struct PDFOptions;
// clang-format on

class PDFWriter : public ::std::enable_shared_from_this<PDFWriter> {
public:
    // PDFWriter inner types define
    using CompletionCallback = std::function<void(std::optional<PDFError>)>;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void exportImagesToAlbum(::PDFOptions, std::function<void(std::optional<PDFError>)>) = 0;

    virtual ~PDFWriter();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PDFWriter();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
