#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Json { enum ValueType : uchar; }
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        // Property inner types define
        using PropertyPtr = std::shared_ptr<JsonValidator::Property>;

    public:
#else // @header-generator platform
#endif // @header-generator platform
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 24>                                         mTypes;
        ::ll::TypedStorage<1, 1, bool>                                      mIsRequired;
        ::ll::TypedStorage<1, 1, bool>                                      mRequiresConditionalProperty;
        ::ll::TypedStorage<8, 24, std::string>                              mDescription;
        ::ll::TypedStorage<8, 16, std::shared_ptr<JsonValidator::Property>> mChildProperty;
        ::ll::UntypedStorage<8, 24>                                         mConditionalPropertiesByValue;
        ::ll::UntypedStorage<8, 24>                                         mConditionalPropertiesByType;
        ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::shared_ptr<JsonValidator::Property>>>
            mPropertyMap;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 24> mUnk693a69;
        ::ll::UntypedStorage<1, 1>  mUnk7ec7d1;
        ::ll::UntypedStorage<1, 1>  mUnk88cb04;
        ::ll::UntypedStorage<8, 32> mUnk3f6a10;
        ::ll::UntypedStorage<8, 16> mUnk255cfa;
        ::ll::UntypedStorage<8, 24> mUnk1d2869;
        ::ll::UntypedStorage<8, 24> mUnk87cb33;
        ::ll::UntypedStorage<8, 64> mUnk1a4adc;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
        Property(Property const&);
#else // @header-generator platform
        Property();
#endif // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ::JsonValidator::Property& addChildProperty(::JsonValidator::Property const&);
#else // @header-generator platform
        MCNAPI Property(::JsonValidator::Property const&);

        MCNAPI ::JsonValidator::Property& addChildProperty(::JsonValidator::Property const& prop);
#endif // @header-generator platform

        MCNAPI ::JsonValidator::Property&
#if defined(LL_PLAT_A) // @header-generator platform
        addConditionalProperty(::Json::Value const&, ::JsonValidator::Property const&);

        MCNAPI ::JsonValidator::Property& addType(::Json::ValueType);

        MCNAPI ::JsonValidator::Property& description(std::string const&);
#else // @header-generator platform
        addConditionalProperty(::Json::Value const& value, ::JsonValidator::Property const& prop);
#endif // @header-generator platform

        MCNAPI ::JsonValidator::Property& operator=(::JsonValidator::Property const&);

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ::JsonValidator::Property& operator[](std::string const&);
#else // @header-generator platform
        MCNAPI ::JsonValidator::Property& operator[](::std::string const& propName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ::JsonValidator::Property& requireConditionalProperty();
#else // @header-generator platform
        MCNAPI ~Property();
        // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ::JsonValidator::Property& required();
#else // @header-generator platform
    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::JsonValidator::Property const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool validate(::JsonValidator::Property const&, ::Json::Value const&, std::vector<std::string>*);
#else // @header-generator platform
    MCNAPI static bool validate(
        ::JsonValidator::Property const& rootProp,
        ::Json::Value const&             rootData,
        ::std::vector<::std::string>*    errors
    );
#endif // @header-generator platform
    // NOLINTEND
};
