#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IFileAccess;
#if defined(LL_PLAT_A) // @header-generator platform
struct zlib_filefunc64_32_def_s;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ZlibFileAccessWrapper {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<zlib_filefunc64_32_def_s>> mZipAPI;
    ::ll::UntypedStorage<8, 24>                                         mFileAccess;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnkeadeee;
    ::ll::UntypedStorage<8, 24> mUnkbd0b0f;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ZlibFileAccessWrapper& operator=(ZlibFileAccessWrapper const&);
    ZlibFileAccessWrapper(ZlibFileAccessWrapper const&);
#endif // @header-generator platform
    ZlibFileAccessWrapper();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ZlibFileAccessWrapper(::gsl::not_null<Bedrock::NonOwnerPointer<IFileAccess>>);

    MCNAPI ::zlib_filefunc64_32_def_s* getZipFunctions() const;
#else // @header-generator platform
    MCNAPI explicit ZlibFileAccessWrapper(::Bedrock::NotNullNonOwnerPtr<::IFileAccess> fileAccess);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<IFileAccess>>);
#else // @header-generator platform
    MCNAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::IFileAccess> fileAccess);
#endif // @header-generator platform
    // NOLINTEND
};
