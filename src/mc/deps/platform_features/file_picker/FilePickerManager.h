#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class DirectoryPickerConfig; }
// clang-format on

namespace Bedrock {

#if defined(LL_PLAT_A) // @header-generator platform
class FilePickerManager : public ::Bedrock::ImplBase<Bedrock::FilePickerManager>,
#else // @header-generator platform
class FilePickerManager : public ::Bedrock::ImplBase<::Bedrock::FilePickerManager>,
#endif // @header-generator platform
                          public ::Bedrock::EnableNonOwnerReferences {
public:
    // FilePickerManager inner types declare
    // clang-format off
    struct DirectoryPickerResult;
    // clang-format on

    // FilePickerManager inner types define
    struct DirectoryPickerResult {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string> mReturnedURI;
        ::ll::TypedStorage<8, 24, std::string> mError;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 32> mUnkc53a8c;
        ::ll::UntypedStorage<8, 32> mUnk25b440;
#endif // @header-generator platform
        // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // prevent constructor by default
        DirectoryPickerResult& operator=(DirectoryPickerResult const&);

#else // @header-generator platform
#ifdef LL_PLAT_S
    public:
        // prevent constructor by default
        DirectoryPickerResult& operator=(DirectoryPickerResult const&);
        DirectoryPickerResult(DirectoryPickerResult const&);
        DirectoryPickerResult();

#else // LL_PLAT_C
    public:
        // prevent constructor by default
        DirectoryPickerResult& operator=(DirectoryPickerResult const&);
        DirectoryPickerResult();

#endif
#endif // @header-generator platform
    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ~DirectoryPickerResult();
#else // @header-generator platform
#ifdef LL_PLAT_C
        MCNAPI DirectoryPickerResult(::Bedrock::FilePickerManager::DirectoryPickerResult const&);

        MCNAPI ~DirectoryPickerResult();
#endif
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI void* $ctor(::Bedrock::FilePickerManager::DirectoryPickerResult const&);
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
    };
#if defined(LL_PLAT_A) // @header-generator platform

    using DirectoryPickerResultHandle = ::Bedrock::Threading::Async<Bedrock::FilePickerManager::DirectoryPickerResult>;
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~FilePickerManager() = default;

#else // @header-generator platform
#endif // @header-generator platform
    virtual bool directoryPickingEnabledForPlatform() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::Async<Bedrock::FilePickerManager::DirectoryPickerResult> pickDirectory(::Bedrock::DirectoryPickerConfig const&) = 0;
    // clang-format on
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<::Bedrock::FilePickerManager::DirectoryPickerResult>
    pickDirectory(::Bedrock::DirectoryPickerConfig const&) = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock
