#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/option_types/Option.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/options/option_types/OptionOwnerType.h"
#include "mc/options/option_types/OptionResetFlags.h"

class Int64Option : public ::Option {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, long const>         VALUE_MAX;
    ::ll::TypedStorage<8, 8, long const>         VALUE_MIN;
    ::ll::TypedStorage<8, 8, long>               mValue;
    ::ll::TypedStorage<8, 8, long>               mDefaultValue;
    ::ll::TypedStorage<1, 1, bool>               mClampToRange;
    ::ll::TypedStorage<8, 24, std::vector<long>> mPossibleValues;
    ::ll::UntypedStorage<8, 48>                  mCoerceSaveValueCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    Int64Option();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Int64Option() = default;

    virtual void save(std::vector<std::pair<std::string, std::string>>&);

    virtual void load(std::string const&);
    // NOLINTEND
};
