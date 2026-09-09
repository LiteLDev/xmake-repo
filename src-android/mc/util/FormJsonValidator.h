#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/JsonValidator.h"

class FormJsonValidator {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::JsonValidator::Property getContentItemProperty(
        ::JsonValidator::Property const&,
        ::JsonValidator::Property const&,
        ::JsonValidator::Property const&,
        ::JsonValidator::Property const&,
        ::JsonValidator::Property const&,
        ::JsonValidator::Property const&,
        ::JsonValidator::Property const&,
        ::JsonValidator::Property const&
    );

    MCNAPI static ::JsonValidator::Property getControlLockedProperty();

    MCNAPI static ::JsonValidator::Property getDividerProperty();

    MCNAPI static ::JsonValidator::Property getDropdownProperty(bool);

    MCNAPI static ::JsonValidator::Property getHeaderProperty();

    MCNAPI static ::JsonValidator::Property getLabelProperty();

    MCNAPI static ::JsonValidator::Property getSliderProperty(bool);

    MCNAPI static ::JsonValidator::Property getStepSliderProperty(bool);

    MCNAPI static ::JsonValidator::Property getTextInputProperty(bool);

    MCNAPI static ::JsonValidator::Property getToggleProperty(bool);

    MCNAPI static ::JsonValidator::Property getValidator();
    // NOLINTEND
};
