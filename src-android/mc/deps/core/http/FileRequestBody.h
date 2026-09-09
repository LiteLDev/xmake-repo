#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/File.h"
#include "mc/deps/core/file/Path.h"
#include "mc/deps/core/http/IRequestBody.h"

namespace Bedrock::Http {

class FileRequestBody : public ::Bedrock::Http::Internal::IRequestBody {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 24>             mFilename;
    ::ll::TypedStorage<8, 16, ::Core::File> mFileHandle;
    ::ll::TypedStorage<1, 1, bool>          mEndOfFile;
    // NOLINTEND

public:
    // prevent constructor by default
    FileRequestBody();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FileRequestBody();

    virtual ::Bedrock::Http::Internal::IRequestBody::ReadResult read(::gsl::span<uchar>);

    virtual ulong getSize();

    virtual void cancel();

    virtual std::string const& getLoggableSource() const;

    virtual ::gsl::span<const uchar> getLoggableData() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit FileRequestBody(::Core::Path);

    MCNAPI void _closeIfEof();

    MCNAPI bool _lazyOpenFileHandle();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::shared_ptr<Bedrock::Http::FileRequestBody> create(::Core::Path);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::Path);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Http::Internal::IRequestBody::ReadResult $read(::gsl::span<uchar>);

    MCNAPI ulong $getSize();

    MCNAPI void $cancel();

    MCNAPI std::string const& $getLoggableSource() const;

    MCNAPI ::gsl::span<const uchar> $getLoggableData() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Http
