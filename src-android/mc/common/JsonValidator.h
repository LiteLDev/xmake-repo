#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace Json { enum ValueType : uchar; }
// clang-format on

class JsonValidator {
public:
    // JsonValidator inner types declare
    // clang-format off
    class Property;
    // clang-format on

    // JsonValidator inner types define
    class Property {
    public:
        // Property inner types define
        using PropertyPtr = std::shared_ptr<JsonValidator::Property>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24>                                         mTypes;
        ::ll::TypedStorage<1, 1, bool>                                      mIsRequired;
        ::ll::TypedStorage<1, 1, bool>                                      mRequiresConditionalProperty;
        ::ll::TypedStorage<8, 24, std::string>                              mDescription;
        ::ll::TypedStorage<8, 16, std::shared_ptr<JsonValidator::Property>> mChildProperty;
        ::ll::UntypedStorage<8, 24>                                         mConditionalPropertiesByValue;
        ::ll::UntypedStorage<8, 24>                                         mConditionalPropertiesByType;
        ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::shared_ptr<JsonValidator::Property>>>
            mPropertyMap;
        // NOLINTEND

    public:
        // prevent constructor by default
        Property(Property const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::JsonValidator::Property& addChildProperty(::JsonValidator::Property const&);

        MCNAPI ::JsonValidator::Property&
        addConditionalProperty(::Json::Value const&, ::JsonValidator::Property const&);

        MCNAPI ::JsonValidator::Property& addType(::Json::ValueType);

        MCNAPI ::JsonValidator::Property& description(std::string const&);

        MCNAPI ::JsonValidator::Property& operator=(::JsonValidator::Property const&);

        MCNAPI ::JsonValidator::Property& operator[](std::string const&);

        MCNAPI ::JsonValidator::Property& requireConditionalProperty();

        MCNAPI ::JsonValidator::Property& required();
        // NOLINTEND
    };

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool validate(::JsonValidator::Property const&, ::Json::Value const&, std::vector<std::string>*);
    // NOLINTEND
};
