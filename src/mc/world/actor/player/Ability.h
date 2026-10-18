#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Ability {
public:
    // Ability inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class Type : uchar {
        Invalid = 0,
        Unset   = 1,
        Bool    = 2,
        Float   = 3,
    };

#else // @header-generator platform
#endif // @header-generator platform
    enum class Options : uchar {
        None                        = 0,
        NoSave                      = 1,
        CommandExposed              = 2,
        PermissionsInterfaceExposed = 4,
    };

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    enum class Type : uchar {
        Invalid = 0,
        Unset   = 1,
        Bool    = 2,
        Float   = 3,
    };

#endif // @header-generator platform
    union Value {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<1, 4>      mBoolVal;
#else // @header-generator platform
        ::ll::TypedStorage<1, 4, bool>  mBoolVal;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    Ability(Ability const&);

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getBool() const;

    MCNAPI float getFloat() const;

    MCNAPI ::Ability::Type getType() const;

    MCNAPI bool hasOption(::Ability::Options) const;

    MCNAPI bool isSet() const;

    MCNAPI bool operator!=(::Ability const&) const;

    MCNAPI void setBool(bool);

    MCNAPI void setFloat(float);

    MCNAPI void unSet();
#else // @header-generator platform
    MCAPI bool operator!=(::Ability const& rhs) const;
#endif // @header-generator platform
    // NOLINTEND
};
