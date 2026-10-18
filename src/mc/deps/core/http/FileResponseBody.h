#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/File.h"
#include "mc/deps/core/file/Path.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 24>                                           mFilename;
    ::ll::TypedStorage<8, 16, ::Core::File>                               mFileHandle;
    ::ll::TypedStorage<4, 4, ::Bedrock::Http::FileResponseBody::FileOpen> mFileOpenOption;
    ::ll::TypedStorage<1, 1, bool>                                        mExistingFileIsOurs;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk8ef555;
    ::ll::UntypedStorage<8, 16> mUnk5c858f;
    ::ll::UntypedStorage<4, 4>  mUnk8111dc;
    ::ll::UntypedStorage<1, 1>  mUnk2b1a95;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    FileResponseBody& operator=(FileResponseBody const&);
    FileResponseBody(FileResponseBody const&);
#endif // @header-generator platform
    FileResponseBody();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~FileResponseBody() = default;
#else // @header-generator platform
    virtual ~FileResponseBody() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::error_code start(std::optional<ulong>);
#else // @header-generator platform
    virtual ::std::error_code start(::std::optional<uint64>) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::error_code write(::gsl::span<const uchar>);
#else // @header-generator platform
    virtual ::std::error_code write(::gsl::span<uchar const>) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void complete();
#else // @header-generator platform
    virtual void complete() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void cancel();
#else // @header-generator platform
    virtual void cancel() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getLoggableDestination() const;
#else // @header-generator platform
    virtual ::std::string const& getLoggableDestination() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::span<const uchar> getLoggableData() const;
#else // @header-generator platform
    virtual ::gsl::span<uchar const> getLoggableData() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Http::ResponseBodyType getType() const;
#else // @header-generator platform
    virtual ::Bedrock::Http::ResponseBodyType getType() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::Http
