#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/certificates/identity/LastClickedSource.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ActiveDirectoryIdentity;
// clang-format on

class ClickSourceContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mReset;
    // NOLINTEND

public:
    // prevent constructor by default
    ClickSourceContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ClickSourceContext(::gsl::not_null<Bedrock::NonOwnerPointer<ActiveDirectoryIdentity>>, ::LastClickedSource);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<ActiveDirectoryIdentity>>, ::LastClickedSource);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/certificates/identity/LastClickedSource.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ActiveDirectoryIdentity;
// clang-format on

class ClickSourceContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void()>> mReset;
    // NOLINTEND

public:
    // prevent constructor by default
    ClickSourceContext();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    ClickSourceContext(::Bedrock::NotNullNonOwnerPtr<::ActiveDirectoryIdentity> identity, ::LastClickedSource source);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::ActiveDirectoryIdentity> identity, ::LastClickedSource source);
    // NOLINTEND
};
#else // @header-generator platform
class ClickSourceContext {};
#endif // @header-generator platform
#endif // @header-generator platform
