#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class I18n;
// clang-format on

class ContentTierIncompatibleReason {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // ContentTierIncompatibleReason inner types define
    using ErrorValue = uint;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, uint> mError;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk32cd20;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ContentTierIncompatibleReason& operator=(ContentTierIncompatibleReason const&);
    ContentTierIncompatibleReason(ContentTierIncompatibleReason const&);
#endif // @header-generator platform
    ContentTierIncompatibleReason();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI uint const addError(::ContentTierIncompatibleReason const&);

    MCNAPI std::string getExpandedI18nErrorList(::I18n&, std::string const&, std::vector<std::string> const&) const;

    MCNAPI std::vector<std::string> getI18nErrorLabelList(std::string const&) const;

    MCNAPI bool const isErrorReason(uint const) const;

    MCNAPI bool const isFatal() const;

    MCNAPI bool const isOK() const;
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string
    getExpandedI18nErrorList(::I18n&, uint, std::string const&, std::vector<std::string> const&);
#else // @header-generator platform
    MCNAPI static ::std::string getExpandedI18nErrorList(
        ::I18n&                             loc,
        uint                                errorValue,
        ::std::string const&                i18nContextPrefix,
        ::std::vector<::std::string> const& arguments
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::vector<std::string> getI18nErrorLabelList(uint, std::string const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI static ::std::vector<::std::string> getI18nErrorLabelList(uint errorValue, ::std::string const& i18nPrefix);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::ContentTierIncompatibleReason& NoError();
    // NOLINTEND
};
