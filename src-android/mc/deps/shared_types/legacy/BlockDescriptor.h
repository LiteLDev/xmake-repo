#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::Legacy {

struct BlockDescriptor {
public:
    // BlockDescriptor inner types declare
    // clang-format off
    struct Compound;
    // clang-format on

    // BlockDescriptor inner types define
    struct Compound {
    public:
        // Compound inner types define
        enum class Type : int {
            none    = 0,
            string  = 1,
            integer = 2,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>                                           mString;
        ::ll::TypedStorage<4, 4, int>                                                    mInt;
        ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::BlockDescriptor::Compound::Type> mType;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void fromInt(int);

        MCNAPI void fromString(std::string);
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void bindType(::cereal::ReflectionCtx&);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                                           mName;
    ::ll::TypedStorage<8, 24, std::map<std::string, SharedTypes::Legacy::BlockDescriptor::Compound>> mStates;
    ::ll::TypedStorage<8, 24, std::string>                                                           mTags;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockDescriptor(::SharedTypes::Legacy::BlockDescriptor const&);

    MCNAPI BlockDescriptor(
        std::string,
        std::map<std::string, SharedTypes::Legacy::BlockDescriptor::Compound>,
        std::string
    );

    MCNAPI ~BlockDescriptor();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::Legacy::BlockDescriptor const&);

    MCNAPI void* $ctor(std::string, std::map<std::string, SharedTypes::Legacy::BlockDescriptor::Compound>, std::string);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::Legacy
