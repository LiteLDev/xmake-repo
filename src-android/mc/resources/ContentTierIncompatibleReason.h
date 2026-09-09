#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class I18n;
// clang-format on

class ContentTierIncompatibleReason {
public:
    // ContentTierIncompatibleReason inner types define
    using ErrorValue = uint;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mError;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentTierIncompatibleReason();

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

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::string
    getExpandedI18nErrorList(::I18n&, uint, std::string const&, std::vector<std::string> const&);

    MCNAPI static std::vector<std::string> getI18nErrorLabelList(uint, std::string const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::ContentTierIncompatibleReason& NoError();
    // NOLINTEND
};
