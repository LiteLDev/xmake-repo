#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ScriptStat {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // ScriptStat inner types define
    using ScriptStatValue = std::variant<double, std::string>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                                   mName;
    ::ll::TypedStorage<1, 1, bool>                                                           mShouldAggregate;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<std::variant<double, std::string>>>> mValues;
    ::ll::UntypedStorage<8, 32>                                                              mChildren;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk2712c2;
    ::ll::UntypedStorage<1, 1>  mUnkf48bba;
    ::ll::UntypedStorage<8, 32> mUnk87f837;
    ::ll::UntypedStorage<8, 32> mUnkca689c;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ScriptStat();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptStat(::ScriptStat const&);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptStat(std::string, std::variant<double, std::string>, std::optional<std::vector<ScriptStat>>);
#else // @header-generator platform
    MCNAPI ScriptStat(
        ::std::string                                name,
        ::std::variant<double, ::std::string>        value,
        ::std::optional<::std::vector<::ScriptStat>> children
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScriptStat& addChild(::ScriptStat&&);
#else // @header-generator platform
    MCNAPI ScriptStat(
        ::std::string                                                         name,
        ::std::optional<::std::vector<::std::variant<double, ::std::string>>> values,
        ::std::optional<::std::vector<::ScriptStat>>                          children
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<std::vector<ScriptStat>> const& getChildren() const;
#else // @header-generator platform
    MCNAPI ::ScriptStat& addChild(::ScriptStat&& child);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void reserveSize(ulong);

    MCNAPI void setChildren(std::vector<ScriptStat>&&);

    MCNAPI void setShouldAggregate(bool);

    MCNAPI void setValues(std::vector<std::variant<double, std::string>>&&);
#else // @header-generator platform
    MCNAPI ::ScriptStat& operator=(::ScriptStat const&);
#endif // @header-generator platform

    MCNAPI ~ScriptStat();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);

    MCNAPI static double bytesToKiloBytes(long);
#else // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptStat const&);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string, std::variant<double, std::string>, std::optional<std::vector<ScriptStat>>);
#else // @header-generator platform
    MCNAPI void* $ctor(
        ::std::string                                name,
        ::std::variant<double, ::std::string>        value,
        ::std::optional<::std::vector<::ScriptStat>> children
    );

    MCNAPI void* $ctor(
        ::std::string                                                         name,
        ::std::optional<::std::vector<::std::variant<double, ::std::string>>> values,
        ::std::optional<::std::vector<::ScriptStat>>                          children
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// free functions
// NOLINTBEGIN
MCNAPI bool operator==(::ScriptStat const&, ::ScriptStat const&);
// NOLINTEND
#endif // @header-generator platform
