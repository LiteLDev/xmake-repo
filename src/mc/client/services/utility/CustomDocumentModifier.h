#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DateManager;
struct DurableCustom;
// clang-format on

class CustomDocumentModifier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mDateManager;
    // NOLINTEND

public:
    // prevent constructor by default
    CustomDocumentModifier();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CustomDocumentModifier(::gsl::not_null<Bedrock::NonOwnerPointer<const DateManager>> const);

    MCNAPI void _setPurchasable(::DurableCustom&) const;

    MCNAPI void modifyCustomJson(::DurableCustom&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<const DateManager>> const);
    // NOLINTEND
};
#else // @header-generator platform
class CustomDocumentModifier {};
#endif // @header-generator platform
