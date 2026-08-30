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
        ::ll::TypedStorage<8, 16, std::shared_ptr<const Localization>> mOriginal;
        ::ll::TypedStorage<8, 16, std::shared_ptr<Localization>>       mToReplace;
        // NOLINTEND

    public:
        // prevent constructor by default
        Copy();

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
    };

    using SharedLock = ::Bedrock::Threading::SharedLock<std::shared_timed_mutex>;

    using UniqueLock = ::Bedrock::Threading::UniqueLock<std::shared_timed_mutex>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<std::shared_timed_mutex>>              mMutex;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<const Localization>>> mValue;
    // NOLINTEND

public:
    // prevent constructor by default
    ImmutableLocalization& operator=(ImmutableLocalization const&);
    ImmutableLocalization(ImmutableLocalization const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ImmutableLocalization(::Localization&&);

    MCNAPI void modifyAdditive(::brstd::function_ref<void(Localization&)>);

    MCNAPI void modifyReplace(::brstd::function_ref<void(Localization&)>);

    MCNAPI ::ImmutableLocalization& operator=(::Localization&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Localization&&);
    // NOLINTEND
};
