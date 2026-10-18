#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/JsonValidator.h"

class FormJsonValidator {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::JsonValidator::Property getContentItemProperty(
#if defined(LL_PLAT_A) // @header-generator platform
        ::JsonValidator::Property const&,
        ::JsonValidator::Property const&,
        ::JsonValidator::Property const&,
        ::JsonValidator::Property const&,
        ::JsonValidator::Property const&,
        ::JsonValidator::Property const&,
        ::JsonValidator::Property const&,
        ::JsonValidator::Property const&
#else // @header-generator platform
        ::JsonValidator::Property const& labelType,
        ::JsonValidator::Property const& toggleType,
        ::JsonValidator::Property const& sliderType,
        ::JsonValidator::Property const& stepSliderType,
        ::JsonValidator::Property const& dropdownType,
        ::JsonValidator::Property const& textInputType,
        ::JsonValidator::Property const& headerType,
        ::JsonValidator::Property const& dividerType
#endif // @header-generator platform
    );

    MCNAPI static ::JsonValidator::Property getControlLockedProperty();

    MCNAPI static ::JsonValidator::Property getDividerProperty();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::JsonValidator::Property getDropdownProperty(bool);
#else // @header-generator platform
    MCNAPI static ::JsonValidator::Property getDropdownProperty(bool requiresDefault);
#endif // @header-generator platform

    MCNAPI static ::JsonValidator::Property getHeaderProperty();

    MCNAPI static ::JsonValidator::Property getLabelProperty();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::JsonValidator::Property getSliderProperty(bool);
#else // @header-generator platform
    MCNAPI static ::JsonValidator::Property getSliderProperty(bool requiresDefault);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::JsonValidator::Property getStepSliderProperty(bool);
#else // @header-generator platform
    MCNAPI static ::JsonValidator::Property getStepSliderProperty(bool requiresDefault);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::JsonValidator::Property getTextInputProperty(bool);
#else // @header-generator platform
    MCNAPI static ::JsonValidator::Property getStringOrObjectProperty();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::JsonValidator::Property getToggleProperty(bool);
#else // @header-generator platform
    MCNAPI static ::JsonValidator::Property getTextInputProperty(bool requiresDefault);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::JsonValidator::Property getValidator();
#else // @header-generator platform
    MCNAPI static ::JsonValidator::Property getToggleProperty(bool requiresDefault);

#ifdef LL_PLAT_C
    MCNAPI static ::JsonValidator::Property getValidator();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
