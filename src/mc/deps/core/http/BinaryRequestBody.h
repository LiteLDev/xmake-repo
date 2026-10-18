#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/IRequestBody.h"

namespace Bedrock::Http {

class BinaryRequestBody : public ::Bedrock::Http::Internal::IRequestBody {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<uchar>> mData;
    ::ll::TypedStorage<8, 8, ulong>               mReadHead;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk82c336;
    ::ll::UntypedStorage<8, 8>  mUnk8f0a1f;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    BinaryRequestBody& operator=(BinaryRequestBody const&);
    BinaryRequestBody(BinaryRequestBody const&);
#endif // @header-generator platform
    BinaryRequestBody();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BinaryRequestBody();
#else // @header-generator platform
    virtual ~BinaryRequestBody() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Http::Internal::IRequestBody::ReadResult read(::gsl::span<uchar>);
#else // @header-generator platform
    virtual ::Bedrock::Http::Internal::IRequestBody::ReadResult read(::gsl::span<uchar> destination) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getSize();
#else // @header-generator platform
    virtual uint64 getSize() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void cancel();
#else // @header-generator platform
    virtual void cancel() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getLoggableSource() const;
#else // @header-generator platform
    virtual ::std::string const& getLoggableSource() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::span<const uchar> getLoggableData() const;
#else // @header-generator platform
    virtual ::gsl::span<uchar const> getLoggableData() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit BinaryRequestBody(::gsl::span<const uchar>);

    MCNAPI ::gsl::span<const uchar> _getData() const;

    MCNAPI void setData(::gsl::span<const uchar>);
#else // @header-generator platform
    MCNAPI void setData(::gsl::span<uchar const> data);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<Bedrock::Http::BinaryRequestBody> create(::gsl::span<const uchar>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::span<const uchar>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI static ::std::shared_ptr<::Bedrock::Http::BinaryRequestBody> create(::gsl::span<uchar const> data);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Http::Internal::IRequestBody::ReadResult $read(::gsl::span<uchar>);
#else // @header-generator platform
    MCNAPI ::Bedrock::Http::Internal::IRequestBody::ReadResult $read(::gsl::span<uchar> destination);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $getSize();
#else // @header-generator platform
    MCNAPI uint64 $getSize();
#endif // @header-generator platform

    MCNAPI void $cancel();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& $getLoggableSource() const;
#else // @header-generator platform
    MCNAPI ::std::string const& $getLoggableSource() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gsl::span<const uchar> $getLoggableData() const;
#else // @header-generator platform
    MCNAPI ::gsl::span<uchar const> $getLoggableData() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Http
