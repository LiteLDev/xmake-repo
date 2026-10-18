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
#if defined(LL_PLAT_A) // @header-generator platform
            none    = 0,
            string  = 1,
            integer = 2,
#else // @header-generator platform
            None    = 0,
            String  = 1,
            Integer = 2,
#endif // @header-generator platform
        };

    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string>                                           mString;
#else // @header-generator platform
        ::ll::TypedStorage<8, 32, ::std::string>                                         mString;
#endif // @header-generator platform
        ::ll::TypedStorage<4, 4, int>                                                    mInt;
        ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::BlockDescriptor::Compound::Type> mType;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void fromInt(int);
#else // @header-generator platform
        MCAPI void fromString(::std::string str);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void fromString(std::string);
#else // @header-generator platform
        MCAPI ~Compound();
#endif // @header-generator platform
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
        MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                                           mName;
    ::ll::TypedStorage<8, 24, std::map<std::string, SharedTypes::Legacy::BlockDescriptor::Compound>> mStates;
    ::ll::TypedStorage<8, 24, std::string>                                                           mTags;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                                                               mName;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::SharedTypes::Legacy::BlockDescriptor::Compound>> mStates;
    ::ll::TypedStorage<8, 32, ::std::string>                                                               mTags;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    BlockDescriptor();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BlockDescriptor(::SharedTypes::Legacy::BlockDescriptor const&);
#else // @header-generator platform
    MCAPI BlockDescriptor(::SharedTypes::Legacy::BlockDescriptor const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BlockDescriptor(
        std::string,
        std::map<std::string, SharedTypes::Legacy::BlockDescriptor::Compound>,
        std::string
#else // @header-generator platform
    MCAPI BlockDescriptor(
        ::std::string                                                               name,
        ::std::map<::std::string, ::SharedTypes::Legacy::BlockDescriptor::Compound> states,
        ::std::string                                                               tags
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~BlockDescriptor();
#else // @header-generator platform
    MCAPI ::SharedTypes::Legacy::BlockDescriptor& operator=(::SharedTypes::Legacy::BlockDescriptor&&);

    MCAPI ::SharedTypes::Legacy::BlockDescriptor& operator=(::SharedTypes::Legacy::BlockDescriptor const&);

    MCAPI ~BlockDescriptor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::Legacy::BlockDescriptor const&);
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::Legacy::BlockDescriptor const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string, std::map<std::string, SharedTypes::Legacy::BlockDescriptor::Compound>, std::string);
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::string                                                               name,
        ::std::map<::std::string, ::SharedTypes::Legacy::BlockDescriptor::Compound> states,
        ::std::string                                                               tags
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::Legacy
