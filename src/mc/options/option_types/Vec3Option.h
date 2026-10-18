#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/option_types/Option.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/options/option_types/OptionID.h"
#include "mc/options/option_types/OptionOwnerType.h"
#include "mc/options/option_types/OptionResetFlags.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class Vec3Option : public ::Option {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mValue;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mDefaultValue;
#else // @header-generator platform
    ::ll::TypedStorage<4, 12, ::glm::vec3> mValue;
    ::ll::TypedStorage<4, 12, ::glm::vec3> mDefaultValue;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    Vec3Option();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual void save(std::vector<std::pair<std::string, std::string>>&);
#else // @header-generator platform
    virtual void save(::std::vector<::std::pair<::std::string, ::std::string>>&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void load(::Json::Value const&);
#else // @header-generator platform
    virtual void load(::std::string const&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void load(std::string const&);
#else // @header-generator platform
    virtual void load(::Json::Value const& valueJson) /*override*/;
#endif // @header-generator platform
    // NOLINTEND
};
