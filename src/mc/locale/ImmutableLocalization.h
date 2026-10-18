#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"
#include "mc/platform/threading/SharedLock.h"
#include "mc/platform/threading/UniqueLock.h"

// auto generated forward declare list
// clang-format off
class Localization;
// clang-format on

class ImmutableLocalization {
public:
    // ImmutableLocalization inner types declare
    // clang-format off
    struct Copy;
    // clang-format on

    // ImmutableLocalization inner types define
    struct Copy {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 16, std::shared_ptr<const Localization>> mOriginal;
        ::ll::TypedStorage<8, 16, std::shared_ptr<Localization>>       mToReplace;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 16> mUnkf64f09;
        ::ll::UntypedStorage<8, 16> mUnkcd94c1;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        Copy& operator=(Copy const&);
        Copy(Copy const&);
#endif // @header-generator platform
        Copy();
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Copy();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
    };
#if defined(LL_PLAT_A) // @header-generator platform

    using SharedLock = ::Bedrock::Threading::SharedLock<std::shared_timed_mutex>;

    using UniqueLock = ::Bedrock::Threading::UniqueLock<std::shared_timed_mutex>;
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<std::shared_timed_mutex>>              mMutex;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<const Localization>>> mValue;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnkc958d9;
    ::ll::UntypedStorage<8, 16> mUnk55524c;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ImmutableLocalization& operator=(ImmutableLocalization const&);
    ImmutableLocalization(ImmutableLocalization const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ImmutableLocalization();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ImmutableLocalization(::Localization&&);
#else // @header-generator platform
    MCNAPI void _setValue(::std::shared_ptr<::Localization const> value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void modifyAdditive(::brstd::function_ref<void(Localization&)>);
#else // @header-generator platform
    MCNAPI void modifyAdditive(::brstd::function_ref<void(::Localization&)> modifier);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void modifyReplace(::brstd::function_ref<void(Localization&)>);

    MCNAPI ::ImmutableLocalization& operator=(::Localization&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Localization&&);
#else // @header-generator platform
    MCNAPI void modifyReplace(::brstd::function_ref<void(::Localization&)> modifier);
#endif // @header-generator platform
    // NOLINTEND
};
