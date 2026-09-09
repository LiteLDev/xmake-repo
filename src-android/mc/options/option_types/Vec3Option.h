#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/option_types/Option.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/options/option_types/OptionOwnerType.h"
#include "mc/options/option_types/OptionResetFlags.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class Vec3Option : public ::Option {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mValue;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mDefaultValue;
    // NOLINTEND

public:
    // prevent constructor by default
    Vec3Option();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void save(std::vector<std::pair<std::string, std::string>>&);

    virtual void load(::Json::Value const&);

    virtual void load(std::string const&);
    // NOLINTEND
};
