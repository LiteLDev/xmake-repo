#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ScriptStat {
public:
    // ScriptStat inner types define
    using ScriptStatValue = std::variant<double, std::string>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                                   mName;
    ::ll::TypedStorage<1, 1, bool>                                                           mShouldAggregate;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<std::variant<double, std::string>>>> mValues;
    ::ll::UntypedStorage<8, 32>                                                              mChildren;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptStat(::ScriptStat const&);

    MCNAPI ScriptStat(std::string, std::variant<double, std::string>, std::optional<std::vector<ScriptStat>>);

    MCNAPI ::ScriptStat& addChild(::ScriptStat&&);

    MCNAPI std::optional<std::vector<ScriptStat>> const& getChildren() const;

    MCNAPI void reserveSize(ulong);

    MCNAPI void setChildren(std::vector<ScriptStat>&&);

    MCNAPI void setShouldAggregate(bool);

    MCNAPI void setValues(std::vector<std::variant<double, std::string>>&&);

    MCNAPI ~ScriptStat();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);

    MCNAPI static double bytesToKiloBytes(long);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptStat const&);

    MCNAPI void* $ctor(std::string, std::variant<double, std::string>, std::optional<std::vector<ScriptStat>>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
