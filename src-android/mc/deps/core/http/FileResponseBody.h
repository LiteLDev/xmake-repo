#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/File.h"
#include "mc/deps/core/file/Path.h"
#include "mc/deps/core/http/IResponseBody.h"
#include "mc/deps/core/http/ResponseBodyType.h"

namespace Bedrock::Http {

class FileResponseBody : public ::Bedrock::Http::Internal::IResponseBody {
public:
    // FileResponseBody inner types define
    enum class FileOpen : int {
        CreateOnly = 0,
        Overwrite  = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 24>                                           mFilename;
    ::ll::TypedStorage<8, 16, ::Core::File>                               mFileHandle;
    ::ll::TypedStorage<4, 4, ::Bedrock::Http::FileResponseBody::FileOpen> mFileOpenOption;
    ::ll::TypedStorage<1, 1, bool>                                        mExistingFileIsOurs;
    // NOLINTEND

public:
    // prevent constructor by default
    FileResponseBody();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FileResponseBody() = default;

    virtual std::error_code start(std::optional<ulong>);

    virtual std::error_code write(::gsl::span<const uchar>);

    virtual void complete();

    virtual void cancel();

    virtual std::string const& getLoggableDestination() const;

    virtual ::gsl::span<const uchar> getLoggableData() const;

    virtual ::Bedrock::Http::ResponseBodyType getType() const;
    // NOLINTEND
};

} // namespace Bedrock::Http
