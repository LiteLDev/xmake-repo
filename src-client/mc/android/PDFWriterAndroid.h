#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "jni.h"
#include "mc/deps/core/platform/android/ScopedJObject.h"
#include "mc/deps/core/utility/PDFWriter.h"

// auto generated forward declare list
// clang-format off
struct PDFError;
struct PDFOptions;
namespace Core { class Path; }
// clang-format on

class PDFWriterAndroid : public ::PDFWriter {
public:
    // PDFWriterAndroid inner types declare
    // clang-format off
    struct JavaInterface;
    // clang-format on

    // PDFWriterAndroid inner types define
    struct JavaInterface {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::_jclass*>    pdfWriter;
        ::ll::TypedStorage<8, 8, ::_jmethodID*> constructor;
        ::ll::TypedStorage<8, 8, ::_jmethodID*> createDocument;
        ::ll::TypedStorage<8, 8, ::_jmethodID*> writeDocumentToFile;
        ::ll::TypedStorage<8, 8, ::_jmethodID*> closeDocument;
        ::ll::TypedStorage<8, 8, ::_jmethodID*> getPicturesDirectory;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Bedrock::ScopedJObject> mPDFWriterInstance;
    ::ll::TypedStorage<8, 16, ::_JavaVM&>              mVM;
    ::ll::UntypedStorage<8, 48>                        mTaskGroupQueue;
    // NOLINTEND

public:
    // prevent constructor by default
    PDFWriterAndroid& operator=(PDFWriterAndroid const&);
    PDFWriterAndroid(PDFWriterAndroid const&);
    PDFWriterAndroid();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PDFWriterAndroid();

    virtual void exportImagesToAlbum(::PDFOptions, std::function<void(std::optional<PDFError>)>);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PDFWriterAndroid(::_JavaVM&, std::function<void(std::function<void()>)>);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::PDFWriterAndroid::JavaInterface& sJavaInterface();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::_JavaVM&, std::function<void(std::function<void()>)>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $exportImagesToAlbum(::PDFOptions, std::function<void(std::optional<PDFError>)>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
