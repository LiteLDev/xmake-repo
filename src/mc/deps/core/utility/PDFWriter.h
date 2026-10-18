#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct PDFError;
struct PDFOptions;
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class PDFWriter : public ::std::enable_shared_from_this<PDFWriter> {
public:
    // PDFWriter inner types define
    using CompletionCallback = std::function<void(std::optional<PDFError>)>;

#else // @header-generator platform
class PDFWriter : public ::std::enable_shared_from_this<::PDFWriter> {
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual void exportImagesToAlbum(::PDFOptions, std::function<void(std::optional<PDFError>)>) = 0;
#else // @header-generator platform
    virtual void exportImagesToAlbum(::PDFOptions, ::std::function<void(::std::optional<::PDFError>)>) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual ~PDFWriter() = default;
#endif // @header-generator platform
    // NOLINTEND
};
