#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
