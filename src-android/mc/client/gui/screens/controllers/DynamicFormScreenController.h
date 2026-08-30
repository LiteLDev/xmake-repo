#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/common/JsonValidator.h"

// auto generated forward declare list
// clang-format off
class DynamicContentBindingInformation;
class MainMenuScreenModel;
class UIPropertyBag;
namespace Json { class Reader; }
namespace Json { class Value; }
// clang-format on

class DynamicFormScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 160> mValidator;
    ::ll::UntypedStorage<8, 24>  mBindingData;
    // NOLINTEND

public:
    // prevent constructor by default
    DynamicFormScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DynamicFormScreenController();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DynamicFormScreenController(
        std::shared_ptr<MainMenuScreenModel>,
        ::JsonValidator::Property const&,
        std::shared_ptr<DynamicContentBindingInformation>
    );

    MCNAPI float _getNewSliderValueNotFinished(int, float, bool);

    MCNAPI void _handleValidationErrors(::Json::Reader const&, std::vector<std::string>);

    MCNAPI void _registerBindings();

    MCNAPI bool _resolveControlEnabled(::Json::Value const&) const;

    MCNAPI ::Json::Value getContentValues() const;

    MCNAPI bool parseJson(std::string const&, ::Json::Value&);

    MCNAPI bool validateAndBind(::Json::Value const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<MainMenuScreenModel>,
        ::JsonValidator::Property const&,
        std::shared_ptr<DynamicContentBindingInformation>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
