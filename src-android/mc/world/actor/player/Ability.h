#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Ability {
public:
    // Ability inner types define
    enum class Type : uchar {
        Invalid = 0,
        Unset   = 1,
        Bool    = 2,
        Float   = 3,
    };

    enum class Options : uchar {
        None                        = 0,
        NoSave                      = 1,
        CommandExposed              = 2,
        PermissionsInterfaceExposed = 4,
    };

    union Value {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 4>      mBoolVal;
        ::ll::TypedStorage<4, 4, float> mFloatVal;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::Ability::Type>    mType;
    ::ll::TypedStorage<4, 4, ::Ability::Value>   mValue;
    ::ll::TypedStorage<1, 1, ::Ability::Options> mOptions;
    // NOLINTEND

public:
    // prevent constructor by default
    Ability(Ability const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool getBool() const;

    MCNAPI float getFloat() const;

    MCNAPI ::Ability::Type getType() const;

    MCNAPI bool hasOption(::Ability::Options) const;

    MCNAPI bool isSet() const;

    MCNAPI bool operator!=(::Ability const&) const;

    MCNAPI void setBool(bool);

    MCNAPI void setFloat(float);

    MCNAPI void unSet();
    // NOLINTEND
};
