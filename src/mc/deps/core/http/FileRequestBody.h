#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/File.h"
#include "mc/deps/core/file/Path.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/http/IRequestBody.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on
#endif // @header-generator platform

namespace Bedrock::Http {

class FileRequestBody : public ::Bedrock::Http::Internal::IRequestBody {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 24>             mFilename;
    ::ll::TypedStorage<8, 16, ::Core::File> mFileHandle;
    ::ll::TypedStorage<1, 1, bool>          mEndOfFile;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkf6c20f;
    ::ll::UntypedStorage<8, 16> mUnkbdbe9d;
    ::ll::UntypedStorage<1, 1>  mUnk84e5f4;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    FileRequestBody& operator=(FileRequestBody const&);
    FileRequestBody(FileRequestBody const&);
#endif // @header-generator platform
    FileRequestBody();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~FileRequestBody();
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual ::Bedrock::Http::Internal::IRequestBody::ReadResult read(::gsl::span<uchar>) /*override*/;
#else // LL_PLAT_C
    virtual ::Bedrock::Http::Internal::IRequestBody::ReadResult read(::gsl::span<uchar> destination) /*override*/;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Http::Internal::IRequestBody::ReadResult read(::gsl::span<uchar>);
#else // @header-generator platform
    virtual uint64 getSize() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getSize();
#else // @header-generator platform
    virtual void cancel() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void cancel();
#else // @header-generator platform
    virtual ::std::string const& getLoggableSource() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getLoggableSource() const;

    virtual ::gsl::span<const uchar> getLoggableData() const;
#else // @header-generator platform
    virtual ::gsl::span<uchar const> getLoggableData() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit FileRequestBody(::Core::Path);

    MCNAPI void _closeIfEof();

    MCNAPI bool _lazyOpenFileHandle();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI explicit FileRequestBody(::Core::Path filename);

    MCNAPI void _closeIfEof();

    MCNAPI bool _lazyOpenFileHandle();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<Bedrock::Http::FileRequestBody> create(::Core::Path);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI static ::std::shared_ptr<::Bedrock::Http::FileRequestBody> create(::Core::Path filename);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Core::Path);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::Core::Path filename);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Http::Internal::IRequestBody::ReadResult $read(::gsl::span<uchar>);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ::Bedrock::Http::Internal::IRequestBody::ReadResult $read(::gsl::span<uchar> destination);

    MCNAPI uint64 $getSize();

    MCNAPI void $cancel();

    MCNAPI ::std::string const& $getLoggableSource() const;

    MCNAPI ::gsl::span<uchar const> $getLoggableData() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $getSize();
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $cancel();

    MCNAPI std::string const& $getLoggableSource() const;

    MCNAPI ::gsl::span<const uchar> $getLoggableData() const;
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Http
